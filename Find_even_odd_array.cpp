#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " is even" << endl;
        }
        else
        {
            cout << arr[i] << " is odd" << endl;
        }
    }

    return 0;
}
