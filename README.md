# GDB-Learning   
GDB 学习，及根据大牛Liam Huang的文章，模仿的一个GDB调试的demo    
最近再学习GDB ，找了全网没找到很好的例子和教程，直到找到Liam Huang大牛的一篇文章：    
http://www.brendangregg.com/blog/2016-08-09/gdb-example-ncurses.html    
网上也有中文翻译好的，还有个比较好的视频：  
Give me 15 minutes and I’ll change your view of GDB(视频在youtube上，方便大家我下载下来了：在video目录下)   

/*******分割线，好好看过上面的文章和视频再看下面*********/  

下面试来部署调试环境的：  
主要用了sample和led两个动态库：  
在Demo/sample和led目录下分别执行以下指令：   
mkdir build    
cd build    
cmake ..    
make            
sudo make install    
并在pysample和pyled目录下执行：    
python setup.py build（python版本2.7）    
并将../pysample/build/lib.linux-x86_64-2.7/sam.so    
../pyled/build/lib.linux-x86_64-2.7/led.so两个动态库拷贝到python的第三方库目录下：    
/usr/local/lib/python2.7/dist-packages    
这样就可以在python调用sample和led这两个库。    
然后就可以运行demo.py（在Demo文件夹下）了。    
运行demo.py很快就可以看到Segmentation fault，就可以照着大牛的思路进行找错了。    
当然，我写的这个Demo代码很简单，一看代码就知道是哪里错了。    
所以推荐大家，假设sample和led这两个库代码量很大，并且不要一上来就看代码。    
然后就是编译选项，由于没搞懂deb包怎么生成，所以要想在GDB中看到代码，    
只能通过sample和led两个动态库的cmakelist中的SET(CMAKE_BUILD_TYPE Debug)放开。    