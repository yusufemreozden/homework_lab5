/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Adding Game                                                              */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*   https://GitHub.com/yusufemreozden                                        */
/*   https://linkedIn.com/in/yusufemreozden                                   */
/*   https://sites.google.com/view/yusufemreozden                             */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNumberGenerator(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

int main() 
{
    int incorrectAnswers = 0;
    int totalPoints = 0;

    srand(time(NULL));

    while (incorrectAnswers < 3) 
    {
        int numNumbers = RandomNumberGenerator(2, 5);
        int numbers[numNumbers];
        int correctAnswer = 0;

        printf("Problem: ");
        for (int i = 0; i < numNumbers; i++) 
        {
            numbers[i] = RandomNumberGenerator(1, 10);
            correctAnswer += numbers[i];
            printf("%d", numbers[i]);
            if (i < numNumbers - 1) 
            {
                printf(" + ");
            }
        }
        printf(" = ?\n");

        int userAnswer;
        printf("Enter your answer: ");
        scanf("%d", &userAnswer);

        if (userAnswer == correctAnswer) 
        {
            totalPoints++;
            printf("Correct!\n");
        } 
        else 
        {
            printf("Wrong! The answer was %d\n", correctAnswer);
            incorrectAnswers++;
        }
    }
    if(totalPoints>1)
        printf("You earned %d total points.\n", totalPoints);
    else
        printf("You earned %d total point.\n", totalPoints);
}
