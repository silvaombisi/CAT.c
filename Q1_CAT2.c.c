#include <stdio.h>//fixed the include directive

int main() {//Fixed the main function declaration
    int number;
    printf("Enter an integer number: ");//Fixed the printf statement and added a colon for clarity
    scanf("%d", &number);// Fixed the scanf format specifier

    if (number < 100) {// Fixed the if condition
        printf("Your number is smaller than 100.\n");//Fixed the printf statement and logic
    }else{
        printf("Your number contains more than two digits.\n");//Corrected the message for clarity and correctnes
        }
        return 0;//Added return statement
}
