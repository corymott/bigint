/* Cory Mott
* test_times10.cpp
* CS23001 - Summer 2021
*/

#include<iostream>
#include<cassert>
#include "bigint.hpp"

int main()
{
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(5);

        // Test
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);

        std::cout << "5 * 10^0 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(300);

        // Test
        bi = bi.times10(1);

        // Verify
        assert(bi == 3000);

        std::cout << "300 * 10^1 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(10000);

        // Test
        bi = bi.times10(2);

        // Verify
        assert(bi == 1000000);

        std::cout << "10000 * 10^2 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("100155");

        // Test
        bi = bi.times10(3);

        // Verify
        assert(bi == "100155000");

        std::cout << "100155 * 10^3 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("2344564212");

        // Test
        bi = bi.times10(0);

        // Verify
        assert(bi == "2344564212");

        std::cout << "2344564212 * 10^0 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1234567890");

        // Test
        bi = bi.times10(2);

        // Verify
        assert(bi == "123456789000");

        std::cout << "1234567890 * 10^2 = " << bi << std::endl << std::endl;
    }

    std::cout << "Done testing times_10" << std::endl;
}