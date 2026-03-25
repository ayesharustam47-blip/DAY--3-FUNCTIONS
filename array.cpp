#include <iostream> 
using namespace std;
void copy_arr(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}
int main() {
    int n = 5;
    int arr1[5] = { 15, 10, 12,34,78 };
    int arr2[5];
    copy_arr(arr1, arr2, n);
    cout << "The elements stored in the first array are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\n";
    cout << "The elements copied into the second array are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
