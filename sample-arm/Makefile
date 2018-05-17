CXX             = arm-linux-gnueabihf-g++-4.9
CC              = arm-linux-gnueabihf-gcc-4.9
LD              = arm-linux-gnueabihf-gcc-4.9
AR              = arm-linux-gnueabihf-ar-4.9
RANLIB  = arm-linux-gnueabihf-ranlib-4.9

TARGET = ctranslate
OBJS = main.cpp.o
CPPOPT = -std=c++11
INCLUDES = -I../include -I/cross/arm32/usr/include/ -I/cross/arm32/usr/include/eigen3
LDFLAGS =  -L../build-arm -L../build-arm/lib -lonmt 
%.cpp.o: %.cpp
	$(CXX) $(CPPOPT) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CXX) $(CPPOPT) $(INCLUDES) -o $(TARGET) $(OBJS) $(LDFLAGS)

clean:
	rm $(TARGET) *.o
.PHONY:
	all
