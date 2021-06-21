Q-> https://www.geeksforgeeks.org/find-frequency-number-array/

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



int solve(int a[],int n, int x)
{
     int count = 0;
     for (int i=0; i<n; i++)
          if(a[i] == x)
               count++;
          return count;
      
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
     int n,x;
     cin>>n>>x;
     int a[n];
     for(int i=0;i<n;i++){
          cin >> a[i];
     }
   

     cout << solve(a,n,x);
  //  }


// for(int i=0;i<n;i++)
// {
//      cout<<a[i]<<" ";
// }
}

Time Complexity - O(n)
