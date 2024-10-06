#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** figuresPlace = up(repeatFigures, reverse(repeatFigures));
  char** combineRow = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  char** combinePawn = repeatH(pawn, 8);
  char** whitePlace = superImpose(up(combineRow, combinePawn), figuresPlace);
  char** blackPlace = superImpose(reverse(up(combinePawn,combineRow)), figuresPlace);
  char** emptyPlace = repeatV(figuresPlace,2);
  char** boardFinal = up(up(whitePlace, emptyPlace), blackPlace);
  interpreter(boardFinal);
}
