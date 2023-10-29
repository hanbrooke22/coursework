#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   // typedef struct{ 
      //  char date[11]; 
      //  char time[6];
      //  int steps; 
   // } FITNESS_DATA

    char* fileName = "FitnessData_2023.csv";
    FILE *file = fopen(fileName, "r");
    int count = 0, i = 0;

    char array[1000]; 

    while(fgets(array, 1000, file)){
        count = count + 1; 
    }
    fclose(file);
    
    printf("Number of records in file: %d\n", count);

    for(i = 0; i <= 3; i++){
        printf("%s", array[i]);
    }

return 0; 
}