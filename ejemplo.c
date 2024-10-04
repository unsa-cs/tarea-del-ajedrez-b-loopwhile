#include "chess.h"
#include "figures.h"

void display(){
  char** whiteRepetido = repeatH(whiteSquare, 10);
  interpreter(whiteRepetido);
}
