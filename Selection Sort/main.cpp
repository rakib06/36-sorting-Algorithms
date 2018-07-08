// C program for implementation of selection sort
// find the smallest first
//collected by : Md. Rakibul Hasan Molla
#include <iostream>
using namespace std;
void swap(int *xp,int *yp)
{
    int temp= *xp;
    *xp=*yp;
    *yp=temp;
}

void selectionSort(int arr[],int n)//here n is the last index of the array
{
    int i,j,min_idx;

    //One by one move the boundary of unsorted sub-array
    for(i=0;i<n-1;i++)
    {
        //find the min element of this array
        min_idx=i;
        for (j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min_idx]){
                    min_idx=j;

                //swap the found minimum element with the first element

                }

            }
            swap(&arr[min_idx],&arr[i]);

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
void ScanArray(int arr[],int size_)
{
    for(int i=0;i<size_;i++)
    {
        cin>>arr[i];
    }

}

int main()
{
    int size_;
    cout<<"Size : ";
    cin>>size_;
    int arr[size_];
    ScanArray(arr,size_);
//    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"\nSorted Array using Selection Sort  : "<<endl;
    printArray(arr,n);
    return 0;
}
