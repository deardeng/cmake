CC=gcc
CFLAGS=-I.
DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: hellomake.o hellofunc.o 
	$(CC) -o hellomake hellomake.o hellofunc.o





#%.o定义了一个.o结尾的target,   %.cpp $(DEPS)为其依赖的源码和头文件。
#  $< 依赖中的第一个参数，就是对于的cpp文件。
#
#当make hello的时候需要 main.o hello.o factorial.o这三个依赖
#这三个则会调用%.o来生成，以生成main.o为例

#$@ 是target name,即hello，就是：左侧内容
#$^ 是：右侧的内容，及OBJ