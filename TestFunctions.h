#ifndef TEST_FUNCTIONS
#define TEST_FUNCTIONS

#include "UserDefFunctions.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif