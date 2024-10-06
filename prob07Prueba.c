#include "chess.h"
#include "figures.h"

void display(){
  
  char** one  = join(whiteSquare, reverse(whiteSquare));
  char** knightsOne = join(knight, rotateR(knight));
  char** kightSquare = superImpose(knightsOne, one);
  interpreter(kightSquare);
}
