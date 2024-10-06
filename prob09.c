#include "chess.h"
#include "figures.h"
#include <stdio.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** squareStart = NULL;
  char** row = NULL;
  char** board = NULL;
  for(int i=0; i<8; i++){
    if(i%2 == 0){
      squareStart = blackSquare;
      row = squareStart;
    }
    else{
      squareStart = reverse(blackSquare);
      row = squareStart;
    }
    for(int j=1; j<8; j++){
      squareStart = reverse(squareStart);
      row = join(row, squareStart);
    }
  }
  interpreter(row);
}

