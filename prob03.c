#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** row = repeatH(joinFigures, 4);
  char** reverseRow = reverse(row);
  char** upRows = up(row, reverseRow);

  char** repeatUpRows =  repeatV(upRows, 2);
  interpreter(repeatUpRows);
}
