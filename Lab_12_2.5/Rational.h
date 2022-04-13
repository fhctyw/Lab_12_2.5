// Rational.h
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

class Rational
{
private:
	Pair pair;
public:
	Rational(Pair p = Pair(0, 0));
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	Pair getPair() const { return pair; };
	void setPair(Pair pair) { this->pair = pair; };

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	friend Rational operator+(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend Rational operator-(const Rational& r1, const Rational& r2);
};
