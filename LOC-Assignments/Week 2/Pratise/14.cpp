#include <iostream>
using namespace std;

int main() {
    int m, n, i, j;
    int matrix[10][10], transpose[10][10];

    /* Input the number of rows and columns of the matrix */
    cout << "Enter the number of rows and columns of the matrix: ";
    cin>>m>>n;

    /* Input the elements of the matrix */
    cout<<"Enter the elements of the matrix: ";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin>>matrix[i][j];
        }
    }

    /* Find the transpose of the matrix */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    /* Print the transpose of the matrix */
    cout << "The transpose of the matrix is: \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout<<transpose[i][j] << "\t";
        }
        cout<<"\n";
    }

    return 0;
}
