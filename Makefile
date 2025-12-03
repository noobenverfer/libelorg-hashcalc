# Compiler
	CXX = g++
# Compiler flags
	CXXFLAGS = -Wall -Wextra -std=c++17
# Target executable name
	TARGET = base.exe
# Source files
	SRCS = main.cpp libelorg-hashcalc.h
# Object files
	OBJS = $(SRCS:.cpp=.o)

# Default rule
all:	$(TARGET)

# Link object files to create the executable
$(TARGET):	$(OBJS)
	$(CXX) -o $@ $^

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

	.PHONY:	all clean