Q -> https://www.geeksforgeeks.org/range-and-coefficient-of-range-of-array/

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


float findMax(float a[], int n) {
     float res = a[0];
     for (int i = 1; i < n; i++)
          res = max(res, a[i]);
     return res;
}

float findMin(float a[], int n) {
     float res = a[0];
     for (int i = 1; i < n; i++)
          res = min(res, a[i]);
     return res;
}

int solve(float a[],int n)
{
     float max = findMax(a,n);
     float min = findMin(a,n);
     float range = max - min;
     float coeffRange = range / (max + min);
     cout << "Range is" << range << endl;
     cout << "Coefficient of Range is" << coeffRange << endl;
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
     int n;
     cin>>n;
     float a[n];
     for(int i=0;i<n;i++){
          cin >> a[i];
     }
   

     cout << solve(a,n);
  //  }


// for(int i=0;i<n;i++)
// {
//      cout<<a[i]<<" ";
// }
}


Time Complexity - O(n)
