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
    int sum_cols[row]{ 0,0,0,0,0 };
    int firstElement;
    cout << "Введіть  перше  значення: ";
    cin >> firstElement;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = firstElement + i + j;
        }
    }
    cout << "Створений  масив: " << endl;
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