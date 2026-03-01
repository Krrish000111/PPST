#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter columns: ";
    cin >> c;

    int A[10][10], B[10][10];

    cout << "\nEnter Matrix A:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> A[i][j];
        }

    cout << "\nEnter Matrix B:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "] = ";
            cin >> B[i][j];
        }

    cout << "\n--- Sum (A+B) ---\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << A[i][j] + B[i][j] << "\t";
        cout << endl;
    }

    cout << "\n--- Difference (A-B) ---\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << A[i][j] - B[i][j] << "\t";
        cout << endl;
    }

    cout << "\n--- Transpose of A ---\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << A[j][i] << "\t";
        cout << endl;
    }

    if (r == c) {
        cout << "\n--- Main Diagonal ---\n";
        for (int i = 0; i < r; i++)
            cout << A[i][i] << " ";

        cout << "\n--- Secondary Diagonal ---\n";
        for (int i = 0; i < r; i++)
            cout << A[i][r-1-i] << " ";
        cout << endl;
    } else {
        cout << "\nDiagonals only for square matrix!" << endl;
    }

    return 0;
}