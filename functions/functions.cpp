#include <iostream>

using namespace std;

int Solver(int x, char sym, int y);

template<typename T>
T SumNumbers(T x, T y);
template<typename T>
T MinNumbers(T x, T y);
template<typename T>
T MultiNumbers(T x, T y);
template<typename T>
T DevideNumbers(T x, T y);

int Solver(int x, char sym, int y) {
    if (sym == '+') {
        x = SumNumbers(x, y);
    }
    else if (sym == '-') {
        x = MinNumbers(x, y);

    }
    else if (sym == '*') {
        x = MultiNumbers(x, y);

    }
    else if (sym == '/') {
        x = DevideNumbers(x, y);
    }

    return x;
}

template<typename T>
T SumNumbers(T x, T y) {
    x += y;
    return x;
}

template<typename T>
T MinNumbers(T x, T y) {
    x -= y;
    return x;
}

template<typename T>
T MultiNumbers(T x, T y) {
    x *= y;
    return x;
}

template<typename T>
T DevideNumbers(T x, T y) {
    x /= y;
    return x;
}


int main()
{
    int number1;
    int number2;
    int answer;
    char symbol;
    cout << "Enter first operand: ";
    cin >> number1;
    cout << "Enter operator: ";
    cin >> symbol;
    cout << "Enter second operand: ";
    cin >> number2;
    answer = Solver(number1, symbol, number2);
    cout << number1 << symbol << number2 << "=" << answer;
}