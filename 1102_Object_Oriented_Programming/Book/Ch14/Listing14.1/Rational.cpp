#include <sstream>
using namespace std;

#include "Rational.h"

Rational::Rational() : numberator(0), denominator(1) {}

Rational::Rational(int numberator, int denominator)
{
    int factor = gcd(numberator, denominator);
    this->numberator = ((denominator > 0) ? 1 : -1) * numberator / factor;
    this->denominator = denominator / factor;
}

int Rational::getNumberator() const
{
    return numberator;
}

int Rational::getDenominator() const
{
    return denominator;
}

int Rational::gcd(int n, int d)
{
    int n1 = abs(n);
    int n2 = abs(d);
    int gcd = 1;

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

Rational Rational::add(const Rational &secondRational) const
{
    int n = numberator * secondRational.getDenominator() +
            denominator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();

    return Rational(n, d);
}

Rational Rational::subtract(const Rational &secondRational) const
{
    int n = numberator * secondRational.getDenominator() -
            denominator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();

    return Rational(n, d);
}

Rational Rational::multiply(const Rational &secondRational) const
{
    int n = numberator * secondRational.getNumberator();
    int d = denominator * secondRational.getDenominator();

    return Rational(n, d);
}

Rational Rational::divide(const Rational &secondRational) const
{
    int n = numberator * secondRational.getDenominator();
    int d = denominator * secondRational.getNumberator();

    return Rational(n, d);
}

int Rational::compareTo(const Rational &secondRational)
{
    Rational temp = subtract(secondRational);

    if (temp.getNumberator() > 0)
    {
        return 1;
    }
    else if (temp.getNumberator() < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

bool Rational::equals(const Rational &secondRational)
{
    if (compareTo(secondRational) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Rational::intValue() const
{
    return numberator / denominator;
}

double Rational::doubleValue() const
{
    return 1.0 * numberator / denominator;
}

string Rational::toString() const
{
    stringstream ss1, ss2;
    ss1 << getNumberator();
    ss2 << getDenominator();

    if (denominator == 1)
    {
        return ss1.str();
    }
    else
    {
        return ss1.str() + "/" + ss2.str();
    }
}