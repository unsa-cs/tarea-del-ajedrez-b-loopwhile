#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** combineRow = superImpose(join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook), repeatFigures);
  char** reverseCombineRow = combineRow;
  char** whitePlace = up(reverseCombineRow, superImpose(repeatH(pawn, 8), reverse(repeatFigures)));
  char** emptyPlace = repeatFigures;  
  emptyPlace = repeatV(up(emptyPlace, reverse(emptyPlace)), 2);
  interpreter(up(whitePlace, emptyPlace));
}
