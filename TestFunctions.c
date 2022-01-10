#include "VariableFuncDeclarations.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor){
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber){
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void PrintWiringManual(void){
    unsigned int MajorColor_index = 0, MinorColor_index = 0;
    unsigned int colorCode = 1;

    printf("------- COLOUR CODING DATABASE -------\n");
    for(MajorColor_index = 0; MajorColor_index < MaxPossibleColorsInMajorOrMinor; MajorColor_index++)
    {
        for(MinorColor_index = 0; MinorColor_index < MaxPossibleColorsInMajorOrMinor; MinorColor_index++)
        {
             printf("*********************");
             printf("\n Major Color : %s  ", MajorColorNames[MajorColor_index]);
             printf("\n Minor Color : %s  ", MinorColorNames[MinorColor_index]);
             printf("\n Color Code  : %d  ", colorCode);
             printf("*********************");
             colorCode++;
        }
    }
}