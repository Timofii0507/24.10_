#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int row, col;
    cout << "¬вед≥ть к≥льк≥сть р€дк≥в: ";
    cin >> row;
    cout << "¬вед≥ть к≥льк≥сть колонок: ";
    cin >> col;
    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    cout << "—творений масив: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int shift, direction;
    cout << "¬вед≥ть к≥льк≥сть зсув≥в: ";
    cin >> shift;
    cout << "¬вед≥ть напр€мок зсуву (вл≥во - 0, вправо - 1, вгору - 2, вниз - 3): ";
    cin >> direction;
    for (int i = 0; i < shift; i++)
    {
        switch (direction)
        {
        case 0:
            // «сув вл≥во
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col - shift; j++)
                {
                    arr[i][j] = arr[i][j + shift];
                }
                arr[i][col - shift - 1] = 0;
            }
            break;
        case 1:
            // «сув вправо
            for (int i = 0; i < row; i++)
            {
                for (int j = col - 1; j >= shift; j--)
                {
                    arr[i][j] = arr[i][j - shift];
                }
                arr[i][shift - 1] = 0;
            }
            break;
        case 2:
            // «сув вгору
            for (int j = 0; j < col; j++)
            {
                for (int i = 0; i < row - shift; i++)
                {
                    arr[i][j] = arr[i + shift][j];
                }
                arr[row - shift - 1][j] = 0;
            }
            break;
        case 3:
            // «сув вниз
            for (int j = 0; j < col; j++)
            {
                for (int i = row - 1; i >= shift; i--)
                {
                    arr[i][j] = arr[i - shift][j];
                }
                arr[shift - 1][j] = 0;
            }
            break;
        }
    }
    cout << "–езультат зсуву: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}