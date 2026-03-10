#include <stdio.h>
enum Level {LOW = 1, MEDIUM, HIGH}; // LOW is 1, MEDIUM is 2...

int main() {
    enum Level myVar = MEDIUM;
    printf("Selected Level: %d\n", myVar);

    if(myVar == 2) {
        printf("Processing Medium Priority Task...");
        
    }
    return 0;
}