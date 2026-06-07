# makefile

cc = clang						# C compiler
CFLAGS = -c -Wall			# Compiler flags
LFLAGS = -Wall				# Linker flags
OBJ = foo.o goo.o main.o	# Object files
EXEC = prog 					# Executable name

$(EXEC): $(OBJ)
	$(cc) $(LFLAGS) -o $@ $(OBJ)

foo.o: foo.h goo.h foo.c
	$(cc) $(CFLAGS) -o $@ foo.c

goo.o: goo.h goo.c
	$(cc) $(CFLAGS) -o $@ goo.c

main.o: foo.h main.c
	$(cc) $(CFLAGS) -o $@ main.c

clean: # Only excecuted when called explicitly (make clean)
	rm -f $(OBJ) $(EXEC)