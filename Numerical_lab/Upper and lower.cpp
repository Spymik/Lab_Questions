#include<iostream>
using namespace std;

int main()
{
    int i, j, a[10][10], row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    
    cout << "Enter matrix elements:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    
    cout << "Upper Triangular Matrix:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j < i)
            {
                cout << "0\t";
            }
            else
            {
                cout << a[i][j] << "\t";
            }
        }
        cout << endl;
    }
    
    cout << "Lower Triangular Matrix:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j <= i)
            {
                cout << a[i][j] << "\t";
            }
            else
            {
                cout << "0\t";
            }
        }
        cout << endl;
    }

    return 0;
}
