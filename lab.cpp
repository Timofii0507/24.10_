#include <iostream>
#include <Windows.h>
#include <cstdlib> // Для використання функції rand()
#include <ctime>   // Для генерації випадкових чисел на основі часу
using namespace std;

const int row = 5;
const int col = 5;
int arr[row][col];
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            arr[i][j] = rand() % 10;
        }
    }
    cout << "Створений масив:" << endl;
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            sum += arr[i][j];
        }
    }
    double average = static_cast<double>(sum) / (row * col);
    int minElement = arr[0][0];
    int maxElement = arr[0][0];
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }
    cout << "Сума всіх елементів: " << sum << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент:  " << maxElement << endl;
    return 0;
}