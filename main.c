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
    printf("Welcome to the Full-Time Adventures of a Part-Time Librarian\n");


    printf("You wake up and see your alarm telling you to get ready and head to your boring, mundane, and part-time job as a librarian \n");
    printf("Everyday is the same, everyday you just sit on your thumbs at the library and wait for people to come and get their books. \n Everyday you just sit there hoping for something exciting to happen, but nothing ever does\n");

    while (parseAndExecute(input) && getInput());
    printf("\nBye!\n");
    return 0;
}