#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** combineRow = superImpose(join(join(join(rook, knight), join(bishop, queen)), join((king, bishop), join(knight, rook))), repeatFigures);
  interpreter(combineRow);
}
