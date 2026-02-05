#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) { 
                min_idx = j; 
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    std::vector<int> data = {6, 26, 19, 12, 3};
    selectionSort(data);

    for (int x : data) std::cout << x << " ";
    return 0;
}
