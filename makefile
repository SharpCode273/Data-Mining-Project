CC=c++
CXXFLAGS=-g
CFLAGS=
TARGET=test
DEPENDENCIES=test.cpp

ALL: $(TARGET)

(TARGET): $(DEPENDENCIES)
	$(CC) $(CXXFLAGS) $(DEPENDENCIES) -o $@