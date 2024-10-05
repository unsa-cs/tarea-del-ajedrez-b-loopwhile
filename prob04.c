#include "chess.h"
#include "figures.h"

void display(){
  char** figureImpose = superImpose(whiteSquare, rook);
  interpreter(figureImpose);
}
