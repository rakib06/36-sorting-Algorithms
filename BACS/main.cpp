#include <iostream>

using namespace std;

int main()

{
    int n;

    cin>>n;

        int flag[n];
        int a =0;
     for (int i=0;i<n;i++){
        int x;
        cin>>x;
        int y[x];
     }
        for(int j=0;j<x;i++){
            cin>>y[j];

        }

        for (int k =1;k<x;k++){
            if (y[k]-y[k]-1==1){
                flag[a]=1;
                a++;

                break;
            }
        }




     for (int i =0;i<n;i++)
     {
         if(flag[i]==1)
            cout<<"Case "<<i+1<<": "<<"YES"<<endl;
         else
            cout<<"Case "<<i+1<<": "<<"NO"<<endl;
     }


    return 0;
}
