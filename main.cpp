#include <iostream>
using namespace std;

int main() {
    bool correct = true;
    int A[4][4];
    int B[4][4];
    int count = 1;

    for (int i = 0; i < 4 && correct; i++) {
        for (int j = 0; j < 4 && correct; j++) {
            cout << "Enter the element number " << count << " of the first matrix: ";
            cin >> A[i][j];
            cout << "Enter the element number " << count << " of the second matrix: ";
            cin >> B[i][j];
            count++;

            if(A[i][j] != B[i][j]){
                correct = false;
            }
        }
    }

    if (correct){
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (j != i){
                    A[i][j] = 0;
                }
            }
        }
    } else {
        cout << "The matrices are not equal";
    }

    cout << "Matrix A" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << A[i][j];
        }
        cout << endl;
    }

    cout << "Matrix B" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << B[i][j];
        }
        cout << endl;
    }
}
