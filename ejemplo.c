#include "chess.h"
#include "figures.h"

void display(){
  char** whitebishop = reverse(bishop);
  interpreter(whitebishop);
}
