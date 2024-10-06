#include "chess.h"
#include "figures.h"
#include <stdio.h>

struct Piezas{
  char** piece;
  int fila;
  int columna;
};

void display(){
  struct Piezas piezas[16] = {
    {queen, 0, 5},
    {king, 0, 7}
  };
  char** blackSquare = reverse(whiteSquare);
  char** squareStart = NULL;
  char** row = NULL;
  char** board = NULL;
  char** piezaTemp = NULL;
  for(int i=0; i<8; i++){
    if(i%2 == 0){
      squareStart = blackSquare;
      row = squareStart;
    }
    else{
      squareStart = reverse(blackSquare);
      row = squareStart;
    }
    if(i==3) {
      row = superImpose(queen, squareStart);
    }
    for(int j=1; j<8; j++){
      squareStart = reverse(squareStart);
      row = join(row, squareStart);
    }
    if(board == NULL) board = row;
    else board = up(board, row);
  }
  interpreter(board);
}

