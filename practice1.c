#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    typedef struct {
	    char date[11];
	    char time[6];
	    int steps;
    } FITNESS_DATA;


    char filename[] = "FitnessData_2023.csv";
    FILE* file = fopen(filename, "r");

    int count = 0; 
    char array[100], FitnessDataArray[1000];

    while (fgets(array, 100, file) != NULL){ 
        count++;
    }
    printf("%d\n", count);

    int numData = count, i; 

    FITNESS_DATA fitnessDataArray [] = {};
        for (i = 0; i < numData; i++){
    }

fclose(file);

return 0; 

}

