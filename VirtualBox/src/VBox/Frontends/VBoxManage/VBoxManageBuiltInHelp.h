/* Autogenerated by C:/newbuild/MassVM/out/win.amd64/release/obj/manual/docbook-refentry-to-H-help.xsl, do not edit! */

#ifndef ___VBoxManageBuiltInHelp_h___
#define ___VBoxManageBuiltInHelp_h___

#include <iprt/message.h>

RT_C_DECLS_BEGIN

typedef enum HELP_CMD_VBOXMANAGE
{
    HELP_CMD_VBOXMANAGE_INVALID = 0,
    HELP_CMD_DEBUGVM,
    HELP_CMD_EXTPACK,
    HELP_CMD_UNATTENDED,
    HELP_CMD_VBOXMANAGE_END
} HELP_CMD_VBOXMANAGE;

enum
{
#define HELP_SCOPE_DEBUGVM                                       RT_BIT_32(HELP_SCOPE_DEBUGVM_BIT)
        HELP_SCOPE_DEBUGVM_BIT = 0,
#define HELP_SCOPE_DEBUGVM_DUMPVMCORE                            RT_BIT_32(HELP_SCOPE_DEBUGVM_DUMPVMCORE_BIT)
        HELP_SCOPE_DEBUGVM_DUMPVMCORE_BIT,
#define HELP_SCOPE_DEBUGVM_INFO                                  RT_BIT_32(HELP_SCOPE_DEBUGVM_INFO_BIT)
        HELP_SCOPE_DEBUGVM_INFO_BIT,
#define HELP_SCOPE_DEBUGVM_INJECTNMI                             RT_BIT_32(HELP_SCOPE_DEBUGVM_INJECTNMI_BIT)
        HELP_SCOPE_DEBUGVM_INJECTNMI_BIT,
#define HELP_SCOPE_DEBUGVM_LOG                                   RT_BIT_32(HELP_SCOPE_DEBUGVM_LOG_BIT)
        HELP_SCOPE_DEBUGVM_LOG_BIT,
#define HELP_SCOPE_DEBUGVM_LOGDEST                               RT_BIT_32(HELP_SCOPE_DEBUGVM_LOGDEST_BIT)
        HELP_SCOPE_DEBUGVM_LOGDEST_BIT,
#define HELP_SCOPE_DEBUGVM_LOGFLAGS                              RT_BIT_32(HELP_SCOPE_DEBUGVM_LOGFLAGS_BIT)
        HELP_SCOPE_DEBUGVM_LOGFLAGS_BIT,
#define HELP_SCOPE_DEBUGVM_OSDETECT                              RT_BIT_32(HELP_SCOPE_DEBUGVM_OSDETECT_BIT)
        HELP_SCOPE_DEBUGVM_OSDETECT_BIT,
#define HELP_SCOPE_DEBUGVM_OSINFO                                RT_BIT_32(HELP_SCOPE_DEBUGVM_OSINFO_BIT)
        HELP_SCOPE_DEBUGVM_OSINFO_BIT,
#define HELP_SCOPE_DEBUGVM_OSDMESG                               RT_BIT_32(HELP_SCOPE_DEBUGVM_OSDMESG_BIT)
        HELP_SCOPE_DEBUGVM_OSDMESG_BIT,
#define HELP_SCOPE_DEBUGVM_GETREGISTERS                          RT_BIT_32(HELP_SCOPE_DEBUGVM_GETREGISTERS_BIT)
        HELP_SCOPE_DEBUGVM_GETREGISTERS_BIT,
#define HELP_SCOPE_DEBUGVM_SETREGISTERS                          RT_BIT_32(HELP_SCOPE_DEBUGVM_SETREGISTERS_BIT)
        HELP_SCOPE_DEBUGVM_SETREGISTERS_BIT,
#define HELP_SCOPE_DEBUGVM_SHOW                                  RT_BIT_32(HELP_SCOPE_DEBUGVM_SHOW_BIT)
        HELP_SCOPE_DEBUGVM_SHOW_BIT,
#define HELP_SCOPE_DEBUGVM_STACK                                 RT_BIT_32(HELP_SCOPE_DEBUGVM_STACK_BIT)
        HELP_SCOPE_DEBUGVM_STACK_BIT,
#define HELP_SCOPE_DEBUGVM_STATISTICS                            RT_BIT_32(HELP_SCOPE_DEBUGVM_STATISTICS_BIT)
        HELP_SCOPE_DEBUGVM_STATISTICS_BIT,
#define HELP_SCOPE_DEBUGVM_COMMON_OPTIONS                        RT_BIT_32(HELP_SCOPE_DEBUGVM_COMMON_OPTIONS_BIT)
        HELP_SCOPE_DEBUGVM_COMMON_OPTIONS_BIT,
        HELP_SCOPE_DEBUGVM_END
};

enum
{
#define HELP_SCOPE_EXTPACK                                       RT_BIT_32(HELP_SCOPE_EXTPACK_BIT)
        HELP_SCOPE_EXTPACK_BIT = 0,
#define HELP_SCOPE_EXTPACK_INSTALL                               RT_BIT_32(HELP_SCOPE_EXTPACK_INSTALL_BIT)
        HELP_SCOPE_EXTPACK_INSTALL_BIT,
#define HELP_SCOPE_EXTPACK_UNINSTALL                             RT_BIT_32(HELP_SCOPE_EXTPACK_UNINSTALL_BIT)
        HELP_SCOPE_EXTPACK_UNINSTALL_BIT,
#define HELP_SCOPE_EXTPACK_CLEANUP                               RT_BIT_32(HELP_SCOPE_EXTPACK_CLEANUP_BIT)
        HELP_SCOPE_EXTPACK_CLEANUP_BIT,
        HELP_SCOPE_EXTPACK_END
};

enum
{
#define HELP_SCOPE_UNATTENDED                                    RT_BIT_32(HELP_SCOPE_UNATTENDED_BIT)
        HELP_SCOPE_UNATTENDED_BIT = 0,
#define HELP_SCOPE_UNATTENDED_DETECT                             RT_BIT_32(HELP_SCOPE_UNATTENDED_DETECT_BIT)
        HELP_SCOPE_UNATTENDED_DETECT_BIT,
#define HELP_SCOPE_UNATTENDED_INSTALL                            RT_BIT_32(HELP_SCOPE_UNATTENDED_INSTALL_BIT)
        HELP_SCOPE_UNATTENDED_INSTALL_BIT,
        HELP_SCOPE_UNATTENDED_END
};

extern PCRTMSGREFENTRY g_apHelpEntries[];
extern const uint32_t  g_cHelpEntries;

RT_C_DECLS_END

#endif

