#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= mid) temp.push_back(arr[i++]);   
    while (j <= right) temp.push_back(arr[j++]); 

    for (int k = 0; k < temp.size(); k++) arr[left + k] = temp[k];
}


void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return; 

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);      
    mergeSort(arr, mid + 1, right); 
    merge(arr, left, mid, right);   
}

int main() {
    std::vector<int> data = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(data, 0, data.size() - 1);
    
    for (int x : data) std::cout << x << " "; 
    return 0;
}
