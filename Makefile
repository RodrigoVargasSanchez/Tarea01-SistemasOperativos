CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = prog

all: $(TARGET)

$(TARGET): tarea01.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(TARGET)