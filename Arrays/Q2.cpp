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
    
