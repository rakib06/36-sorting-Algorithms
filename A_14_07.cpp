#include<bits/stdc++.h>

using namespace std;
int main()
{
    while(1){
        int n;
        int c[n];
        int m;
        int a[m];
        cin>>n;
        cin>>m;
        for (int i=0;i<n;i++){
            cin>>c[i];
        }
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        int count_=0;
        for (int i=0;i<m;i++){
            if(a[i]<c[i])
                count_++;
        }

        cout<<count_<<endl;


    }
    return 0;
}

