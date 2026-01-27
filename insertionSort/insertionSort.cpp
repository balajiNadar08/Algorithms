#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "]";
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;

    cout << "\nPass " << i << ": ";
    printArray(arr, n);
  }
}

int main() {
  const int SIZE = 10;
  int arr[SIZE];

  cout << "Enter 10 integers: ";
  for (int i = 0; i < SIZE; i++) {
    cin >> arr[i];
  }

  insertionSort(arr, SIZE);

  return 0;
}