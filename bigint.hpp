/* Cory Mott
* bigint_project_1
* CS23001
*/

#pragma once
#include<fstream>

const int CAPACITY = 400;
class bigint
{
private:
	int value[CAPACITY];
public:
	bigint();
	bigint(int);
	bigint(const char[]);

	friend std::ostream& operator<<(std::ostream&, bigint&);
	friend bool operator==(const bigint&, const bigint&);
	friend std::istream& operator>>(std::istream&, bigint&);
	bigint operator+(const bigint&) const;
	int operator[](int) const;
	bigint timesDigit(int) const;
	bigint times10(int) const;
	bigint operator*(const bigint&) const;

	void debugPrint(std::ostream&) const;
};