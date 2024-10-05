#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(whiteSquare, blackSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  interpreter(repeatFigures);
}
