#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num, guess_num=0,counter = 0;  //initialization
    num = (rand() % 10 + 1); //storange of random number
    
    printf("\nI have choosen a number between 1 and 10. Try guessing it");

    while (num!=guess_num) //while loop to run the proogram until the number is not equal to guessed number
    {
        printf("\nYour Guess : ");
        scanf("%d", &guess_num);
        if (num != guess_num) //for wrong number
            printf("\nWrong Guess! Try Again");

    }
    printf("\nWow! You Guessed it.\n");//when number is correct

    return 0;
}