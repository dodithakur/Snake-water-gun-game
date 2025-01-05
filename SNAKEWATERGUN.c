#include<stdio.h>
#include<stdlib.h>//for rand() and srand()
#include<time.h> // for time
int main (){
    
    int player;
    // Initialise random number generator
    srand(time(0));
    // Generate random number between 0 to 2 )
    int computer = (rand() % 2) + 1; // or (rand () % 3) + 0;
    /* 
        0-->Snake
        1-->Water
        2-->Gun
    */
    printf("choose 0--> for Snake,1-->for Water,2-->Gun \n ");
    scanf("%d",&player);
    printf(" Computer chooses %d\n",computer);

    if(player==0 && computer==0){
        printf("Snake vs Snake\n"); 
        printf("DRAW");
    }
    else if(player==0 && computer==1){
        printf("Snake vs Water\n");
        printf("Player wins");
    }
    else if(player==0 && computer==2){
        printf("Snake vs Gun\n");
        printf("Computer wins");                 
    }
    else if(player==1 && computer==0){
        printf("Water vs Snake\n");
        printf("Computer wins ");
    }
    else if(player==1 && computer==1){
        printf("Water vs Water\n");
        printf("DRAW");
    }
    else if(player==1 && computer==2){
        printf("Water vs Gun\n");
        printf("Player wins ");
    }
    else if(player==2 && computer==0){
        printf("Gun vs Snake\n");
        printf("Player wins ");

    }
    else if(player==2 && computer==1){
        printf("Gun vs Water\n");
        printf("Computer wins ");
    }
    else if(player==2 && computer==2){
        printf("Gun vs Gun\n");
        printf("DRAW");
    }
    else{
        printf("something went wrong!");
    }
    return 0;
}