
#config variables
CC=g++
CFLAGS=-Wall -g -std=c++11
LFLAGS=-lm
TARGET=out
INPUT=input.txt

#generate source and object files
CPP_SRCS :=\
	$(wildcard *.cpp)\
	$(wildcard src/*.cpp)\
	$(wildcard src/**/*.cpp)

HDRS :=\
	$(wildcard *.h)\
	$(wildcard src/*.h)\
	$(wildcard src/**/*.h)

OBJS := $(patsubst %.cpp, bin/%.o, $(wildcard *.cpp))
OBJS += $(filter %.o, $(patsubst src/%.cpp, bin/%.o, $(CPP_SRCS)))

all: build
	@echo "All Done!"

#link the built objects
build: $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LFLAGS)

#catch root directory src files
bin/%.o: %.cpp $(HDRS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

#catch all nested directory files
bin/%.o: src/%.cpp $(HDRS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET)
	rm -rf bin
	
run: build
	./$(TARGET) < $(INPUT)

which:
	@echo "FOUND SOURCES: $(CPP_SRCS)"
	@echo "FOUND HEADERS: $(HDRS)"
	@echo "TARGET OBJS: $(OBJS)"
