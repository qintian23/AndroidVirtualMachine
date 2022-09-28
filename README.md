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

## 2 关于每一个库的功能