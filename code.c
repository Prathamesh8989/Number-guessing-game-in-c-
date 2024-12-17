#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess;
    int no_of_guesses = 0 ;
    srand(time(NULL));

    printf("Welcome to the world of guessing Numbers\n");
    random = rand() %  100  + 1 ;// Generating between 0 to 100 

    do
    {
      printf("Please enter your Guess between (1-100)\n");
      scanf("%d",&guess);
      no_of_guesses++;

      if (guess < random)
      {
            printf("Guess larger number than your current guess\n ");
      }
      else if (guess > random)
      {
            printf("Guess a smaller number than your current guess\n");
      }
      else{
        printf("Congratulations !!! You have successfully guessed the number.You were successful in %d attempts\n",no_of_guesses);
      }
      
      
    } while (guess != random );

    printf("\n Bye Bye , Thanks for playing.");
    printf("\n Developed By: Prathamesh Niungare ");

    return 0;
}
