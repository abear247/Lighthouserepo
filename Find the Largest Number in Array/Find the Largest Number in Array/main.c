
#include <stdio.h>

int largestNumber(int array[], int size){
    int max = array[0];
    int current;
    for (int i = 0; i<size;++i){
        current = array[i];
        if (current > max)
            max = current;
    }
    return max;
}


int main(){
    int array1[] = {-1,-2,-5,-4,-3};
    int array2[] = {10,2,5,4,3};
    int array3[] = {1,2,5,4,33};
    int max;
    max = largestNumber(array1, sizeof(array1)/sizeof(array1[0]));
    printf("Max in middle is %d\n", largestNumber(array1, sizeof(array1)/sizeof(array1[0])));
    max = largestNumber(array1,sizeof(array2)/sizeof(array2[0]));
    printf("Max at beginning is %d\n", largestNumber(array2,5));
    max = largestNumber(array1,sizeof(array3)/sizeof(array3[0]));
    printf("Max at end is %d\n", largestNumber(array3,5));
    return 0;
}
