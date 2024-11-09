// question link -- https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/bubble-sort-15-8064c987/

// Input: n = 5, arr[] = {4, 1, 3, 9, 7}
// Output: 1 3 4 7 9
// Input: n = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
// Output: 1 2 3 4 5 6 7 8 9 10

// Your Task : 
// You don't have to read input or print anything. Sse Bubble Sorting Algorithm
// Constraints:
// 1 <= n <= 103
// 1 <= arr[i] <= 103

// bubble sort is stable algorithm

#include<iostream>
#include<algorithm>
using namespace std;

// int main(){
//     int arr[] = {10, 9, 8, 17, 6, 15, 4, 33, 20, 1};
//     int n=10;
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<< arr[i] << " ";
//     }
// }

// optimization bubble sort in O(n) if best case

int main(){
    int arr[] = {10, 9, 8, 17, 6, 15, 4, 33, 20, 1};
    int n=10;
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false){
            // it means all the elements are sorted
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}