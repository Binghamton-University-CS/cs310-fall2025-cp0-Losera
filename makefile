# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
zoo: zoo.o
	g++ zoo.o -o zoo
	
Animal: Animal.o
	g++ Animal.o -o Animal


# Specify how the object files should be created from source files
zoo.o: zoo.cpp
	g++ -Wall -Wextra -c zoo.cpp

Animal.o: Animal.cpp
	g++ -Wall -Wextra -c Animal.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o zoo
	rm -f *.o Animal
