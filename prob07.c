#include "chess.h"
#include "figures.h"

void display(){
  
  char** blackSquare = reverse(whiteSquare);
  char** joinFigures = join(blackSquare, whiteSquare);
  char** repeatFigures = repeatH(joinFigures, 4);
  char** figuresPlace = up(repeatFigures, reverse(repeatFigures));
  char** boardFinal = repeatV(figuresPlace, 3);
  
  char** knight1 =knight;
  char** knight2 = rotateL(knight1);
  char** knight3 = rotateL(knight2);
  char** knight4 = rotateL(knight3);
  char** joinKnights = join(join(join(join(knight1, joinFigures), joinFigures), joinFigures), knight2);

  char** final = superImpose(joinKnights,repeatFigures);
  char** tablero = up(final, boardFinal);
  interpreter(tablero);
}
