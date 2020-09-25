#include <iostream>
#include "MathOperations.h"

using namespace std;
int main()
{
	int A = 10;
	int B = 5;

	cout << "Sum of A and B : " << Sum(A, B) << endl;
	int Result = Sum(A, B);
	Result += Subtraction(A, B);
	cout << "Result : " << Result << endl;

	cout << "Sub of A and B : " << Subtraction(A, B) << endl;
	cout << "Multiply of A and B : " << Multiply(A, B) << endl;
	cout << "Division of A and B : " << Divide(A, B) << endl;

	return 0;
}