#include <iostream>

using namespace std;

void swap_(int *xp,int *yp)
{
    int temp=*xp;
    *xp= *yp;
    *yp=temp;
}
void recursiveInsertionSort(int arr[],int n)
{
    if(n<=1)
        return;
    recursiveInsertionSort(arr,n-1);
    int last=arr[n-1];
    int j=n-2;
    while(j<=0 && arr[j]>last )
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;

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
    recursiveInsertionSort(arr,n);
    cout <<"InsertionSort (recursive)  :"<< endl;
    printArray(arr,n);

    return 0;
}
