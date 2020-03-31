#include<bits/stdc++.h>
using namespace std;

int main()
{

    int A[10][10], i, j, row, col, trow, tcol;
    cout << "Enter numbers of rows and columns of A matrix: ";
    cin >> row >> col;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            cin >> A[i][j];
        }
    }
     cout << endl << endl;
    trow=col;
    tcol=row;

    for(i=1; i<=trow; i++){
        for(j=1; j<=tcol; j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
