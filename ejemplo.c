#include "chess.h"
#include "figures.h"

void display(){
  char** whiteSquare = repeatH(whiteSquare, 8);
  interpreter(whiteSquare);
}
