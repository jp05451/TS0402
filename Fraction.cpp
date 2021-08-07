#include "Fraction.h"

void Fraction::setNumerator(int nu)
{
				numerator = nu;
}

void Fraction::setDenominator(int de)
{
				denominator = de;
}

void Fraction::getDouble()
{
				double test = double(numerator) / denominator;
				if (int(test) == test)
								cout << numerator / denominator << endl;
				else
								cout<<fixed<<setprecision(6) << double(numerator) / denominator<< endl;
}

void Fraction::outputReducedFraction()
{
				int i=2;
				while (i <= numerator || i <= denominator)
				{
								if (numerator % i == 0 && denominator % i == 0)
								{
												numerator /= i;
												denominator /= i;
								}
								else
												i++;
				}
				if (denominator == 1)
								cout << numerator << endl;
				else if (numerator == 0)
								cout << 0 << endl;
				else
								cout << numerator << "/" << denominator<<endl;
}



