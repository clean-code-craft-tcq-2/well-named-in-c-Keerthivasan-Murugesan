#include "WiringManual.h"
#include "VariableDefinitions.h"

void PrintWiringManual(void){
    unsigned int MajorColor_index = 0, MinorColor_index = 0;
    unsigned int colorCode = 1;

    printf("------- COLOUR CODING DATABASE -------\n");
    for(MajorColor_index = 0; MajorColor_index < MaxPossibleColorsInMajorOrMinor; MajorColor_index++)
    {
        for(MinorColor_index = 0; MinorColor_index < MaxPossibleColorsInMajorOrMinor; MinorColor_index++)
        {
             printf("\n*********************");
             printf("\n Major Color : %s  ", MajorColorNames[MajorColor_index]);
             printf("\n Minor Color : %s  ", MinorColorNames[MinorColor_index]);
             printf("\n Color Code  : %d  ", colorCode);
             printf("\n*********************");
             colorCode++;
        }
    }
}