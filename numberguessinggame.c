#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main() {
    int random,guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf ("welcome to number guessing game\n");
    random = rand() % 100 + 1;
      printf ("\n please enter your number between 1 to 100: ");

    do {
      scanf ("%d",&guess);
      no_of_guess++;
      
      if  (guess < random) {
           printf("guessr a larger number: \n");
      }
      else if (guess > random) {
           printf ("guess a smaller number. \n");
      }           
      else {
                         printf ("congrats you have guessed the number in %d attempts.\n ",no_of_guess);
      }
      
      } while (guess != random);

      printf ("hope you enjoyed the game thanks for playing :) \n ");
      printf ("(developed by @garvit33 XD)");

      return 0;


}
