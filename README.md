The Data Representation
==========
	[DDL](http://en.wikipedia.org/wiki/Data_Definition_Language)
	[Compiler](http://en.wikipedia.org/wiki/Compiler)

特性
==========
	编译器使用re2c生成词法分析代码， bison生成语法分析代码。 
	使用C语言编写， 具有很高的可移植性， 支持Windows, Linux, Unix(Mac OSX)平台。

安装
==========
	Linux下面一个典型的安装过程如下：
	mkdir build
	cd build
	cmake ../tdr
	make
	sudo make install
