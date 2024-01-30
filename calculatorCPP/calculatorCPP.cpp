#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float num, num1, num2;
    int oper;

    do
    {
        cout << "Выберите действие\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Квадратный корень из числа\n";
        cout << "7. Нахождение процента от числа\n";
        cout << "8. Факториал числа\n";
        cout << "9. Выход\n\n";
        cin >> oper;

        if (oper == 1)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            num = num1 + num2;
            cout << num1 << " + " << num2 << " = " << num << endl << endl;
        }

        else if (oper == 2)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            num = num1 - num2;
            cout << num1 << " - " << num2 << " = " << num << endl << endl;
        }

        else if (oper == 3)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            num = num1 * num2;
            cout << num1 << " * " << num2 << " = " << num << endl << endl;
        }

        else if (oper == 4)
        {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            if (num2 == 0)
            {
                cout << "Делить на 0 нельзя\n\n";
            }
            else
            {
                num = num1 / num2;
                cout << num1 << " / " << num2 << " = " << num << endl << endl;
            }
        }

        else if (oper == 5)
        {
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень числа: ";
            cin >> num2;
            num = pow(num1,num2);
            cout << num1 << "^" << num2 << " = " << num << endl << endl;
        }

        else if (oper == 6)
        {
            cout << "Введите число: ";
            cin >> num1;
            num = sqrt(num1);
            cout << "квадратный корень из " << num1 << " = " << num << endl << endl;
        }

        else if (oper == 7)
        {
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите процент от числа: ";
            cin >> num2;
            num = (num1 / 100) * num2;
            cout << num2 << " % от " << num1 << " = " << num << endl << endl;
        }
        
        else if (oper == 8)
        {
            cout << "Введите число: \n";
            cin >> num1;
            num2 = num1;

            int factorial = 1;
            while (num1 >1)
            {
                factorial *= num1;
                num1 -= 1;
            }

            cout << "Факториал числа " << num2 << " равен " << factorial << endl << endl;
        }

        else if (oper == 9)
        {
            cout << "Выход...\n";
        }
        else
        {
            cout << "Неверная операция!\n\n";
        }
    } while (oper != 9);
}