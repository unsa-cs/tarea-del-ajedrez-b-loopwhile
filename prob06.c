#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** figuresPlace = up(repeatFigures, reverse(repeatFigures);
  char** combineRow = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  char** combinePawn = repeatH(pawn, 8);
  char** imposeCombineRow = superImpose(combineRow, repeatFigures);
  char** reverseCombineRow = combineRow;
  char** whitePlace = up(reverseCombineRow, superImpose(repeatH(pawn, 8), reverse(repeatFigures)));
  char** emptyPlace = repeatFigures;  
  emptyPlace = repeatV(up(emptyPlace, reverse(emptyPlace)), 2);
  char** boardFinal = up(whitePlace, emptyPlace);
  char** blackPlace = whitePlace;
  boardFinal = up(boardFinal, flipH(reverse(blackPlace)));
  interpreter(boardFinal);
}
