#include <iostream>
#include <Windows.h>
#include <cstdlib> // Для використання функції rand()
#include <ctime>   // Для генерації випадкових чисел на основі часу
using namespace std;

const int row = 5;
const int col1 = 10;
const int col2 = 5;
int arr1[row][col1];
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    cout << "Створений  масив (5x10):\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col1; ++j) {
            arr1[i][j] = rand() % 51;
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }
    int arr2[row][col2];
    cout << "\nСтворений масив (5x5):\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col2; ++j) {
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}