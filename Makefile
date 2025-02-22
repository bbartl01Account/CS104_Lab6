objects = randfuncs.o scaffold.o mathfunc.o

calculator: $(objects)
	cc -o calculator $^ -lstdc++

$(objects): %.o:%.cpp
	cc -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 -c $^ -o $@

clean:
	rm -f calculator $(objects)
