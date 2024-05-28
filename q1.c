#include <stdio.h>

int main() {
    int num  = -2; 

    
    printf("%-10s %-10s %-10s\n", "Number", "Square", "Cube");

    
    for (int i = 0; i < 5; i++) {
        int Number = num + i;
        int square = Number * Number;
        int cube = Number *Number * Number;
        printf("%-10d %-10d %-10d\n",Number, square, cube);
    }
    int num1  = 7; 

    
    printf("%-10s %-10s %-10s\n", "Number", "Square", "Cube");

    
    for (int i = 0; i < 5; i++) {
        int Number = num1 + i;
        int square = Number * Number;
        int cube = Number *Number * Number;
        printf("%-10d %-10d %-10d\n",Number, square, cube);
    }
    int num2  = 0; 

    
    printf("%-10s %-10s %-10s\n", "Number", "Square", "Cube");

    
    for (int i = 0; i < 5; i++) {
        int Number = num2 + i;
        int square = Number * Number;
        int cube = Number *Number * Number;
        printf("%-10d %-10d %-10d\n",Number, square, cube);
    }

    return 0;

}
