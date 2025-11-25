// Test01.cpp : Simple interactive calculator application
// Replaces previous "Hello,Lab2!" example.

#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

static void clearInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble(const char* prompt)
{
    double value;
    while (true)
    {
        std::cout << prompt;
        if (std::cin >> value)
            return value;
        std::cout << "Invalid number. Please try again.\n";
        clearInput();
    }
}

long long getLongLong(const char* prompt)
{
    long long value;
    while (true)
    {
        std::cout << prompt;
        if (std::cin >> value)
            return value;
        std::cout << "Invalid integer. Please try again.\n";
        clearInput();
    }
}

unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main()
{
    std::cout << "Console Calculator\n";
    std::cout << "------------------\n";

    while (true)
    {
        std::cout << "\nSelect operation:\n"
            << " 1) Add\n"
            << " 2) Subtract\n"
            << " 3) Multiply\n"
            << " 4) Divide\n"
            << " 5) Power (x^y)\n"
            << " 6) Square root\n"
            << " 7) Factorial (n!)\n"
            << " 8) Modulo (a % b)\n"
            << " 9) Exit\n"
            << "Choice: ";

        int choice;
        if (!(std::cin >> choice))
        {
            std::cout << "Invalid choice. Try again.\n";
            clearInput();
            continue;
        }

        if (choice == 9)
        {
            std::cout << "Exiting.\n";
            break;
        }

        switch (choice)
        {
        case 1:
        {
            double a = getDouble("Enter first addend: ");
            double b = getDouble("Enter second addend: ");
            std::cout << "Result: " << (a + b) << '\n';
            break;
        }
        case 2:
        {
            double a = getDouble("Enter minuend: ");
            double b = getDouble("Enter subtrahend: ");
            std::cout << "Result: " << (a - b) << '\n';
            break;
        }
        case 3:
        {
            double a = getDouble("Enter first factor: ");
            double b = getDouble("Enter second factor: ");
            std::cout << "Result: " << (a * b) << '\n';
            break;
        }
        case 4:
        {
            double a = getDouble("Enter dividend: ");
            double b = getDouble("Enter divisor: ");
            if (b == 0.0)
                std::cout << "Error: Division by zero.\n";
            else
                std::cout << "Result: " << (a / b) << '\n';
            break;
        }
        case 5:
        {
            double x = getDouble("Enter base: ");
            double y = getDouble("Enter exponent: ");
            std::cout << "Result: " << std::pow(x, y) << '\n';
            break;
        }
        case 6:
        {
            double x = getDouble("Enter value: ");
            if (x < 0.0)
                std::cout << "Error: Square root of negative number is not supported here.\n";
            else
                std::cout << "Result: " << std::sqrt(x) << '\n';
            break;
        }
        case 7:
        {
            long long n = getLongLong("Enter non-negative integer: ");
            if (n < 0)
            {
                std::cout << "Error: negative integer not allowed.\n";
            }
            else if (n > 20) // factorial(21) overflows 64-bit
            {
                std::cout << "Warning: result may overflow 64-bit. Limiting to 20.\n";
                std::cout << "Result: " << factorial(20) << '\n';
            }
            else
            {
                std::cout << "Result: " << factorial(static_cast<unsigned int>(n)) << '\n';
            }
            break;
        }
        case 8:
        {
            long long a = getLongLong("Enter dividend (integer): ");
            long long b = getLongLong("Enter divisor (integer): ");
            if (b == 0)
                std::cout << "Error: Modulo by zero.\n";
            else
                std::cout << "Result: " << (a % b) << '\n';
            break;
        }
        default:
            std::cout << "Unknown option. Choose 1-9.\n";
            break;
        }
    }

    return 0;
}