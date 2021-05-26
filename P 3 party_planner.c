//CS135 - 1101
//Cicelia Siu - csiu - 9/20/2019
//Party Planning
# include <stdio.h>
int main (){
    //variables
    int choice=0, peachCobbler = 0, devilCake = 0, mushroomCaps = 0;
    double cobblerP = 3.0, cakeP = 5.5, mushroomP = 7.75, totalcost, budget = 0.0;
    double cobblerTP, cakeTP, mushroomTP;
    //prompt
    while ((choice >= 0)&& (choice<=6)){
        printf ("\n1 - update peach cobbler\n2 - update devil's food cake\n3 - update mushroom caps\n4 - update budget\n5 - order supplies\n6 - display amounts\n0 - EXIT\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf ("\nEnter quantity for peach cobbler: ");
                scanf("%d", &peachCobbler);
                break;
            case 2:
                printf ("\nEnter quantity for devil's food cake: ");
                scanf("%d", &devilCake);
                break;
            case 3:
                printf ("\nEnter quantity for mushroom caps: ");
                scanf("%d", &mushroomCaps);
                break;
            case 4:
                printf ("\nWhat is your budget? ");
                scanf ("%lf", &budget);
                break;
            case 5:
                cobblerTP = peachCobbler*cobblerP;
                cakeTP = devilCake*cakeP;
                mushroomTP = mushroomCaps*mushroomP;
                totalcost = cobblerTP + cakeTP + mushroomTP;
                if (totalcost<=budget) {
                    printf ("\nYour supplies will be delievered soon!");
                    break;
                } else {
                    printf ("\nYou can't afford your supplies. Please adjust your quantities.");
                    break;
                }
            case 6:
                cobblerTP = peachCobbler*cobblerP;
                cakeTP = devilCake*cakeP;
                mushroomTP = mushroomCaps*mushroomP;
                totalcost = cobblerTP + cakeTP + mushroomTP;
                printf ("\nITEM\t\t\tPRICE\tAmount\tTOTAL\n");
                printf ("peach cobbler\t\t$%-.2lf\t%d\t$%-.2lf\n",cobblerP, peachCobbler, cobblerTP);
                printf ("devil's food cake\t$%-.2lf\t%d\t$%-.2lf\n",cakeP, devilCake, cakeTP);
                printf ("mushroom caps\t\t$%-.2lf\t%d\t$%-.2lf\n",mushroomP, mushroomCaps, mushroomTP);
                printf ("ALL\t\t\t\t\t$%-.2lf\n\nYOUR BUDGET: $%-.2lf\n",totalcost, budget);
                break;
            case 0:
                return 0;
                break;
            default:
                printf ("Please enter a number 0-6");
                break;
        }
    }
}

