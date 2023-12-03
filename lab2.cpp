#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int col = 4;
    const int row = 4;
    int arr[col][row];
    int sum_rows[col]{ 0,0,0,0 };
    int sum_cols[row]{ 0,0,0,0 };
    int totalSum = 0;
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
            sum_rows[i] += arr[i][j];

        }
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            sum_cols[i] += arr[j][i];
        }
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            totalSum += arr[i][j];
        }
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << "\t" << arr[i][j] << " ";
        }
        cout << " |\t" << sum_rows[i];
        cout << endl;
    }
    cout << "\t-----------------------------------" << endl;
    for (size_t i = 0; i < row; i++)
    {
        cout << "\t" << sum_cols[i] << " ";

    }
    cout << "|    " << totalSum << endl;
    return 0;
}