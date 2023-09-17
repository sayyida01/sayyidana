#include <stdio.h>
#include <math.h>
int main(){
//counters
int i=0,j=0,k=0,sum=0;
//first array
int Array1[2][2] ={
        {1,2},
        {3,4},;
//second array
int Array2[2][2]={
        {5,6},
        {0,7},;
//result array.
int ResultArray[2][2];
// Add
for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
        ResultArray[i][j]= Array1[i][j]+Array2[i][j];
    }
}
//multiply
for (i = 0; i < 2; ++i) {
    for (j = 0; j < 2; ++j) {
        for (k = 0; k < 4; ++k) {
            sum=sum+Array1[i][k]*Array2[k][j];
        }
        ResultArray[i][j]=sum;
        sum=0;
    }
}
//result
printf("\tMultiplication Array1 and Array2\n");
for (i = 0; i    < 2; ++i) {
    for (j = 0; j < 2; ++j) {
        printf(" %10d \t",ResultArray[i][j]);
    }
    printf("\n");
}
return 0;
}
