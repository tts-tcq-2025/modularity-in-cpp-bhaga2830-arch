#include <stdio.h>
#include <assert.h> 
#include "Color_definition.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    CodeReferenceManual(5, 5);

    return 0;
}
