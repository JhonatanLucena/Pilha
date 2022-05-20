CC=g++
flag=-c
CFLAGS= 
EXEC=principal
SRC=main.cpp

lib=pilha.cpp
libo=pilha.o
liba=pilha.a


all: limpar compilar executar
compilar:
	$(CC) $(CFLAGS) -o $(EXEC) $(lib)  $(SRC)
compilaro:limpar
	$(CC) $(flag) $(lib) -o $(libo)
	$(CC) $(CFLAGS) -o $(EXEC) $(libo) $(SRC)

compilara:limpar
	$(CC) $(flag) $(lib) -o $(libo)
	ar -cr $(liba) $(libo)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC) $(liba)

limpar:
	rm -f $(EXEC)
	rm -f $(libo)
	rm -f $(liba)
	

executar:
	clear
	./$(EXEC)
	