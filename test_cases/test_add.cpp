/* Cory Mott
* test_add.cpp
* CS23001 - Summer 2021
*/

#include<iostream>
#include<cassert>
#include "bigint.hpp"

int main()
{
    //------------------------------------------------------
     // Setup fixture 
    bigint left(0);
    bigint right(0);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 0);
    assert(right == 0);
    assert(result == 0);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;
}

{
    //------------------------------------------------------
    // Setup fixture 
    bigint left(1);
    bigint right(0);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 1);
    assert(right == 0);
    assert(result == 1);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //------------------------------------------------------
    // Setup fixture 
    bigint left(1);
    bigint right(1);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 1);
    assert(right == 1);
    assert(result == 2);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //-------------------------------------------------------
    // Setup fixture 
    bigint left(123);
    bigint right(56);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 123);
    assert(right == 56);
    assert(result == 179);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //-------------------------------------------------------
    // Setup fixture 
    bigint left(65);
    bigint right(321);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 65);
    assert(right == 321);
    assert(result == 386);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //--------------------------------------------------------
    // Setup fixture 
    bigint left(1000);
    bigint right(5);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 1000);
    assert(right == 5);
    assert(result == 10005);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //--------------------------------------------------------
    // Setup fixture 
    bigint left(5);
    bigint right(100000);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 5);
    assert(right == 100000);
    assert(result == 100005);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //--------------------------------------------------------
    // Setup fixture 
    bigint left(100);
    bigint right(100);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == 100);
    assert(right == 100);
    assert(result == 200);

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //--------------------------------------------------------
    // Setup fixture 
    bigint left("1");
    bigint right("77777777777777777");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == "1");
    assert(right == "77777777777777777");
    assert(result == "77777777777777778");

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //---------------------------------------------------------
    // Setup fixture 
    bigint left("777777777777777777777777777777777777777777777");
    bigint right("333333");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == "777777777777777777777777777777777777777777777");
    assert(right == "333333");
    assert(result == "777777777777777777777777777777777777778111110");

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //-----------------------------------------------------------
    // Setup fixture 
    bigint left("111111111111111111111111111111111111111111");
    bigint right("999999999999999999999999999999999999999999");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left == "111111111111111111111111111111111111111111");
    assert(right == "999999999999999999999999999999999999999999");
    assert(result == "1111111111111111111111111111111111111111110");

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //-----------------------------------------------------------
    // Setup fixture 
    int right = 83472;
    bigint left("12730193640");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(right == 83472);
    assert(left == "12730193640");
    assert(result == "12730277112");

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}
{
    //-----------------------------------------------------------
    // Setup fixture 
    int right = 29834719;
    bigint left("111111111111111111111111111111111111111111");
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(right == 29834719);
    assert(left == "111111111111111111111111111111111111111111");
    assert(result == "111111111111111111111111111111111140945830");

    std::cout << "left: " << left << std::endl
        << "right: " << right << std::endl
        << "result: " << result << std::endl << std::endl;

}

std::cout << "Done with testing addition." << std::endl;
}
