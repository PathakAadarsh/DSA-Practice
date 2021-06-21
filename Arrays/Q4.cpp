Q-> https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/

Sorting an array using selection sort -


#include<bits/stdc++.h>
using namespace std;
/*************** MACROS *******************/
#define fastio            ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod               1000000000007
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<=b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define endl              "\n"
/************** CONSTS ***************/



void solve(int a[],int n)
{
   int imin,temp,i;
   for(i=0;i<n-2;i++)
    {
     imin=i;
     rep(j,i+1,n-1)
     {
          if(a[j]<a[imin])
               imin=j;
     }
     temp=a[i];
     a[i]=a[imin];
     a[imin]=temp;
      
    }
   


}
     

signed main()
{
     fastio
     #ifndef ONLINE JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
     
    // int t;
    // cin>>t;
    // while(t--)
    // {
       int a[]={24,48,72,1,17,9,2,8,92,12,23,19,4,3,17};
    int n=sizeof(a)/sizeof(a[0]);
   

     solve(a,15);
  //  }


for(int i=0;i<n;i++)
{
     cout<<a[i]<<" ";
}
}


Time Complexity - O(N^2)


