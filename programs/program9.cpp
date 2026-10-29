#include <iostream>
using namespace std;

int saddlepoint(int m, int n, int arr[][100])
{
    for(int i = 0; i < m; i++)
    {
        int min = arr[i][0];
        int colmin = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
                colmin = j;
            }
        }

        int ismaxincol = 1;

        int k = 0;

        for(k = 0; k < m; k++)
        {
            if(arr[k][colmin] > min)
            {
                ismaxincol = 0;
                break;
            }
        }

        if(ismaxincol)
        {
            return min;
        }
    }

    return -1;
}

void print2Darray(int m, int n, int arr[][100])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[100][100];

    cout << "Enter the elements of the matrix:\n";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Enter matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nThe 2D array is:\n";
    print2Darray(m, n, arr);

    int sp = saddlepoint(m, n, arr);

    if(sp == -1)
    {
        cout << "No saddle point\n";
    }
    else
    {
        cout << "Saddle point: " << sp << endl;
    }

    return 0;
}