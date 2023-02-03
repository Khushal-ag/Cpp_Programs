#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    cout << "Sorter Array : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// Time complexities
// Best case : O(n)
// Average case : O(n^2)
// Worst case : O(n^2)

// analysis of bubblesort
// 1. In the best case, the array is already sorted. In this case, the inner loop will not execute at all. So, the time complexity will be O(n).
// 2. In the worst case, the array is sorted in the reverse order. In this case, the inner loop will execute n-1 times for the first iteration, n-2 times for the second iteration and so on. So, the time complexity will be O(n^2).
// 3. In the average case, the time complexity will be O(n^2).

// Algorithm for bubblesort
// 1. Start from the first element of the array and compare the current element with the next element of the array.
// 2. If the current element is greater than the next element of the array, then swap both the elements.
// 3. If the current element is less than the next element, then move to the next element. Repeat step 1.
// 4. After the first iteration, the largest element of the array will be placed at the last index of the array.
// 5. Repeat step 1 to 4 for n-1 times or until the array is sorted.
