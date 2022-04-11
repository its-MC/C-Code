//Adam Gray
//Code to print a rectangle of asterisks

#include <stdio.h>
#include <stdlib.h>

//funcion declaration
void handle_error(int len, char*argv[]);
void draw(int len, char*argv[]);

//main function
int main(int argc, char*argv[]){
    //get lenght of arguments
    int len = argc - 1;
    //call functions
    handle_error(len, argv);
    draw(len, argv);
    return 0;
}

//function to draw rectangle
void draw(int len, char*argv[]){
    //assign length and width
    int length = atoi(argv[1]);
    int width = atoi(argv[2]);
    //draw rectangle
    int i, j;
    for(i = 0; i < length; i++){
        for(j = 0; j < width; j++){
            if (i == 0 || i == length - 1 || j == 0 || j == width - 1){
                printf("*");}
            else{
                printf(" ");}
        }
        printf("\n");
    }
}

//function to handle errors
void handle_error(int len, char*argv[]){
    //if no arguments
    if (len < 2){
        printf("Please enter two arguments\n");
        exit(1);
    }
    else{
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        //if one argument is not a number
        if (!num1){
            printf("Error: %s is not a number\n", argv[1]);
            exit(1);
        }
        else if (!num2){
            printf("Error: %s is not a number\n", argv[2]);
            exit(1);
        }
    }
}