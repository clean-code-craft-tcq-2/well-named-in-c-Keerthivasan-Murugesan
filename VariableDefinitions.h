#ifndef VARIABLE_DEFINITIONS
#define VARIABLE_DEFINITIONS

#include <stdio.h>
#include <assert.h>

#define MaxPossibleColorsInMajorOrMinor (5u)

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[5];
const char* MinorColorNames[5];

const int MAX_COLORPAIR_NAME_CHARS;

int numberOfMajorColors;
int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif