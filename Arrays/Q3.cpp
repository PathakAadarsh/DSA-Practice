Q- https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include <bits/stdc++.h>
using namespace std;

int main(){

	// #ifndef ONLINE JUDGE
 //   freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
 //   #endif

     int n, a[n], i;
     cin >> n;
     for (i=0;i<n;i++) {
        cin >> a[i];
     }

     i=0;
     int j=n-1;

     while (i<j) {
        swap(a[i],a[j]);
        i++;
        j--;
     }

     for (i=0;i<n;i++){
        cout << a[i] << " ";
     }
     
}



* More optimized version - 
Time Complexity - O(n)
  
#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 
/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // To print original array
    printArray(arr, n);
     
    // Function calling
    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}
