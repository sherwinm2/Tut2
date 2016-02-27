#include <iostream>

using namespace std;

class Fraction
{
public:
	double setadd(int num2, int den2);
	double setsubtract(int num2, int den2);
	double setmultiply(int num2, int den2);
	double setdivide(int num2, int den2);
	void getprint(int num2, int den2);
	Fraction(int num1, int den1); //Paramaterized constructor declaration
	~Fraction();//Deconstructor declaration

private:
	double addition, sub, mul, div;
	double numerator1;
	double denominator1;
};

// Member functions definitions including constructor and destructor
Fraction::Fraction(int num1, int den1)
{
	numerator1 = num1;
	denominator1 = den1;
}

Fraction::~Fraction(void)
{
	cout << "Fraction 1 is being cleared" << endl;
}

double Fraction::setadd(int num2, int den2)
{
	addition = (numerator1*den2 + num2*denominator1) / (denominator1*den2);
	return addition;
}

double Fraction::setsubtract(int num2, int den2)
{
	sub = (numerator1*den2 - num2*denominator1) / (denominator1*den2);
	return sub;
}

double Fraction::setmultiply(int num2, int den2)
{
	mul = (numerator1*num2) / (denominator1*den2);
	return mul;
}

double Fraction::setdivide(int num2, int den2)
{
	div = (numerator1*den2) / (denominator1*num2);
	return div;
}

void Fraction::getprint(int num2, int den2)
{
	cout << "Result of additon: " << setadd(num2, den2) << endl;
	cout << "Result of subtraction: " << setsubtract(num2, den2) << endl;
	cout << "Result of multiplication: " << setmultiply(num2, den2) << endl;
	cout << "Result of division: " << setdivide(num2, den2) << endl;
}


int main()
{
	double num1, den1, num2, den2;

	cout << "enter the value for the numerator of the first fraction: ";
	cin >> num1;
	cout << "enter the value of he denominator of the first fraction: ";
	cin >> den1;
	cout << "enter the value for the numerator of the second fraction: ";
	cin >> num2;
	cout << "enter the value of he denominator of the second fraction: ";
	cin >> den2;

	// condition to avoid dividing by 0
	if (den1 == 0)
	{
		cout << "please enter a value not equal to 0 for denominator 1: ";
		cin >> den1;
	}

	if (den2 == 0)
	{
		cout << "please enter a value not equal to 0 for denominator 2: ";
		cin >> den2;
	}

	cout.precision(4); // sets how many decimal points to include in cout
	cout << "Fraction 1 = " << fixed << (num1 / den1) << endl;
	cout << "fraction 2 = " << fixed << (num2 / den2) << endl;

	Fraction fraction(num1, den1);

	fraction.getprint(num2, den2);

	return 0;
}