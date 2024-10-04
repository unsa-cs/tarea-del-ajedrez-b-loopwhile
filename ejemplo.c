#include "chess.h"
#include "figures.h"

void display(){
  char ** joinFigures = join(whiteSquare, reverse(whiteSquare));
  char** whiteGray = repeatH(joinFigures, 4);
  interpreter(whiteGray);
}
