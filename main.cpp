#include "main.hpp"

void addNumbers() {
    float a = 0, b = 0;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Результат: " << a + b << endl;
}


void subtractNumbers() {
    float a = 0, b = 0;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Результат: " << a - b << endl;
}


void multiplicationNumbers() {
    float a = 0, b = 0;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a * b << endl;
}


void divisionNumbers() {
    float a = 0, b = 0;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    if (b != 0) {
        cout << "Результат: " << a / b << endl;
    } else {
        cout << "Ошибка: деление на ноль!" << endl;
    }
}


    void exponentiationNumbers() {
        float a = 0;
        int b = 0;
        cout << "Введите основание: ";
        cin >> a;
        cout << "Введите показатель степени: ";
        cin >> b;
        cout << "Результат: " << pow(a, b) << endl;
    }



    void reciprocalNumbers() {
        float a = 0;
        cout << "Введите число: ";
        cin >> a;
        if (a != 0) {
            cout << "Результат: " << 1 / a << endl;
        } else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
    }

    void binaryNumber() {
        int a = 0;
        cout << "Введите целое число: ";
        cin >> a;
        cout << "Двоичное представление: " << bitset<32>(a) << endl;
    }

    void hexadecimalNumber() {
        int a = 0;
        cout << "Введите целое число: ";
        cin >> a;
        cout << "Шестнадцатеричное представление: " << hex << a << endl;
    }



    void help() {
        cout << "\n\n";
        cout << " Калькулятор -\n";
        cout << "\t a - Сложение двух чисел\n";
        cout << "\t b - Вычитание двух чисел\n";
        cout << "\t c - Умножение двух чисел\n";
        cout << "\t d - Деление двух чисел\n";
        cout << "\t f - Возведение числа в степень\n";
        cout << "\t g - Взятие обратного значения\n";
        cout << "\t i - Преобразование числа в двоичное представление\n";
        cout << "\t j - Преобразование числа в шестнадцатеричное представление\n";
        cout << "\t h - Помощь\n";
        cout << "\t e - Выход\n";
        cout << "\n\n";
    }



void error() {
    cout << "Ошибка: неизвестное значение!\n";
}



int main(int argc, char **argv) {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    unsigned char type;
    bool flag = true;
    while (flag) {
        cout << "Калькулятор\nh - Помощь\ne - Выход\nВведите число: ";
        cin >> type;
        switch (type) {
            case 'a':
                addNumbers();
                break;
            case 'b':
                subtractNumbers();
                break;
            case 'c':
                multiplicationNumbers();
                break;
            case 'd':
                divisionNumbers();
                break;
            case 'f':
                exponentiationNumbers();
                break;
            case 'g':
                reciprocalNumbers();
                break;
            case 'i':
                binaryNumber();
                break;
            case 'j':
                hexadecimalNumber();
                break;
            case 'h':
                help();
                break;
            case 'e':
                flag = false;
                break;
            default:
                error();
                break;
        }
    }
    return 0;
}
