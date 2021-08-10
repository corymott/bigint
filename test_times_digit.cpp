/* Cory Mott
* test_times_digit.cpp
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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 5);

        std::cout << "5 * 1 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(16);

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 32);

        std::cout << "16 * 2 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1738);

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 8690);

        std::cout << "1738 * 5 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(4002889);

        // Test
        bi = bi.timesDigit(4);

        // Verify
        assert(bi == 16011556);

        std::cout << "4002889 * 4 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123456789);

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 1111111101);

        std::cout << "123456789 * 9 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("7777777777");

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == "38888888885");

        std::cout << "7777777777 * 5 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1234567890123456789");

        // Test
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == "3703703670370370367");

        std::cout << "1234567890123456789 * 3 = " << bi << std::endl
            << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(92389);

        // Test
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);

        std::cout << "92389 * 0 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("987654321123456789");

        // Test
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "987654321123456789");

        std::cout << "987654321123456789 * 1 = " << bi << std::endl
            << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("99999999999999999999999999999999999999");

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "899999999999999999999999999999999999991");

        std::cout << "99999999999999999999999999999999999999 * 9 = "
            << std::endl << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi;

        // Test
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 0);

        std::cout << "0 * 2 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("918236548912834618236472364");

        // Test
        bi = bi.timesDigit(8);

        // Verify
        assert(bi == "7345892391302676945891778912");

        std::cout << "918236548912834618236472364 * 8 = " << std::endl
            << bi << std::endl << std::endl;
    }


    std::cout << "Done testing bigint * digit" << std::endl;
}