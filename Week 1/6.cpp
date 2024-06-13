#include <bits/stdc++.h>

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) std::cin >> arr[i];
    std::cout << "Maximum element of array is: " << findMax(arr, n) << std::endl;
    return 0;
}
// 2nd Method: build max heap form array, return root. (same time complexity)