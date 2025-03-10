#include <stdio.h>
#include <pthread.h>
#define ROWS 9
#define COLUMNS 9
#define NUM_THREADS 4

int sudokuGrid[ROWS][COLUMNS];

int main(){
    FILE *input = fopen("input.txt", "r");

    if(input == NULL){
        printf("Error: could not open file\n");
        return -1;
    }

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            if(fscanf(input, "%d", &sudokuGrid[i][j]) != 1) {
                printf("Error: grid is in an invalid format\n");
                fclose(input);
                return -1;
            }
        }
    }

    fclose(input);



    return 0;
}