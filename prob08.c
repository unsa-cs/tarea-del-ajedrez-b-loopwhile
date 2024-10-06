#include "chess.h"
#include "figures.h"

void display(){
  char** queenBlackSquare = superImpose(queen, reverse(whiteSquare));
  char** queenWhiteSquare = superImpose(queen, whiteSquare);

  char** twoSquares = join(reverse(whiteSquare), whiteSquare);
  
  char** quadrantType0 = up(twoSquares, reverse(twoSquares));
  char** quadrantType1 = up(join(queenBlackSquare, whiteSquare), reverse(twoSquares));
  char** quadrantType2 = up(join(reverse(whiteSquare), queenWhiteSquare), reverse(twoSquares));
  char** quadrantType3 = up(twoSquares, join(queenWhiteSquare, reverse(whiteSquare)));
  char** quadrantType4 = up(twoSquares, join(whiteSquare, queenBlackSquare));
  interpreter(quadrantType4);
}
