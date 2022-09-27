# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

# This script generates the cr/include/cr_packfunctions.h file from the
# gl_header.parsed file.

from __future__ import print_function
import sys
import string

import apiutil


apiutil.CopyrightC()

print("""#ifndef CR_PACKFUNCTIONS_H
#define CR_PACKFUNCTIONS_H

/* DO NOT EDIT - THIS FILE GENERATED BY THE pack_header.py SCRIPT */

/* Prototypes for the OpenGL packer functions in packer.c and pack_bbox.c */

#include "chromium.h"
#include "state/cr_client.h"
#include "cr_pack.h"

#ifdef WINDOWS
#define PACK_APIENTRY __stdcall
#else
#define PACK_APIENTRY
#endif

#ifdef __cplusplus
extern "C" {
#endif
""")

keys = apiutil.GetDispatchedFunctions(sys.argv[1]+"/APIspec.txt")


for func_name in keys:
	if ("pack" in apiutil.ChromiumProps(func_name) or
		"extpack" in apiutil.ChromiumProps(func_name) or
		apiutil.NonVectorFunction(func_name) != '' or
		apiutil.FindSpecial('packer', func_name)):

		# OK, generate a crPackFooBar() prototype for this function
		return_type = apiutil.ReturnType(func_name)
		args = apiutil.Parameters(func_name)
		if return_type != 'void':
			if apiutil.IsPointer(return_type):
				args.append(("return_value", return_type, 0))
			else:
				args.append(("return_value", return_type + "*", 0))
		elif "pixelstore" in apiutil.Properties(func_name):
			args.append(("packstate", "const CRPixelPackState *", 0))

		if "get" in apiutil.Properties(func_name):
			args.append(("writeback", "int *", 0))

		print('void PACK_APIENTRY crPack%s(%s);' % (func_name, apiutil.MakeDeclarationStringWithContext('CR_PACKER_CONTEXT', args)))



# Now generate special BBOX, COUNT, SWAP variations on the glVertex and
# glVertexAttrib functions.
for func_name in keys:
	if (func_name[0:6] == "Vertex" and
		"pervertex" in apiutil.Properties(func_name) and
		("pack" in apiutil.ChromiumProps(func_name) or
		 apiutil.NonVectorFunction(func_name) != '')):

		assert apiutil.ReturnType(func_name) == "void"

		args = apiutil.Parameters(func_name)
		print('void PACK_APIENTRY crPack%sBBOX(%s);' % (func_name, apiutil.MakeDeclarationString(args)))
		print('void PACK_APIENTRY crPack%sBBOX_COUNT(%s);' % (func_name, apiutil.MakeDeclarationString(args)))


print("""
#ifdef __cplusplus
}
#endif

#endif /* CR_PACKFUNCTIONS_H */
""")
