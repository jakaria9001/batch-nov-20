#include <bits/stdc++.h>
using namespace std;

// Time O(N) Space O(1)
// Approach 2 pointers
void rearrange(vector<int> &A, int n) {
    int i = 0, j = 0;
    
    while(i<n && j<n) {
        if(A[j]<0) {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
        }
        j++;
    }
}

// A utility function to print an array
void printArray(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

int main() {
    vector<int> arr{ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = arr.size();
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}