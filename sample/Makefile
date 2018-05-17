TARGET = ctranslate
OBJS = main.cpp.o
CPPOPT = -std=c++11
#INCLUDES = -I../include -I/cross/arm32/usr/include/ -I/cross/arm32/usr/include/eigen3
INCLUDES = -I../include -I/usr/local/include/eigen3 -I../lib -I../lib/tokenizer/include/
LDFLAGS =  -L../build -L../build/lib -lonmt 
%.cpp.o: %.cpp
	$(CXX) $(CPPOPT) $(INCLUDES) -c $< -o $@

all: $(OBJS)
	$(CXX) $(CPPOPT) $(INCLUDES) -o $(TARGET) $(OBJS) $(LDFLAGS)

clean:
	rm $(TARGET) *.o
.PHONY:
	all
