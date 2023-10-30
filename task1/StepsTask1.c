#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        
        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    typedef struct {
	    char date[11];
	    char time[6];
	    int steps;
    } FITNESS_DATA;


    char* fileName = "FitnessData_2023.csv";
    FILE *file = fopen(fileName, "r");
    int count = 0, i = 0;
    char record;
    char array[1000];

    while(fgets(array, 1000, file)){
        count++; 
    }
    printf("Number of records in file: %d\n", count);

    int j = 0;
    while(i <= count){ 
        char record[21] = "2023-09-01,07:30,300";
        char date[11];
        char time[6];
        char steps[10]; 
    tokeniseRecord(record, ",", date, time, steps);

     for(; j < 3; j++){
        printf("%s/%s/%s\n", date, time, steps); 
    }
    i++;
    }
fclose(file);
return 0; 
}
