#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int col = 5;
    const int row = 5;
    int arr[col][row];
    int sum_rows[col]{ 0,0,0,0,0 };
    int sum_cols[row]{ 0,0,0,0.0 };
    int firstElement;
    cout << "Введіть перше значення: ";
    cin >> firstElement;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
                arr[i][j] = firstElement;
            else
                arr[i][j] = arr[i][j - 1] * 2;
        }
    }
    cout << "Створений масив" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}