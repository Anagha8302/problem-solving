/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;

}
//Iterative approach.
/*
void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
*/
//Recursive approach
void reverseArray(int arr[],int start,int end)
{
    if(start>=end)
    return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseArray(arr,start+1,end-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout<<"Reversed Array is:"<<endl;
    printArray(arr,n);

    return 0;
}
