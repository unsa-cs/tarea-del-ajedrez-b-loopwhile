#include "chess.h"
#include "figures.h"

void display(){
  char** figureImpose = superImpose(reverse(rook), whiteSquare);
  interpreter(figureImpose);
}
