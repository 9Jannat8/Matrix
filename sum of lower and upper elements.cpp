#include<bits/stdc++.h>
using namespace std;
int main()
{
    //sum of upper and lower triangle elements depending on diagonal
    int A[10][10], i, j, row, col, sumlow=0, sumup=0;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    cout << "Take input of Matrix:" << endl;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            cin >> A[i][j];
            if(j<i){
                sumlow=sumlow+A[i][j];
            }
            if(j>i){
                sumup=sumup+A[i][j];

            }

        }
    }
    cout << "Sum of upper elements: " << sumup << endl << "Sum of lower elements: " << sumlow << endl;

}
