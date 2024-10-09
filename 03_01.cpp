#include <iostream>
#include <windows.h>

class Calculator
{
private:

    double num1 = 0;
    double num2 = 0;

public:

    bool SetNum1(int valueNum1)
    {
        if (valueNum1 != 0) {
            num1 = valueNum1;
            return true;
        }
        else {
            return false;
        }
    }

    bool SetNum2(int valueNum2)
    {
        if (valueNum2 != 0) {
            num2 = valueNum2;
            return true;
        }
        else {
            return false;
        }
    }

    double add()
    {
        double result = num1 + num2;
        std::cout << "num1 + num2 = " << result << std::endl;
        return result;
    }

    double multiply()
    {
        double result = num1 * num2;
        std::cout << "num1 * num2 = " << result << std::endl;
        return result;
    }

    double subtract_1_2()
    {
        double result = num1 - num2;
        std::cout << "num1 - num2 = " << result << std::endl;
        return result;
    }

    double subtract_2_1()
    {
        double result = num2 - num1;
        std::cout << "num2 - num1 = " << result << std::endl;
        return result;
    }
    double divide_1_2()
    {

        double result = num1 / num2;
        std::cout << "num1 / num2 = " << result << std::endl;
        return result;

    }

    const double GetNum1() const {

        return num1;

    }

    const double GetNum2() const {

        return num2;

    }


    double divide_2_1()
    {

        double result = num2 / num1;
        std::cout << "num2 / num1 = " << result << std::endl;
        return result;

    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1;
    double num2;

    Calculator my;
    while (true) {

        do {
            std::cout << "Enter num1: ";
            std::cin >> num1;
        } while (!my.SetNum1(num1));

        do {
            std::cout << "Enter num2: ";
            std::cin >> num2;
        } while (!my.SetNum2(num2));


        my.add();
        my.multiply();
        my.subtract_1_2();
        my.subtract_2_1();
        my.divide_1_2();
        my.divide_2_1();
    }
}