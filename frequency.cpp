#include <iostream> 
using namespace std;
void countFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1)
            continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
}
int main() {
    int n = 3;
    int arr[3] = { 25, 12, 43 };
    cout << "The frequency of all elements of an array:\n";
    countFrequency(arr, n);
    return 0;
}
