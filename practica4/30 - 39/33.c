/* Escribir un programa en C que genere un Sudoku usando una matriz de 9 × 9. Poner los números iniciales al
azar hasta que se genere un Sudoku válido. Usar una función para verificar si un Sudoku dado, completo o no,
es válido. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void crear_sudoku(int sudoku[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      sudoku[i][j] = rand() % 9;      
    }
  }
}

int verificar_cuadrado(int sudoku[9][9], int fila_inicio, int col_inicio) {
    int nums[9] = {0};

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            int num = sudoku[fila_inicio + i][col_inicio + j];
            if (num < 1 || num > 9 || nums[num - 1] == 1) {
                return 0;  // Número fuera de rango o duplicado
            }
            nums[num - 1] = 1;
        }
    }
    
    return 1;  // Todos los números del 1 al 9 están presentes sin repeticiones
}

bool es_valido(int sudoku[9][9]) {
  int repetidos = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      repetidos = 0;
      int n = sudoku[i][j];
      for (int k = 0; k < 9; k++) {
        repetidos += (n == sudoku[i][k]) ? 1 : 0;
      }
      for (int k = 0; k < 9; k++) {
        repetidos += (n == sudoku[k][i]) ? 1 : 0;
      }
    }
  }

  if (repetidos > 1 || verificar_cuadrado != 1) {
    return false;
  }
  else {
    return true;
  }
}


void mostrar_sudoku(int sudoku[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%i    ", sudoku[i][j]);
    }
    printf("\n\n");
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int sudoku[9][9];
  int valido = false;
  while (valido == false) {
    crear_sudoku(sudoku);
    valido = es_valido(sudoku);
  }
  mostrar_sudoku(sudoku);
  return 0;
}
