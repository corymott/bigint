/* Cory Mott
* test_subscript.cpp
* CS23001 - Summer 2021
*/

#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main() {

    {
        // Setup
        bigint bi(1);

        // Test
        int digit0 = bi[0];

        // Verify
        assert(bi == 1);
        assert(digit0 == 1);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl << std::endl;
    }
    {
        // Setup
        bigint bi(15);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];

        // Verify
        assert(bi == 15);
        assert(digit0 == 5);
        assert(digit1 == 1);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl << std::endl;
    }
    {
        // Setup
        bigint bi(98);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];

        // Verify
        assert(bi == 98);
        assert(digit0 == 8);
        assert(digit1 == 9);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl << std::endl;
    }
    {
        // Setup
        bigint bi(306);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];

        // Verify
        assert(bi == 306);
        assert(digit0 == 6);
        assert(digit1 == 0);
        assert(digit2 == 3);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl
            << "digit2: " << digit2 << std::endl << std::endl;
    }

    {
        // Setup 5
        bigint bi(1687);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];
        int digit3 = bi[3];

        // Verify
        assert(bi == 1687);
        assert(digit0 == 7);
        assert(digit1 == 8);
        assert(digit2 == 6);
        assert(digit3 == 1);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl
            << "digit2: " << digit2 << std::endl
            << "digit3: " << digit3 << std::endl << std::endl;
    }
    {
        // Setup
        bigint bi(17381);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];
        int digit3 = bi[3];
        int digit4 = bi[4];

        // Verify
        assert(bi == 17381);
        assert(digit0 == 1);
        assert(digit1 == 8);
        assert(digit2 == 3);
        assert(digit3 == 7);
        assert(digit4 == 1);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl
            << "digit2: " << digit2 << std::endl
            << "digit3: " << digit3 << std::endl
            << "digit4: " << digit4 << std::endl << std::endl;
    }

    {
        // Setup
        bigint bi("1234567890");

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];
        int digit3 = bi[3];
        int digit4 = bi[4];
        int digit5 = bi[5];
        int digit6 = bi[6];
        int digit7 = bi[7];
        int digit8 = bi[8];
        int digit9 = bi[9];

        // Verify
        assert(bi == "1234567890");
        assert(digit0 == 0);
        assert(digit1 == 9);
        assert(digit2 == 8);
        assert(digit3 == 7);
        assert(digit4 == 6);
        assert(digit5 == 5);
        assert(digit6 == 4);
        assert(digit7 == 3);
        assert(digit8 == 2);
        assert(digit9 == 1);

        std::cout << "bi: " << bi << std::endl
            << "digit0: " << digit0 << std::endl
            << "digit1: " << digit1 << std::endl
            << "digit2: " << digit2 << std::endl
            << "digit3: " << digit3 << std::endl
            << "digit4: " << digit4 << std::endl
            << "digit5: " << digit5 << std::endl
            << "digit6: " << digit6 << std::endl
            << "digit7: " << digit7 << std::endl
            << "digit8: " << digit8 << std::endl
            << "digit9: " << digit9 << std::endl << std::endl;
    }

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

