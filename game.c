#include <stdio.h> //input output
#include <string.h>
#include <unistd.h>

int main (){
	

char name [30] ="";


printf("\033c");
printf("what is your name\n");
scanf(" %s", name);
printf(" your name is: %s", name);

printf("\033c");
printf("*********************************\n");
printf("*                               *\n");
printf("*                               *\n");
printf("*             Welcome           *\n");
printf("*               To              *\n");
printf("*             Skyland           *\n");
printf("*                               *\n");
printf("*                               *\n");
printf("*                               *\n");
printf("*                               *\n");
printf("*********************************\n");

sleep(4);

printf("\033c");

printf("---------------------------------------------------------------------------\n\n\n\n\n");


printf("  o                                                                 ^ ^\n");
printf(" -|-                                                                 > \n ");
printf(" |\n");
printf(" / \\\n");


printf("---------------------------------------------------------------------------\n");



printf("----------------\n");
printf("|              |\n");
printf("|  %s        |\n", name);
printf("----------------\n");
printf("|              |\n");
printf("|  health: 25  |\n");
printf("|  Magic: 10   |\n");
printf("----------------\n");




printf("The mystours Sky island has shown up out of nowhere. \n");

printf("\033[1A");
printf("\033[K");
sleep(6);
printf("The island is called genesis floats in the sky with hundreds of chains to the ground.\n");

printf("\033[1A");
printf("\033[K");
sleep(7);
printf("Genesis came out of nowhere, and brought the monsters here, We must destroy all the chains and set the earth free. ");

return 0;
}
