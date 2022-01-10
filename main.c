#include <stdio.h>
#include <assert.h>
#include "TestFunctions.h"
#include "WiringManual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintWiringManual();

    return 0;
}
