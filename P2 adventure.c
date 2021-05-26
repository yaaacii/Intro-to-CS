//CS135 
//Cicelia Siu -csiu- 09/13/2019
//Program that will allow the user to play a simple Choose Your Own Adventure Game
# include <stdio.h>

int main(){
    //variables
    int chestAns, bagAns, ogreAns;
    int healthPoints = 10;
    double wealthPoints = 0.00;
    //question 1
    printf ("***CHOOSE YOUR OWN ADVENTURE***\nYou're walking through the woods and come upon a chest.\nDo you open it? 1 - yes 2 - no\n");
    scanf("%d", &chestAns);
    if (chestAns == 2){
        healthPoints -= 1;
        printf ("\nAs you pass the chest, you stub your toe on it and lose a health point.\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\n", wealthPoints, healthPoints);}
    else {
        wealthPoints += 3.75;
    	printf ("\nYou found a sword worth 3.75 wealth points!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\n", wealthPoints, healthPoints);
}
//question 2
    printf("As you pass a pond, you notice a bag on the ground.\nDo you open it? 1 - yes 2 - no.\n");
    scanf("%d", &bagAns);
if (bagAns == 2){
    healthPoints -= 1;
    printf ("\nWhile passing the pond, your foot gets wet and eventually you get a blister. Lose a health point.\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\n", wealthPoints, healthPoints);}
    else{
        wealthPoints += 5.15;
        printf ("\nYou found a shield worth 5.15 Wealth Points!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\n", wealthPoints, healthPoints);
	}
//question 3
printf("A giant ogre approaches!\nDo you fight or flee? 1 - fight 2 - flee\n");
scanf("%d", &ogreAns);
if (ogreAns == 2){
    healthPoints = 0;
    printf ("\nAs you turn to run, you trip on a log and the ogre steps on you. You die!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\nYou lose! Try again!\n", wealthPoints, healthPoints);}
else {
    if ((ogreAns == 1) && (chestAns == 1) && (bagAns == 1)){
        healthPoints += 12;
        printf("\nYou vanquish the loathsome ogre with sword and shield!!\nYou steal his life force and add it to your own!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\nYou win! CONGRTULATIONS!\n", wealthPoints, healthPoints);}
    else {
        if ((ogreAns == 1) && (chestAns == 2) && (bagAns == 1)){
            printf ("\nYou have a shield but cannot fight!\nAt least you live to fight another day!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\nYou lose! Try again!\n", wealthPoints, healthPoints);
        }
        else {
            if ((ogreAns == 1) && (chestAns == 1) && (bagAns == 2)){
                healthPoints = 0;
                printf ("\nYou have a sword to fight! But no shield. :(\nYou die but take the ogre down with you!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\nYou lose! Try again!\n", wealthPoints, healthPoints);}
            else{
                wealthPoints = 0;
                healthPoints = 0;
                printf("\nYou can't fight or defend yourself. :'(\nPlus, you have a stubbed toe and a blister. You die!\n**********\nWealth: %.2lf\nHealth: %d\n**********\n\nYou lose! Try again!\n", wealthPoints, healthPoints);
            }
        }
    }
}


    return 0;
}
