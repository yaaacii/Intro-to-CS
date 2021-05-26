// Cicelia Siu - csiu - 11/15/2019
//CS 135.1101 - Programming Assignment 7: Fraction calculator 

#include <stdio.h>
int getMenuChoice ();
void getFraction (int* ptr1, int* ptr2);
void addFraction(int v1, int v2, int v3, int v4, int* ptr3, int* ptr4);
void subtractFraction(int n1, int n2, int d1, int d2, int* ptrNum, int* ptrDem);
void multiplyFraction(int v1, int v2, int v3, int v4, int* ptr3, int* ptr4);
void divideFraction(int v1, int v2, int v3, int v4, int* ptr3, int* ptr4);
void reduceFunction(int * numPtr, int * demPtr);


int main() {
  int num1, num2;
  int dem1, dem2;

  int numResult;
  int demResult;

  int menu;
  
  do {
    menu = getMenuChoice();
    switch (menu) {
      case 1:
        getFraction (&num1, &dem1);
        getFraction (&num2, &dem2);
        addFraction(num1, num2, dem1, dem2, &numResult, &demResult); 
        reduceFunction(&numResult, &demResult);
        printf ("*RESULT*\n");
        printf ("%d/%d\n", numResult, demResult);
        break;
      case 2:
        getFraction (&num1, &dem1);
        getFraction (&num2, &dem2);
        subtractFraction(num1, num2, dem1, dem2, &numResult, &demResult);
        reduceFunction(&numResult, &demResult);
        printf ("*RESULT*\n");
        printf ("%d/%d\n", numResult, demResult);
        break;
      case 3:
        getFraction (&num1, &dem1);
        getFraction (&num2, &dem2);
        multiplyFraction(num1, num2, dem1, dem2, &numResult, &demResult);
        reduceFunction(&numResult, &demResult);
        printf ("*RESULT*\n");
        printf ("%d/%d\n", numResult, demResult);
        break;
      case 4:
        getFraction (&num1, &dem1);
        getFraction (&num2, &dem2);
       divideFraction(num1, num2, dem1, dem2, &numResult, &demResult);
        reduceFunction(&numResult, &demResult);
        printf ("*RESULT*\n");
        printf ("%d/%d\n", numResult, demResult);
        break;
      default:
        menu = 0;
        break;    
    }
    

  } while (menu != 0);
  
  return 0;
}

int getMenuChoice (){
  int menuchoice = 0;
  printf("***FRACTION CALCULATOR***\n");
  printf("1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n0 - EXIT\n");
  scanf("%d", &menuchoice);
  return menuchoice;
}

void getFraction (int* ptr1, int* ptr2){
  printf ("Enter a fraction #/# \n");
  scanf ("%d/%d", ptr1, ptr2);
} 

void addFraction(int n1, int n2, int d1, int d2, int* ptrNum, int* ptrDem){
  if (d1 != d2) {
    *ptrDem = d2 * d1;
    *ptrNum = n1 * d2 + n2 * d1;
  }
  else {
    *ptrDem = d1;
    *ptrNum = n1+n2;
  }
}

void subtractFraction(int n1, int n2, int d1, int d2, int* ptrNum, int* ptrDem){
  if (d1 != d2) {
    *ptrDem = d2 * d1;
    *ptrNum = n1 * d2 - n2 * d1;
  }
  else {
    *ptrDem = d1;
    *ptrNum = n1-n2;
  }
}

void multiplyFraction (int n1, int n2, int d1, int d2, int* ptrNum, int* ptrDem){
  *ptrNum = n1 * n2;
  *ptrDem = d1 * d2;
}

void divideFraction (int n1, int n2, int d1, int d2, int* ptrNum, int* ptrDem){
  *ptrNum = n1 * d2;
  *ptrDem = d1 * n2;
}

void reduceFunction(int * numPtr, int * demPtr) {
  int lower = *numPtr < *demPtr ? *numPtr : *demPtr; 
  int gcf = 1;

  for (int i = 1; i <= lower; i++) {
    if (i > gcf && *numPtr % i == 0 && *demPtr % i == 0) {
      gcf = i;
    }
  }

  *numPtr = *numPtr / gcf;
  *demPtr = *demPtr / gcf;
}




