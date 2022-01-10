/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int showArray(int n,int arr[])
{
    cout<<"Elements of the array are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}

int insertArray(int n,int arr[])
{
    int num,pos;
    cout<<"Enter the number where to insert an array: ";
    cin>>pos;
    cout<<"Enter the number to insert: ";
    cin>>num;
    for(int i=n-1;i>=pos-1;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    return 0;
}

int main()
{
    int choi;
    int n,e;
    cout<<"Enter the number of elements of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Welcome to Array Operations\n";
    while(1)
    {
        cout<<"Enter choice: \n 1 To create an array\n 2 To insert an element\n 3 To delete an element\n 4 To show the array\n 5 to sort the array\n 6 to find minimum element in array\n 7 to find maximum element in array\n 0 to exit\n";
        switch(choi)
        {
            case 1:
                showArray(n,arr);
                break;
            case 2:
                insertArray(n,arr);
                break;
            case 6:
                break;
            case 7:
                break;
            default:
               cout<<"You have entered a wrong choice\n";
               break;
        }
    }
}


