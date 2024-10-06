#include "chess.h"
#include "figures.h"

void display(){
  
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** rjoinFigures = reverse(joinFigures);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** figuresPlace = up(repeatFigures, reverse(repeatFigures));
  char** boardFinal = repeatV(figuresPlace, 3);
  
  char** knight1 =knight;
  char** knight2 = rotateL(knight1);
  char** knight3 = rotateL(knight2);
  char** knight4 = rotateL(knight3);
  char** joinKnights1 = join(join(join(join(superImpose(knight1,whiteSquare), joinFigures), joinFigures), joinFigures), superImpose(knight2,blackSquare));
  char** joinKnights2 = join(join(join(join(superImpose(knight3, blackSquare), rjoinFigures), rjoinFigures), rjoinFigures), superImpose(knight4, whiteSquare));

  char** final = superImpose(joinKnights1,repeatFigures);
  char** unir1 = up(final, boardFinal);
  char** final2 = superImpose(joinKnights2, repeatFigures);
  char** tablero = up(unir1,final2);
  //=========
  char** queenBlackSquare = superImpose(queen, reverse(whiteSquare));
  char** queenWhiteSquare = superImpose(queen, whiteSquare);

  char** twoSquares = join(reverse(whiteSquare), whiteSquare);

  char** quadrantType1 = up(join(queenBlackSquare, whiteSquare), reverse(twoSquares));
  interpreter(quadrantType1);
}
