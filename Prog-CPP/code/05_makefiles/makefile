# makefile
cc = clang                  # C compiler
CFLAGS = -c -Wall           # Compiler flags
LFLAGS = -Wall              # Linker flags
OBJ = foo.o goo.o main.o    # Object files
EXEC = prog                 # Executable name

# 1. Punto di partenza: controlla OBJ da sinistra a destra (foo.o, poi goo.o, infine main.o)
$(EXEC): $(OBJ)
	$(cc) $(LFLAGS) -o $@ $(OBJ)

# 2. Regole specifiche chiamate in ricorsione per generare i file .o
foo.o: foo.h goo.h foo.c
	$(cc) $(CFLAGS) -o $@ foo.c

goo.o: goo.h goo.c
	$(cc) $(CFLAGS) -o $@ goo.c

main.o: foo.h main.c
	$(cc) $(CFLAGS) -o $@ main.c

clean: # Eseguito solo se chiamato esplicitamente (make clean)
	rm -f $(OBJ) $(EXEC)