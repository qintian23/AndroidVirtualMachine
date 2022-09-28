# AndroidVirtualMachine
基于virtualBox，python，windows platform sdk等编写的安卓模拟器

## 1 编译指南

### 1.1 环境需求

Windows 10， Windows 8.1， Windows 8 or Windows 7.46bit

### 1.2 安装软件

Visual Studio 2010 with service pack 1.

Windows Driver Development Kit (WDK) V7.1

Python 2.7.x 

Git

VirtualBox

其中需求的许多库，Minw QT CURL OpenSSL已经附带

### 1.3 下载源码

### 1.4 编译源码

source\VirtualBox\run64.bat 查看编辑下你的软件安装目录
打开 vs 64位 命令行.
cd sourceVirtualBox
run64.bat
env
kmk

编译结果在 source\VirtualBox\out 目录下.

## 2 关于每一文件夹的功能

### 2.1 jom

[cmake: 使用jom实现msvc工程并发编译提高速度(-j)](https://cloud.tencent.com/developer/article/1011659)

msvc提供的nmake并没有并发编译功能（类似于gcc make的-j参数指定并发编译的任务数），而第三方工具[jom](https://wiki.qt.io/Jom)解决了这个问题，jom可以想gcc的make一样通过 -j 参数指定并发编译，让CPU全速运行，可以大大提高编译速度，节省大型项目的编译时间。

cmake也支持jom编译，cmake有一个名为”NMake Makefiles JOM”的CMake Generator就是用来生成jom格式的Makefile。

