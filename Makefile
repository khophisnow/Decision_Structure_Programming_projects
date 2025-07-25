# Makefile for compiling the Decision Structure C++ project

# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./decisionStructureProgrammingQuestions

# Source files
SRC = decisionStructureProgrammingMain.cpp \
      $(wildcard decisionStructureProgrammingQuestions/*.cpp)

# Output binary
TARGET = decisionStructureProgram

# Default build
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean build artifacts
clean:
	rm -f $(TARGET)
