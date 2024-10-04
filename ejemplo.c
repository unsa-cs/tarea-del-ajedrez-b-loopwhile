#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures1 = join(whiteSquare, blackSquare);
  char** joinFigures2 = join(blackSquare, whiteSquare);
  char** firstRow = repeatH(joinFigures1, 4);
  char** lastRow = repeatH(joinFigures2, 4);
  char** sobreponer = up(firstRow, lastRow);
  interpreter(sobreponer);
}
