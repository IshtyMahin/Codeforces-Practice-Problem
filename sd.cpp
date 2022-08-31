// STL Function to find maximum value and its index
#include <iostream>
#include <algorithm>
using namespace std;
// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    // *max_element() will return the max value in array
    int max = *max_element(arr,arr+n);
    // now max variable contain maximum value
    // Now we have maximum value so we will find index of this max value by using find() function
    int index = find(arr, arr+n, max) - arr;
    cout << "Maximum value in given array is ";
    cout << max<<" and its index is "<< index <<endl;
    return 0;
}