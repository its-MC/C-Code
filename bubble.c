#include <stdio.h>
#include <stdlib.h>

//function declarations
void sort(int array[], int length);
void swap(int *num1, int *num2);
void makeArray(char*argv[], int array[], int length);
void printArray(int array[], int length);

//main function
int main(int argc, char*argv[]){
    //length of array
    int length = argc - 1;
    //assign memory for array
    int *nums = malloc(sizeof(int) * length);

    //functions to make, sort, and print array
    makeArray(argv, nums, length);
    sort(nums, length);
    printArray(nums, length);

    return 0;
}

//function to build array from command line arguments
void makeArray(char*argv[], int array[], int length){
    for (int i = 0; i < length; i++){
        array[i] = atoi(argv[i + 1]); //put arguments into array
    }
}

//function to swap two numbers
void swap(int *num1, int *num2){
   int temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}

//function to bubble sort array
void sort(int array[], int length){
    int i, j;
    //loop through array
    for(int i = 0; i < length - 1; i++){
        //loop through array again
        for(int j = 0; j < length - i - 1; j++){
            //if nums[j] is greater than nums[j+1], swap them
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]); //call the swap function
            }
        }
    }
}

//function to print array
void printArray(int array[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}