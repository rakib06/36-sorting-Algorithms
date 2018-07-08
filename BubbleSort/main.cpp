// C program for implementation of bubble sort
//collected by : Md. Rakibul Hasan Molla
// O(n)

#include <iostream>

using namespace std;

void swap_(int *xp,int *yp)
{
    int temp = *xp;
    *xp=*yp;
    *yp=temp;

}
void bubbleSort(int arr[],int n)
{   int i;
    bool swaped;
    for(int i=0;i<n-1;i++)
    {
        swaped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap_(&arr[j],&arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false)
            break;



    }

}
void ScanArray(int arr[],int size_)
{
    for(int i=0;i<size_;i++)
    {
        cin>>arr[i];
    }

}
void printArray(int arr[],int size_)
{
    for(int i=0;i<size_;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size_;
    cout<<"Size : ";
    cin>>size_;
    int arr[size_];
    ScanArray(arr,size_);
    //int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"\nSorted Array using bubble Sort  : "<<endl;
    printArray(arr,n);
    return 0;

}
