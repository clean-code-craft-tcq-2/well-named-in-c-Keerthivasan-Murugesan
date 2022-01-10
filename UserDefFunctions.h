#ifndef USERDEF_FUNCTIONS
#define USERDEF_FUNCTIONS

#include "VariableDefinitions.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif