#include "randfuncs.h"
#include <cstdlib>

char coinFlip(void){
  int randomNumber = rand() % 2;
  if (randomNumber == 0){
    return 'H';
  } else {
    return 'T';
  }
}

int rollDiceSixSide(void){
  return 1 + (rand() % 6);
}
