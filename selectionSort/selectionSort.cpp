#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "]";
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int currMinIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[currMinIndex]) {
        currMinIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[currMinIndex];
    arr[currMinIndex] = temp;

    cout << "\nPass " << i + 1 << ": ";
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

  selectionSort(arr, SIZE);

  return 0;
}