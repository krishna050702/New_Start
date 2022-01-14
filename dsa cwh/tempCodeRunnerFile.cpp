// #include <iostream>
// using namespace std;

// void insertionsort(int A[], int n)
// {
//     int value,hole  ;
//     for(int i=1; i<n; i++)
//     {
//         value = A[i];
//         hole = i;

//         while(hole > 0 && A[hole-1] > value)
//         {
//             A[hole] = A[hole-1];
//             hole = hole -1;
//         }
//         A[hole] = value;
//     }
// }

// void displayarray(int A[], int n)
// {
//     for(int i=0; i<n; i++)
//         cout << A[i] << ";";
//     cout << "\n";
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int A[n];

//     for(int i=0; i<n; i++){
//         cin >> A[i];
//     }
//     for(int i=0; i<n; i++){
//         if(i > 0){
//             insertionsort(A,i+1);
//             displayarray(A, i+1);
//         }
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>

#define MAX 7	//defining size of our array

int intArray[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
  int i;

  for(i = 0;i < count-1;i++) {
     printf("=");
  }

  printf("=\n");
}

void display() {
  int i;
  printf("[");

  // navigate through all items 
  for(i = 0;i < MAX;i++) {
     printf("%d ",intArray[i]);
  }

  printf("]\n");
}

void insertionSort() {

  int valueToInsert;
  int holePosition;
  int i;
 
  // loop through all numbers 
  for(i = 1; i < MAX; i++) { 

     // select a value to be inserted. 
     valueToInsert = intArray[i];

     // select the hole position where number is to be inserted 
     holePosition = i;

     // check if previous no. is larger than value to be inserted 
     while (holePosition > 0 && intArray[holePosition-1] > valueToInsert) {
        intArray[holePosition] = intArray[holePosition-1];
        holePosition--;
        printf(" item moved : %d\n" , intArray[holePosition]);
     }

     if(holePosition != i) {
        printf(" item inserted : %d, at position : %d\n" , valueToInsert,holePosition);
        // insert the number at current hole
        intArray[holePosition] = valueToInsert;
     }

     printf("Iteration %d#:",i);
     display();

  } 
}

int main() {
  printf("Input Array: ");
  display();
  printline(50);
  insertionSort();
  printf("Output Array: ");
  display();
  printline(50);
}