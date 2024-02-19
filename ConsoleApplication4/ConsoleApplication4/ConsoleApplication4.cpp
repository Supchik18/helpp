#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int a = 3;
    const int c = 5;
    float arr[a][c];

    // Ввод элементов двумерного массива с клавиатуры
    for (int i = 0; i < a; i++) {
        cout << "Введите элементы для строки " << i + 1 << " (разделенные пробелом): ";
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Вычисление среднего арифметического элементов строк и вывод результатов
    for (int i = 0; i < a; i++) {
        float f = 0;
        for (int j = 0; j < c; j++) {
            f += arr[i][j];
        }
        float w = f / c;
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << w << endl;
    }

    return 0;
}
