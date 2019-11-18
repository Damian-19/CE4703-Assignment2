####################################
# makefile
#
# author: damian larkin (18230253)
# date: 17/11/2019
####################################



# to run the executable, the executable must be set as a dependency for the
# default target which is all
all: shapes

# link and compile the 2dshapes, 3dshapes, and the main
shapes: shapes2d.o shapes3d.o shapesMain.o
	gcc -o shapes shapes2d.o shapes3d.o shapes_main.o

# compile the 2dshapes
2dshapes.o: shapes2d.c shapes2d.h
	gcc -Wall -ggdb -c shapes2d.c

# compile the 3dshapes
3dshapes.o: shapes3d.c shapes3d.h
	gcc -Wall -ggdb -c shapes3d.c

# compile the main 
shapesMain.o: shapes_main.c shapes2d.h shapes3d.h
	gcc -Wall -ggdb -c shapes_main.c

clean:
	rm shapes *.o *~ *#s
# all is now used to run the shapes executable
all:
	./shapes

