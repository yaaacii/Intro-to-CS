//CS135 - 1101
//Cicelia Siu - csiu - 8/20/2019
//Write a program that will allow the user to play a simplified version of MASH
//main funct
# include <stdio.h>

int main(){
	//create variables (declare)
	char initialsOne, initialsTwo, initialsThree;
	int kidsOne, kidsTwo, kidsThree;
	double salaryOne, salaryTwo, salaryThree;
	//prompt user for input then scan inputs
	printf ("Who do you want to marry?\n(enter first name initials)\n");
	scanf (" %c %c %c", &initialsOne, &initialsTwo, &initialsThree);
	printf ("How many kids do you want?\n(enter 3 whole numbers)\n");
	scanf ("%d%d%d", &kidsOne, &kidsTwo, &kidsThree);
	printf ("How much money do you want?\n(enter 3 decimal numbers)\n");
	scanf ("%lf%lf%lf", &salaryOne, &salaryTwo, &salaryThree);
	//print options
	printf ("\nM*A*S*H\n");
	printf ("Option 1:\nYou live in a Mansion.\nYou make $%-.2lf dollars per year.\nYou're married to %c and have %d kids.\n", salaryOne, initialsOne, kidsOne);
	printf ("Option 2:\nYou live in an Apartment.\nYou make $%-.2lf dollars per year.\nYou're married to %c and have %d kids.\n", salaryTwo, initialsTwo, kidsTwo);
	printf ("Option 3:\nYou live in a House.\nYou make $%-.2lf dollars per year.\nYou're married to %c and have %d kids.\n", salaryThree, initialsThree, kidsThree);
	//return
	return 0;
}
