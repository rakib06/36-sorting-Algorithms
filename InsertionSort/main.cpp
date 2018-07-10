#include <iostream>

using namespace std;

void swap_(int *xp,int *yp)
{
    int temp=*xp;
    *xp= *yp;
    *yp=temp;
}
void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[i]){
               swap_(&arr[j],&arr[i]);
            }

        }

    }
}
void InsertionSortWhile_loop(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;

    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    cout <<"InsertionSort  :"<< endl;
    printArray(arr,n);
    InsertionSortWhile_loop(arr,n);
    cout <<"InsertionSort (while loop) :"<< endl;
    printArray(arr,n);
    return 0;
}
