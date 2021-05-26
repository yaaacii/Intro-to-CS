/*Cicelia Siu - csiu- 10/22/2019
 CS 135.1101 -
 Project 5: 2D array */
# include <stdio.h>


//protoptype
int rows, cols, count;
double min, max;
double value;
void displayData(int numRow, int numCol, double array[][cols]);
int countValues(int numRow, int numCol, double array[][cols]);
_Bool hasValue(int numRow,int numCol, double array[][cols]);
//main
int main(){
    int menu;
    printf ("How many rows of data do you have? ");
    scanf ("%d", &rows);
    printf ("How many columns of data do you have? ");
    scanf ("%d", &cols);
    double array[rows][cols];
    
    for (int index = 0; index < rows; index++){
        printf ("Please enter a row of data.\n");
        for (int i = 0; i <cols; i++) {
            scanf ("%lf", &array[index][i]);
        }
    }
    
    do {
        printf ("\n***DATA ANALYSIS****\n");
        printf ("1. Find Count of Values in a Range\n2. Find a Value\n3. Display Data\n0. EXIT\n");
        scanf ("%d", &menu);
        switch (menu) {
            case 1:
                countValues(rows, cols, array);
                printf ("\nThere are %d values in betweenn %.2lf and %.2lf.\n", count, min, max);
                break;
            case 2:
                printf ("What value are you looking for? ");
                scanf ("%lf", &value);
                hasValue(rows, cols, array);
                if (hasValue(rows, cols, array)== 1) {
                    printf ("\n%.2lf is in the data.\n", value);
                } else {
                    printf ("\n%.2lf was not found.\n", value);
                }
                break;
            case 3:
                displayData(rows, cols, array);
                break;
            default:
                break;
        }
    } while (menu != 0);
    return 0;
}

void displayData (int numRow, int numCol, double array[][cols]){
    printf ("|||YOUR DATA|||\n");
    for (int index = 0; index < numRow; index++){
       for (int i = 0; i <numCol; i++) {
        printf ("%6.2lf\t", array[index][i]);
       }
     printf ("\n");
   }
}
    
int countValues(int numRow, int numCol, double array[][cols]) {
    printf ("Enter a minimum of your range: ");
    scanf ("%lf", &min);
    printf ("Enter a maximum of your range: ");
    scanf ("%lf", &max);
    count = 0;
    for (int index = 0; index < numRow; index++){
        for (int i = 0; i <numCol; i++) {
            if ((array[index][i]>=min) && (array[index][i]<=max))
                count++;
        }
    }
    return count;
}

_Bool hasValue(int numRow,int numCol, double array[][cols]){
        for (int index = 0; index < numRow; index++){
            for (int i = 0; i <numCol; i++) {
                if (array[index][i] == value){
                    return 1;
                }
            }
        }
    return 0;
}
        
