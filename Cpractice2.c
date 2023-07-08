#include <stdio.h>


void vowelOrConsonant();
void maxNumber();
int findMaximumInArray(int numbers[]);
void findMaximumIfTwoNumbersAreEqual();


int main() {
    
    findMaximumIfTwoNumbersAreEqual();

    return 0;
    
    } // : main 
    


void vowelOrConsonant() {
    char letter = 0;
    
    while(letter == 0) {
        printf("Enter the letter, \n");
        scanf("%c", &letter);

        switch(letter) {
            case 'a' ... 'z':
            printf(" letter is %c \n", letter);
            break;
           
            case 'A' ... 'Z':
            printf(" letter is %c \n", letter);
            break;

            default:
            printf("You entered not a letter \n");
            letter = 0;
            continue;
        }

        switch(letter) {
            case 65:
            case 97:
            case 69:
            case 101:
            case 73:
            case 105:
            case 85:
            case 117:
            case 79:
            case 111:
            printf("You eneterd a Vowel \n");
            break;
            
            default:
            printf("You entered a consonant \n");
        }
 }
}


void maxNumber() {
     int x = 0;
     int y = 0;
     int maxNumber = 0;
     printf("enter the first number \n");
     scanf("%d", &x),
     printf("Enter the second number \n");
     scanf("%d", &y);
     
     maxNumber = x > y ? x : y;
     printf("the max number is %d \n", maxNumber);

}


int findMaximumInArray(int numbers []) {
   
   int max = numbers[0];

   for(int i = 1; i < 3; i++) {
       if(numbers[i] > max) {
        max = numbers[i];
       }
   }

   return max;
}

void findMaximumIfTwoNumbersAreEqual() {
    int first = 0;
    int second = 0;
    int third = 0;
    int maximumNumber = 0;

    printf("Enter the first number: \n");
    scanf("%d", &first),

    printf("Enter the second number: \n");
    scanf("%d", &second);

    printf("Enter the third number: \n");
    scanf("%d", &third);

    int numbers []  = {first, second, third};

    int areTwoNumbersEqual = 0;

    if(first == second || first == third || second == third) {
        areTwoNumbersEqual = 1;
    }
    
    if(areTwoNumbersEqual) {
        maximumNumber = findMaximumInArray(numbers);
        printf("Maximum number is %d \n", maximumNumber);
    } else {
        printf("There are no two equal numbers  \n");
    }
    
}

