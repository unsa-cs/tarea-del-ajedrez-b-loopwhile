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
  for(int i = 0; i < 3; i++){
    emptyPlace = up(emptyPlace, reverse(emptyPlace));
  }
  interpreter(up(whitePlace, emptyPlace));
}
