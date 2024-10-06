#include "chess.h"
#include "figures.h"

void display(){
  
  char** one  = join(whiteSquare, reverse(whiteSquare));
  char** knightsOne = join(knight, rotateR(knight));
  char** knightSquare = superImpose(knightsOne, one);
 
  char ** knightSquareFlip = flipV(knightSquare);
  interpreter(knightSquareFlip);
}
