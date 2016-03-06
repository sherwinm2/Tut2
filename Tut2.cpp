#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{
public:
	void print();
	Fraction(); // default contructor
	//~Fraction();//Deconstructor declaration
	void setnum(double n1);
	void setdenom(double d1);
	
	double operator+(const Fraction& b)
	{
		Fraction fraction3;
		fraction3.addition = (this->numerator1*b.denominator1 + b.numerator1*this->denominator1) / (this->denominator1*b.denominator1);
		return fraction3.addition;
	}
	double operator-(const Fraction& b)
	{
		Fraction fraction3;
		fraction3.sub = (this->numerator1*b.denominator1 - b.numerator1*this->denominator1) / (this->denominator1*b.denominator1);
		return fraction3.sub;
	}
	double operator/(const Fraction& b)
	{
		Fraction fraction3;
		fraction3.div = (this->numerator1*b.denominator1) / (this->denominator1*b.numerator1);
		return fraction3.div;
	}
	double operator*(const Fraction& b)
	{
		Fraction fraction3;
		fraction3.mul = (this->numerator1*b.numerator1) / (this->denominator1*b.denominator1);
		return fraction3.mul;
	}
	
//private:
	double addition = 0.0;
	double sub = 0.0;
	double mul = 0.0;
	double div = 0.0;
	double numerator1;
	double denominator1;
	
};

// Member functions definitions including constructor and destructor
Fraction::Fraction()
{
	numerator1 = 1.0;
	denominator1 = 1.0;
}

/*Fraction::~Fraction(void)
{
	numerator1 = 0.0;
	cout << "Fraction is being cleared" << endl;
}*/

void Fraction::setnum(double n1)
{
	numerator1 = n1;
}

void Fraction::setdenom(double d1)
{
	denominator1 = d1;
}

void Fraction::print()
{
	cout << "Result of additon: " << addition << endl;
	cout << "Result of subtraction: " << sub << endl;
	cout << "Result of multiplication: " << mul << endl;
	cout << "Result of division: " << div << endl;
}

int main()
{
	int i;
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
	if (den1 == 0.0)
	{
		cout << "please enter a value not equal to 0 for denominator 1: ";
		cin >> den1;
	}

	if (den2 == 0.0)
	{
		cout << "please enter a value not equal to 0 for denominator 2: ";
		cin >> den2;
	}

	cout << "Fraction 1 = " << ((int)num1 / (int)den1) << " and " << ((int)num1%(int)den1) << "/" << den1 << endl;
	cout << "fraction 2 = " << ((int)num2 / (int)den2) << " and " << ((int)num2%(int)den2) << "/" << den2 << endl;

	Fraction fraction1;
	fraction1.setnum(num1);
	fraction1.setdenom(den1);
	Fraction fraction2;
	fraction2.setnum(num2);
	fraction2.setdenom(den2);
	Fraction fraction3;
	
	
	fraction3.div = fraction1/fraction2;
	fraction3.mul = fraction1*fraction2;
	fraction3.addition = fraction1+fraction2;
	fraction3.sub = fraction1-fraction2;
	fraction3.print();

	return 0;
}