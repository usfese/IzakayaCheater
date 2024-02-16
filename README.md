# IzakayaCheater
东方夜雀食堂修改器，目前可以修改金钱

目前支持版本：4.0.1

## 编译（仅Windows)
### 1.配置环境
请确保你已安装任意c/c++编译器，已安装cmake（>=3.5.0），已用同一编译器编译安装wxWidgets库（>=3.2）
### 2.将仓库克隆至本地
在你想放置仓库的地方打开命令行，并运行
```
git clone https://github.com/usfese/IzakayaCheater.git
```
### 3.编译
用CMake GUI或CMake CLI打开CMakeLists.txt并用偏好的编译器编译即可。
最后记得把项目下DLLS目录下的所有.dll文件复制在可执行文件同一目录下。（或者你可以用自己的wxWidgets安装中的dll）
