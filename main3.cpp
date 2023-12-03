#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int row, col;
    cout << "������ ������� �����: ";
    cin >> row;
    cout << "������ ������� �������: ";
    cin >> col;
    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    cout << "��������� �����: " << endl;
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
    cout << "������ ������� �����: ";
    cin >> shift;
    cout << "������ �������� ����� (���� - 0, ������ - 1, ����� - 2, ���� - 3): ";
    cin >> direction;
    for (int i = 0; i < shift; i++)
    {
        switch (direction)
        {
        case 0:
            // ���� ����
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
            // ���� ������
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
            // ���� �����
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
            // ���� ����
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
    cout << "��������� �����: " << endl;
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