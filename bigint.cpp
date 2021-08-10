/* Cory Mott
* bigint_project_1
* CS23001
*/

#include<fstream>
#include<ostream>
#include "bigint.hpp"

//Constructors

//bigint = 0
bigint::bigint()
{
	for (int i = 0; i < CAPACITY; i++)
	{
		value[i] = 0;
	}
}

//bigint = int
bigint::bigint(int number)
{
	//Gets total digits in the int
	int tempNum = number;
	int digitTotal = 0;

	while (tempNum != 0)
	{
		tempNum = tempNum / 10;
		digitTotal++;
	}

	//assigns int to bigint array
	int divisor;

	for (int i = 0; i < CAPACITY; i++)
	{
		if (digitTotal != 0)
		{
			divisor = 1;

			for (int j = digitTotal - 1; j > 0; j--)
			{
				divisor *= 10;
			}
			value[--digitTotal] = number / divisor;
			number = number % divisor;
		}
		//trailing zeros
		else { value[i] = 0; }
	}
}

//bigint = char
bigint::bigint(const char myChar[])
{
	//gets total chars in char
	int size = 0;

	for (int i = 1; myChar[i] != '\0'; i++)
	{
		size++;
	}
	// puts mychar into bigint
	for (int i = 0; i < CAPACITY; i++)
	{
		if (i <= size)
		{
			value[i] = myChar[size - 1] - '0';
		}
		else { value[i] = 0; }
	}
}

//Debugging Member Function
void bigint::debugPrint(std::ostream& out) const {
	for (int i = 0; i < CAPACITY; i++) {
		if (i < CAPACITY) {
			out << value[i] << '|';
		}
		else { break; }
	}
}

//Overloads for operators

//Compare too bigints to see if they are the same
bool operator==(const bigint& LHS, const bigint& RHS)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		if (LHS.value[i] == RHS.value[i])
		{
			return true;
		}
		else { return false; }
	}
	return 0;
}

//Use << to output bigint
std::ostream& operator<<(std::ostream& out, bigint& bi)
{
	bool started = false;
	int digits = 0;

	for (int i = CAPACITY - 1; i >= 0; i--)
	{
		if (bi.value[i] != 0)
		{
			started = true;
		}

		if (started == true)
		{
			if (digits < CAPACITY)
			{
				out << bi.value[i];
				digits++;
			}
		}
	}

	if (started == false)
	{
		out << 0;
	}

	return out;
}

//Use >> to read an input for bigint
std::istream& operator>>(std::istream& in, bigint& bi)
{
	int size = 0;
	int whiteSpace = 0;
	char temp;

	in.get(temp);
	
	while (!in.eof() && temp != ';')
	{
		if (temp == ' ' || temp == '\n' || temp == '\t') whiteSpace++;
		else size++;
		in.get(temp);
	}

	for (int i = 0; i < size + whiteSpace + 1; i++)
	{
		in.unget();
	}

	char number[CAPACITY];

	for (int i = size - 1; i >= 0; i--)
	{
		in >> number[i];
	}

	for (int i = 0; i < CAPACITY; i++)
	{
		if (i < size)
		{
			bi.value[i] = number[i] - '0';
		}
		else { bi.value[i] = 0; }

	}

	in >> temp;
	
	return in;
}

//Uses + to add two bigints
bigint bigint::operator+ (const bigint & rhs) const
{
	bigint result;
	int carry = 0;

	for (int i = 0; i < CAPACITY; i++)
	{
		result.value[i] = value[i] + rhs.value[i] + carry;

		if (result.value[i] > 9)
		{
			carry = 1;
		}
		else { carry = 0; }
		result.value[i] %= 10;
	}
	return result;
}

//Uses [] to return the i-th digit.
int bigint::operator[](int i) const
{
	return value[i];
}

//Multiplies bigint by a single digit
bigint bigint::timesDigit(int digit) const
{
	bigint result;
	int carry = 0;

	for (int i = 0; i < CAPACITY; i++)
	{
		result.value[i] = (value[i] * digit) + carry;
		
		if (result.value[i] > 9)
		{
			carry = result.value[i] / 10;
		}
		else { carry = 0; }

		result.value[i] %= 10;
	}
	return result;
}

//Shift base 10 using 10^n
bigint bigint::times10(int power) const
{
	bigint result;

	if (power == 0) return *this;
	
	for (int i = CAPACITY - 1; i > 0; i--)
	{
		result.value[i] = value[i - 1];
	}
	--power;

	while (power > 0)
	{
		for (int i = CAPACITY - 1; i > 0; i--)
		{
			result.value[i] = result.value[i - 1];
		}

		--power;
	}

	return result;
}

//Multiply two big ints
bigint bigint::operator*(const bigint& rhs) const
{
	bigint product;
	bigint temp;

	for (int i = 0; i < CAPACITY; i++)
	{
		//product = product + ( (A * B[i]) * 10^i ) 
		temp = timesDigit(rhs.value[i]);
		product = product + temp.times10(i);
	}

	return product;
}