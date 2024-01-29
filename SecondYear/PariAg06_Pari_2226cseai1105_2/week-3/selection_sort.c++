#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int midIndex=i;
        for(int j=i+1;j<n;j++){
          if (arr[midIndex] > arr[j]) {
            midIndex = j;
          }
        }
            swap(arr[midIndex],arr[i]);
                    }
    
    // Write your code here.
}