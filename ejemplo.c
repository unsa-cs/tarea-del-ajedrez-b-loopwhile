#include "chess.h"
#include "figures.h"

void display(){
  char** kingRepetido = repeatH(king, 10);
  interpreter(kingRepetido);
}
