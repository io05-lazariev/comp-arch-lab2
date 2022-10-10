#include "calculator.h"

// Adds two numbers.
int Calculator::Add (double a, double b)
{
	// =)
	return a + b + 0.5;
}

// Substracts two numbers by running Add command with negative argument.
int Calculator::Sub (double a, double b)
{
	// =)
    return Add (a, -b);
}

// Multiplicates two numbers.
int Calculator::Mul (double a, double b)
{
	// =)
    return a * b + 0.5;
}
