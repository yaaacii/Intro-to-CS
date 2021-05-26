/*Cicelia Siu - cisu - 10/25/2019
 CS135.1101
 Programming Assignment #6: Badge Creation*/

#include <stdio.h>
#define SIZE 100
#define MAX_INPUT 1000
//prototypes
void getstr (char arr[], int strSize);
int strcompare (char array[], char arr[]);
int strlength (char arr[]);
 //global variables
char nameOne[SIZE+1], nameTwo[SIZE+1];

//main
int main (){
    printf ("***WELCOME TO COMICON!***\n");
    printf ("Please enter Name 1: ");
    getstr (nameOne, SIZE);
    printf ("Please enter Name 2: ");
    getstr (nameTwo, SIZE);

    
    if (strlength(nameOne) > 15){
        printf ("The name %s is too long to fit on a badge!\n", nameOne);
    }
    if (strlength(nameTwo) > 15) {
        printf ("The name %s is too long to fit on a badge!\n", nameTwo);
    }
    
    if (strcompare(nameOne, nameTwo) == -1){
        printf ("%s should stand first in line.\n", nameOne);
    }
    else if (strcompare (nameOne, nameTwo) == 1){
        printf ("%s should stand first in line.\n", nameTwo);
    
    }
    else {
        printf ("They should answer the Firefly trivia question to see who goes first in line.\n");
    }
    return 0;
}

//functions
void getstr (char arr[], int strSize){
    int index = 0;
    //scan into a temporary
    char temp[MAX_INPUT];
    scanf("%[^\n]", temp);
    char variableToScanNull;
    scanf("%c", &variableToScanNull);
    //make sure it doesn't go over 100 and scan into array
    while (index<strSize) {
        arr[index] = temp[index];
        index++;
    }
    arr[index] = '\0';
}

int strcompare (char array[], char arr[]){
    int index = 0;
    while (array[index] != '\0' && arr[index] != '\0') {
        if (array[index] > arr[index]){
            return 1;
        }
        else if (array[index] < arr[index]) {
            return -1;
        }
        index++;
    }
    return 0;
}

int strlength (char arr[]){
    int count = 0;
    int ind = 0;
    while (arr[ind++] != '\0') {
        count++;
    }
    return count;
}
