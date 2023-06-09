#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int arr[n][n];

    // Input array elements
    cout << "Enter the array elements: " << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate the summation of diagonal elements
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j || i+j == n-1) {
                sum += arr[i][j];
            }
        }
    }

    cout << "Summation is: " << sum << endl;

    return 0;
}
