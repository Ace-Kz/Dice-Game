#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
 char name[20];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello,%s!",name);
 
 srand(time(NULL));
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;

    printf("Rolling dice...\n");
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Total value: %d\n",dice1 + dice2);

    if(dice1 + dice2 <= 8){
        printf("You won!");
    }
    else{
        printf("You lose!");
}
}
