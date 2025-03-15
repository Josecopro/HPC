# Definir el compilador
CC = gcc

# Definir las banderas/opciones del compilador
CFLAGS = -Iinclude -Wall -Wextra -Werror -pedantic -std=c99 -g

# Archivos fuente y binario de salida
SRC = src/main.c src/triangulo.c
OBJ = src/main.o src/triangulo.o
TARGET = bin/main.exe

# Regla para compilar el programa
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Regla para compilar los archivos fuente
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto y el binario
clean:
	rm -f $(OBJ) $(TARGET)

# Regla para ejecutar el programa
run: $(TARGET)
		./$(TARGET)