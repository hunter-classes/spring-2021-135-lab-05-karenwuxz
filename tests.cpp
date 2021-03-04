#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Task A 
TEST_CASE("isDivisbleby function"){
    CHECK(isDivisibleBy(8,3) == 0);
    CHECK(isDivisibleBy(-1,1) == 1);
    CHECK(isDivisibleBy(0,2) == 1);
    CHECK(isDivisibleBy(0,0) == 0);
    CHECK(isDivisibleBy(20,0) == 0);
    
}

//Task B
TEST_CASE("isPrime function"){
    CHECK(isPrime(2) == 1);
    CHECK(isPrime(-10) == 0);
    CHECK(isPrime(1) == 0);
    CHECK(isPrime(4919) == 1);

}
//Task C

TEST_CASE("nextPrime function"){
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(4919) == 4931);
    CHECK(nextPrime(-2) == 2);
}

//Task D
TEST_CASE("countPrimes function"){
    CHECK(countPrimes(6,29) == 7);
    CHECK(countPrimes(1,10) == 4);
    CHECK(countPrimes(70,110) == 10);
    CHECK(countPrimes(8,10) == 0);

}

//Task E
TEST_CASE("isTwinPrime function"){
    CHECK(isTwinPrime(3) == 1);
    CHECK(isTwinPrime(17207) == 1);
    CHECK(isTwinPrime(25) == 0);
    CHECK(isTwinPrime(-1) == 0);

}

//Task F

TEST_CASE("nextTwinPrime function"){
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(17207) == 17209);
    CHECK(nextTwinPrime(25) == 29); 
}

//Task G

TEST_CASE("largestTwinPrime function"){
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
}