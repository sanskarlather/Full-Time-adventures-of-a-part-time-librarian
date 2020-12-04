#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "look around";

static bool getInput(void)
{
   printf("\n--> ");
   return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
    printf("You are inside of a firetruck, going in top most speed towards a burning house.\n");
    printf("You see that your friend Guy Montag is alongside you and his Captain,Captain Beatty is driving the fully loaded \n firetruck from all the firemen from the department in full zest. \n"); 

    while (parseAndExecute(input) && getInput());
    printf("\nBye!\n");
    return 0;

  
}
