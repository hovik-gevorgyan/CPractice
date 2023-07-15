#include <stdio.h>

void printArray(int numbers[], int index);
void checkFifthBit(int number);
int isYearEndOfCentury(int year);
void isYearALeapYear(int year);
int gcd(int a, int b);
void findGcdOfThreeNumbers(int a, int b, int c);



int main() {
    printf("Hello World \n");
   
    findGcdOfThreeNumbers(12,15,21);
    isYearALeapYear(2024);
    checkFifthBit(44);

    return 0;
}


void printArray(int numbers[], int index) {
   for(int j = index - 1; j >= 0; j--) {
     printf("%d", numbers[j]);
   }
}


void checkFifthBit(int number) {
    int numberToModify = number;
    int bitNumber[32];
    int index = 0;

    while(numberToModify > 0) {
        bitNumber[index] = numberToModify % 2;
        numberToModify /= 2;
        index++;
    }
    printf("Initial number in binary is %d \n", number);
    printArray(bitNumber, index);
    printf("\n");

    if(index >= 4) {
        if(bitNumber[4] == 0) {
            bitNumber[4] = 1;
            printf("The binary number after modification is \n");
            printArray(bitNumber, index);
            printf("\n");
        } else {
            printf(" this is the number %d \n", number);
        }
    } else {
        printf("The number has no 5th bit \n");
    }
}




int isYearEndOfCentury(int year) {
    if(year % 100 == 0) {
        return 1;
    } else {
        return 0;
    }
}


void isYearALeapYear(int year) {
    if(isYearEndOfCentury(year)) {
        if(year % 400 == 0) {
            printf("The year is a leap year \n");
        } else {
            printf("The year is not a leap year \n");
        }
    } else {
        if(year % 4 == 0) {
            printf("The year is a leap year \n");
        } else {
            printf("The year is not a leap year \n");
        }
    }
}


int gcd(int a, int b) {
    if(b % a == 0) {
        return a;
    } else {
        return gcd(b % a, a);
    }
}


void findGcdOfThreeNumbers(int a, int b, int c) {
    int divisor = gcd(a, gcd(b, c));
    printf("GCD is %d \n", divisor);
}


