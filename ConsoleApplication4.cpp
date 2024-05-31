#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;

    cout << "Enter a number (a): ";
    cin >> a;

    if (a <= 500) {
        for (int i = a; i <= 500; ++i) {
            sum += i;
        }

        cout << "Sum of integers from " << a << " to 500: " << sum << endl;
    }
    else {
        cout << "Error: The entered number is greater than 500." << endl;
    }
    {
        int x, y;
        int result = 1;

        cout << "Enter two integers (x and y): ";
        cin >> x >> y;

        for (int i = 0; i < y; ++i) {
            result *= x;
        }

        cout << x << " v stepeny " << y << " is: " << result << endl;


    }
    {
        int sum = 0;
        int count = 0;

        for (int i = 1; i <= 1000; ++i) {
            sum += i;
            count++;
        }

        double average = static_cast<double>(sum) / count;

        cout << "Average of integers from 1 to 1000: " << average << endl;

    }
    {
        int a;
        long long product = 1;

        cout << "Enter an integer (1 <= a <= 20): ";
        cin >> a;

        if (a < 1 || a > 20) {
            cout << "Error: Entered value is out of range." << endl;
            return 1;
        }

        for (int i = a; i <= 20; ++i) {
            product *= i;
        }

        cout << "Product of integers from " << a << " to 20: " << product << endl;

    }
    {
        int k;

        cout << "Enter your variant number: ";
        cin >> k;

        cout << "Multiplication table for " << k << ":" << endl;
        for (int i = 1; i <= 10; ++i) {
            cout << k << " x " << i << " = " << k * i << endl;
        }

    }
    {
        int count = 0;

        for (int i = 100; i <= 999; ++i) {
            int hundreds = i / 100;
            int tens = (i / 10) % 10;
            int units = i % 10;

            if (hundreds != tens && hundreds != units && tens != units) {
                count++;
            }
        }

        cout << "Number of integers from 100 to 999 with all different digits: " << count << endl;

    }
    {
        int A;

        cout << "Enter an integer A: ";
        cin >> A;

        int sum = 0;
        int tempA = abs(A);

        while (tempA != 0) {
            sum += tempA % 10;
            tempA /= 10;
        }

        int sumCube = 0;
        int sumTemp = sum;


        while (sumTemp != 0) {
            sumCube += (sumTemp % 10) * (sumTemp % 10) * (sumTemp % 10);
            sumTemp /= 10;
        }

  
        if (sumCube == A * A) {
            cout << "The cube of the sum of the digits of A is equal to A*A." << endl;
        }
        else {
            cout << "The cube of the sum of the digits of A is not equal to A*A." << endl;
        }
    }



}