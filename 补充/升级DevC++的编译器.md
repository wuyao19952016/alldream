## 前言

DevC++是采用MinGW来作为C/C++的编译器的，但是由于多年未更新，版本老旧。当然，我们可以继续使用它来进行相关内容学习，如果想对编译器进行更新可以自己下载最新版本的MinGW进行替换。

## 安装MinGW

MinGW可使用[MinGW Installation Manager](https://sourceforge.net/projects/mingw/)进行安装，但是由于资源在境外下载速度比较慢，且在安装后发现版本是在三年前的，虽然比DevC++的新一些。所以推荐采用另一种安装方式[MinGW Distro](https://nuwen.net/mingw.html#install)。这个是GCC 8.2.0版本的，并且要用的包全都已经打包好了，下载完成解压即可使用。下载页面分两个，如果在电脑上已经安装好Git可以下载[without-git](https://nuwen.net/files/mingw/mingw-16.1-without-git.exe)版本，如果没有就下载[完整](https://nuwen.net/files/mingw/mingw-16.1.exe)的就行。

解压完成后可手动进行环境配置，或者运行里面的自带的bat脚本进行配置。配置完成后打开命令行窗口，输入gcc -v查看版本，观察是否已经成功配置。

![gcc -v](https://raw.githubusercontent.com/wylovecat/picture/master/img/gcc.png?token=AE6JLCQNRFMH4YQOD7UOJJS4X27VS)

出现上图所示内容代表已经配置成功。

## 替换编译器

打开DevC++，点击工具-编译环境，在设定编译器配置时，点击第二个绿色加号（由文件夹添加编译器配置），选择我们刚刚解压的MinGW文件夹，他会自动进行配置，点击确定即可完成。