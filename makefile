# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = zoo

OBS = zoo.o Animal.o AnimalsInZoo.o

all: $(TARGET)

$(TARGET): $(OBS)
	$(CXX) $(CXXFLAGS) $(OBS) -o $(TARGET)
	./$(TARGET)


zoo.o: zoo.cpp Animal.h AnimalsInZoo.h
	$(CXX) $(CXXFLAGS) -c zoo.cpp

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h Animal.h
	$(CXX) $(CXXFLAGS) -c AnimalsInZoo.cpp

clean:
	rm -f *.o $(TARGET)


