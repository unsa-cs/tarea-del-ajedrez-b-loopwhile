#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** row = repeatH(joinFigures, 4);
  char** repeatRow = repeatV(row, 4); 
  interpreter(repeatRow);
}
