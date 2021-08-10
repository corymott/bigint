/* Cory Mott
* bigint_project_1
* CS23001
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include "bigint.hpp"

int main()
{
	std::ifstream in("data.txt");

	if (!in)
	{
		std::cerr << "Could not open data.txt. Terminating program." << std::endl;
		exit(1);
	}

	std::cout << "Gets two bigins from a file and adds them. Ends at the end of the file." << std::endl;

	bigint lhs, rhs, result;

	while (!in.eof() && in >> lhs)
	{
		if (!in.eof()) in >> rhs;

		std::cout << "LHS = " << lhs << std::endl << "RHS = " << rhs << std::endl;

		result = lhs + rhs;

		std::cout << "Result = " << result << std::endl;
	}

	in.close();

	return 0;
}
