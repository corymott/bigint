/* Cory Mott
* bigint_project_1
* CS23001
*/

/*Create a main body (name the file multiply.cpp) that reads from the file data1-2.txt and does the following:
-Test for success of opening the file in your program.
-Read in two numbers into bigints and write both out separated by a blank line.
-Multiply these together and write the result.
-Then read in two more big numbers, multiplying them and writing the result until end of file.
-All output must be labeled and neat.
-The command make multiply will build and run this program.
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include "bigint.hpp"

int main()
{
	std::ifstream in("data1-2.txt");

	if (!in)
	{
		std::cerr << "Could not open data1-2.txt, exiting program." << std::endl;
		exit(1);
	}

	std::cout << "Opens data1-2.txt and multiplies all bigints until the end of the file." << std::endl;

	bigint lhs, rhs, result;

	while (!in.eof() && in >> lhs)
	{
		if (!in.eof()) in >> rhs;

		std::cout << "LHS = " << lhs << std::endl;
		std::cout << "RHS = " << rhs << std::endl;

		result = lhs * rhs;

		std::cout << "Result = " << result << std::endl;
	}

	in.close();
	
	return 0;
}