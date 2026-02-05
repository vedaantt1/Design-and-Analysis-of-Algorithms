#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {11, 20, 18,3, 2};
    
    std::cout << "Original array: ";
    printArray(data);

    insertionSort(data);

    std::cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
