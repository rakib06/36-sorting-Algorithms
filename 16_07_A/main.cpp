/*#include<bits/stdc++.h>
using namespace std;

///pre-processing
#define     gcd(a, b)       __gcd(a,b)
#define     lcm(a, b)       (a * b) / gcd(a, b)
#define     loop(i, n)      for(int i=0;i<n;i++)
#define     all(x)          x.begin(),x.end()
#define     mem(a, x)       memset(a,x,sizeof a)
#define     endl            '\n'
#define     ss              second
#define     ff              first
#define     TN              typename

///input functions
int Int(){int x;scanf("%d",&x);return x;}
long long Long(){long long x;scanf("%lld",&x);return x;}
double Double(){double x;scanf("%lf",&x);return x;}

///input functions shorting
#define Int Int()
#define Long Long()
#define Double Double()
#define Float Float()

///Constants
const int N = 3 * (int) 1e5 + 5;
const long long MOD = (int) 1e9 + 7;
//Trying to do something.
//()()()()()()()()() ..... ()()()()()()()()()()()()
//~~~~~~~~~~~~~~~~~~~~~~Get Ready~~~~~~~~~~~~~~~~~~~~~

///debugger

///end

// loading..................

int arr[N];
int main()
{
    //freopen("input.txt","r",stdin);
    int n = Int;
    for(int i = 0; i < n; i++){
        arr[i] = Int;
        if(!(arr[i] & 1)) arr[i]--;
    }
    for(int i = 0; i < n; i++)cout << arr[i] << " ";
    cout << endl;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  for(int i=0; i<n; i++){
  if(a[i]%2==0){
    a[i]=a[i]-1;
    cout<<a[i]<<" ";
  }
  else
    cout<<a[i]<<" ";
}
  cout<<endl;
}
