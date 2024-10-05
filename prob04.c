#include "chess.h"
#include "figures.h"

void display(){
  char** figureImpose = superImpose(whiteSquare, reverse(rook));
  interpreter(figureImpose);
}
