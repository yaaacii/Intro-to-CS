/* Cicelia Siu - csiu - 11/23/2019
Programming Assignment 8: Comicon */

# include <stdio.h>
# include <string.h>
# define MAX 100

void getstr (FILE *fp, int, char []);
void saveBadgeName (int size, const char arr[MAX], char array[MAX]);
void sortNames (int size, char arr[][MAX]);

char names[MAX][MAX];
char badge[MAX][MAX];
int number;

int main (int argc, char* argv[]){
//open files  and 
    FILE *input;
    FILE *output;


    input = fopen (argv[1], "r");
    output = fopen (argv[2], "w");
//check if there is two commandline arguments
    if (argc != 3){
        fprintf (stderr, "usage: write_to_file file_name\n");
        return 1;
    }
//check if files are present
    if (input == NULL){
        fprintf (stderr, "Can't open %s\n", argv[1]);
        return 1;
    }
//check how many names
    char null;
    fscanf(input, "%d%c", &number,&null);
    fprintf (output, "Badges:\n");
    for (int i = 0; i <=number; i++){
        getstr(input, MAX, names[i]);
        saveBadgeName (number, names[i], badge[i]);
        fprintf(output, "%s\n", badge[i]);
    }
   
    sortNames(number, names);
    fprintf (output,"Line Position:\n");
    for(int j = 0; j < number; j++) {
        fprintf(output, "%d: %s\n", j+1, names[j]);
    }

    fclose (input);
    fclose (output);
    return 0;
}

void getstr (FILE *fp, int size, char array[]){
   int i = 0;
   char character;
    while (fscanf (fp, "%c", &character) ==1) {
        array[i] = character;
        //size -1 to add the null
        if (character == '\n' || i>size-1){
            array[i] = '\0';
            return;
        }
        i++;
    } 
}

void saveBadgeName (int size, const char arr[], char array[]){
    for (int i = 0; i <size; i++){
        int j;
        for (j = 0; j < 15; j++){
            //how do you make it the first 15 MEANINGFUL ones?
            array[j] = arr[j];
        }  
        array[j] = '\0';
    }
    return;
}

void sortNames(int size, char arr[][MAX]) {
   char temp[MAX];

  //loop for each name
   for(int i = 0; i < size; i++) { 
		
      //loop through name
      for(int j = 0; j < size-1; j++) {
         //check if next number is lesser than current no
         //swap the numbers. 
         //(Bubble up the highest number)
			
            if(strcmp(arr[j], arr[j+1]) > 0) {
                strcpy (temp, arr[j]);
                strcpy (arr[j], arr[j+1]);
                strcpy (arr[j+1], temp);    
            }
		}
    }
    return;
}

