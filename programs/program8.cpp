#include <iostream>
using namespace std;

void print2Darray(int m, int n, int *arr)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << *(arr + i * n + j) << " ";
        }

        cout << endl;
    }
}

void print2Drevarray(int m, int n, int *arr)
{
    int total = m * n;

    int i = 0;
    int j = total - 1;

    for(int k = 0; k < total / 2; k++)
    {
        int temp = *(arr + i);

        *(arr + i) = *(arr + j);
        *(arr + j) = temp;

        i++;
        j--;
    }
}

int main()
{
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    int *arr = new int[m * n];

    cout << "Enter the elements of the matrix:\n";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Enter matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(arr + i * n + j);
        }
    }

    cout << "\nThe 2D array is:\n";
    print2Darray(m, n, arr);

    print2Drevarray(m, n, arr);

    cout << "\nThe 2D array in reverse order is:\n";
    print2Darray(m, n, arr);

    delete[] arr;

    return 0;
}