#include <stdio.h>
#include <string.h>

void populateArrayOfIntegers();
void populateArrayOfChars();
void showCharArrayInReverseOrder();
void drawRectangle();


int main() {
    printf("Hello World! \n");
    
    populateArrayOfIntegers();
    //populateArrayOfChars();
    //showCharArrayInReverseOrder();
    //drawRectangle();
    
    
    return 0;
}

    

void populateArrayOfIntegers() {
    int numbers [5];

    for(int i = 0; i < 5; i++) {
       printf("Enter the array number \n");
       scanf("%d", &numbers[i]);
    }

    printf("Numbers are \n");

    for(int i = 0; i < 5; i++) {
        printf("%d \n", numbers[i]);
    }
}


void populateArrayOfChars() {
    char symbols[6];
    int i = 0;

    
    for(;i < 5; i++) {
        scanf("%c", &symbols[i]);
    }
    
    symbols[i] = '\0';

    printf("Array is %s \n", symbols);

    printf("This is integer representation of char array \n");

    for(int j = 0; j < 5; j++) {
        printf("%d \n", symbols[j]);
    }

}


void showCharArrayInReverseOrder() {
     char symbols[6];
     int i = 0;

    
    for(;i < 5; i++) {
        scanf("%c", &symbols[i]);
    }
    
    symbols[i] = '\0';

    printf("Array is %s \n", symbols);

    printf("This is integer representation of char array \n");

    for(int j = i - 1; j >= 0; j--) {
        printf("%c \n", symbols[j]);
    } 
}


void drawRectangle() {
   int size = 0;

   printf("Enter the rectangle size \n");
   scanf("%d", &size);

   for(int i = 0; i < size; i++) {
     for(int j = 0; j < size; j++) {
        if (i == 0 || i == size - 1 || j == 0 ||  j == size - 1) {
            printf("*");
        } else {
            printf(" ");
        }
     }

     printf("\n");
   }
}