#include <string>
using namespace std;

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational();
    Rational(int, int);
    int getNumberator() const;
    int getDenominator() const;
    Rational add(const Rational&) const;
    Rational subtract(const Rational&) const;
    Rational multiply(const Rational&) const;
    Rational divide(const Rational&) const;
    int compareTo(const Rational&);
    bool equals(const Rational&);
    int intValue() const;
    double doubleValue() const;
    string toString() const;

private:
    int numberator;
    int denominator;
    static int gcd(int n, int d);
};

#endif