/* CS 135.1101
 CIcelia Siu - csiu - 10/09/2019
MASH program using arrays*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define livingNum 4

int main (){
    //check array size
    int numChoice,randNum;
    printf("How many choices do you want to play with? ");
    scanf("%d",&numChoice);
   //make arrays
    char initials[numChoice];
    int kids[numChoice];
    double salary[numChoice];
    char livingName;
    // Prompt and get
    
    //marry
    printf("\nWho do you want to marry?\n(enter %d first name initals)  ", numChoice);
    for (int i = 0; i < numChoice; i++) {
        scanf(" %c", &initials[i]);
    }
    initials[numChoice] = '\0';
    
    //kids
    printf("\nHow many kids do you want?\n(enter %d whole numbers) ", numChoice);
    for (int numIncrement = 0; numIncrement < numChoice; ++numIncrement) {
             scanf("%d", &kids[numIncrement]);
          
      }
    //money
    printf("\nHow much money do you want?\n(enter %d decimal amounts) ", numChoice);
    for ( int increment = 0; increment < numChoice; ++increment) {
            scanf("%lf", &salary[increment]);
        
    }
    
    
    
    //randomize not done
    //Print results not done
    srand(time(0));
    randNum = rand() % livingNum;
    if (randNum == 0) {
        printf ("\nM*A*S*H\nYou live in an Apartment.\n");
    }
        else if (randNum == 1){
            printf("\nM*A*S*H\nYou live in a House.\n");
        }
        else if (randNum == 2) {
            printf("\nM*A*S*H\nYou live in a Mansion.\n");
        }
        else if (randNum == 3) {
            printf("\nM*A*S*H\nYou live in a Shack.\n");
        }
    int salaryNum;
    salaryNum = rand() % numChoice;
    printf("You make %.2lf dollars per year.\n", salary[salaryNum]);
    int initialsNum = rand() % numChoice;
    printf("You're married to %c ", initials[initialsNum]);
    int kidsNum = rand() % numChoice;
    printf("and have %d kids.\n", kids[kidsNum]);
return 0 ;
}
