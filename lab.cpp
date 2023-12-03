#include <iostream>
#include <Windows.h>
#include <cstdlib> // Äëÿ âèêîðèñòàííÿ ôóíêö³¿ rand()
#include <ctime>   // Äëÿ ãåíåðàö³¿ âèïàäêîâèõ ÷èñåë íà îñíîâ³ ÷àñó
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
    cout << "Ñòâîðåíèé ìàñèâ:" << endl;
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
    cout << "Ñóìà âñ³õ åëåìåíò³â: " << sum << endl;
    cout << "Ñåðåäíº àðèôìåòè÷íå: " << average << endl;
    cout << "Ì³í³ìàëüíèé åëåìåíò: " << minElement << endl;
    cout << "Ìàêñèìàëüíèé åëåìåíò:  " << maxElement << endl;
    return 0;
}
