#include <iostream>
#include <assert.h>

std::string printOnConsole(int iIndex, int jIndex){
    std::string colorCode;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    colorCode = std::to_string(iIndex * 5 + jIndex)  + " | " +  (majorColor[iIndex]) + " | " + (minorColor[jIndex]);

    return colorCode;
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << printOnConsole(i, j) << std::endl;
        }
    }

    return i * j;
}

int main() {
    int result = printColorMap();
	assert(result == 25);
    assert(printOnConsole(0,0).compare("0 | White | Blue"));
    assert(printOnConsole(2,0).compare("0 | Black | Blue"));
    assert(printOnConsole(1,5).compare("0 | Red | Slate"));
    std::cout << "All is well (maybe!)\n";

    return 0;
}
