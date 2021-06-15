Q-> https://www.geeksforgeeks.org/program-find-minimum-maximum-element-array/

#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE JUDGE
    freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int a[n],i;

    for(i=0;i<n;i++) {
        cin >> a[i];
    }

    int min = INT_MAX, max = INT_MIN;

    for (i=0;i<n;i++) {
        if (min>a[i])
            min = a[i];
    }

    for (i=0;i<n;i++) {
        if (max<a[i])
            max = a[i];

    }
    cout << min << endl;
    cout << max << endl;

    }
    


* More Optimized version - 
Time Complexity - O(n)
	
#include <bits/stdc++.h>
using namespace std;
 
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
 
int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
 
int main()
{
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n) << "\n";
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}
