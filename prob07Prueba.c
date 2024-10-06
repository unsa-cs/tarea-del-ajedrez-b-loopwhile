#include "chess.h"
#include "figures.h"

void display(){
  
  char** one  = join(whiteSquare, reverse(whiteSquare));
  char** knightsOne = join(knight, rotateR(knight));
  char** knightSquare = superImpose(knightsOne, one);
 
  char ** knightSquareFlip = flipV(knightSquare);
  char ** part2 = join(knightSquareFlip,reverse(one));
  char ** part1 = join(one, knightSquare);
  char ** unionn = join(part1,part2);
  interpreter(unionn);
}
