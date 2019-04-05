# Git简介

Git是先进的分布式版本控制系统。

## 什么是版本控制系统（VCS）

自动记录每次文件的改动，并可以让他人协作编辑的系统软件。

* **版本控制**

先来理解版本控制，所谓版本控制，意思是再文件的修改历程中保留修改的历史，让你可以方便的撤销之前对文件的修改操作。

最简化的版本控制模型就是编辑器中的**[撤销]**功能。当你发现前几天有个地方写错了，要回到原来的版本时，可以通过VCS选择撤回到原来的版本。或者对于某个功能有了不同的实现方法，你想将两种都保留下来，你可以在之前的基础上创建分支，在分支上修改，也不会影响另外的版本。

* **主动提交**
* **多人合作同步需求**



开发团队中的每个人向中央仓库主动提交自己的改动和同步别人的改动，并在需要时查看和操作历史版本，这就是版本控制系统。

# 安装

从[git官网](https://git-scm.com/downloads)下载安装包，按默认选项安装即可。安装完成后再开始菜单里找到"Git"->"Git Bash"，会蹦出一个类似命令行窗口的东西，说明安装成功！

![](https://cdn.liaoxuefeng.com/cdn/files/attachments/001384907073134ef6feff559cf4ce3a2c5c588d2831c0a000/0)



## 创建版本库

选择一个合适的地方，创建一个空目录：

```shell
mkdir 文件名
cd 文件名
pwd

```

通过 **git init**命令把这个目录编程Git可以管理的仓库

```shell
git init <file>

```

### 把文件添加到版本库

创建一个文件，放到版本库目录下。

使用命令 **git add**把文件添加到仓库：

将改动告诉给Git，使用 **git commit**命令

```shell
git commit -m<message>
```

## 时光穿梭

如果我们在提交后对文件进行一些改动，通过 **git status**命令可以查看当前仓库的状态。我们可以知道文件被改动了，但还没有把修改进行提交。通过 **git diff**命令，查看具体修改。

### 版本回退

通过 **git log**命令查看提交日志。一大串的数字其实是commit id（版本号）

回退到上一个版本可以使用 **git reset**命令

```shell
git reset --hard HEAD^
git reset --hard <commit id>
```

**git reflog**查看历史命令

**git rm <file>** 命令，删除文件

## 远程仓库

先注册GitHub账号。之后

1. 创建SSH Key.在主目录下看看有没有.ssh目录，查看有没有id_rsa和id_rsa.pub文件。有的话跳到下一步，没有的话，打开Shell（Windows下打开Git Bash），创建SSH Key：

   ```shell
   ssh-keygen -t rsa -C "youremail@example.com"
   ```

   一路回车默认，无需设置密码

2. 登陆GitHub,打开Account settings -> SSH and GPG Keys页面:

点击“add ssh key”,填上任意Title,在Key文本框里粘贴id_rsa.pub文件的内容

### 添加远程仓库

你已经在本地创建了一个Git仓库，又想在Github创建一个仓库，并且让这两个仓库进行远程同步。

登陆Github，点击“Creat a new repo”,创建新仓库。

1. 将已有的本地仓库与之关联，然后将本地仓库的内容推送到Github仓库
2. 克隆新的仓库

```shell
1. 关联本地
git remote add origin <url>
git push -u origin master

git push origin master
2.克隆
git clone <url>

```



## 参考

* 廖雪峰的Git教程
* Git原理详解及实用指南