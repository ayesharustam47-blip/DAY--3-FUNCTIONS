//Function to find maximum of two numbers

#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int maxNum = maxOfTwo(num1, num2);
    cout << "Maximum is: " << maxNum << endl;

    return 0;
}

