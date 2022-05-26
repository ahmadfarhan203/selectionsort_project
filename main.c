#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printArray(int A[], int n){
    for (int i=0; i<n; i++)
    {
        printf("%d ", A[i]);

    }
    printf(" \n");

}
void selectionSort (int A[] , int n){

    int indexOfMin , temp;

    printf("SelectionSort calismaya basladi...\n");
    for(int i= 0; i< n-1; i++)
    {
        indexOfMin=i;
        //kucukten buyuge giderken
        for(int j = i+1; j<n ; j++){
            if (A[j]<  A[indexOfMin]){
                indexOfMin= j;
            }
        }

        temp= A[i];
        A[i]= A[indexOfMin];
        A[indexOfMin]= temp;
    }


}

int main()
{
    int A[4000];
    int n=4000;
    srand (time (0));
    for(int i=0 ; i<4000; i++){
        n=rand() % 4000;
        A[i]=n;
        printf(" %d",A[i]);
    }


    printArray(A ,n);
    selectionSort(A ,n);
    printArray(A ,n);


    return 0;
}
