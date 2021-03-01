#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Task A 
TEST_CASE("Fact base cases"){
    CHECK(isDivisibleBy(8,3) == 0);
    CHECK(isDivisibleBy(-1,1) == 1);
    CHECK(isDivisibleBy(0,2) == 1);
    CHECK(isDivisibleBy(0,0) == 0);
    CHECK(isDivisibleBy(20,0) == 0);
    
}
TEST_CASE("Fact small numbers"){
    CHECK(isDivisibleBy(2,1) == 1);
    CHECK(isDivisibleBy(4,2) == 1);
    CHECK(isDivisibleBy(3,2) == 0);
}
TEST_CASE("Fact large numbers"){
    CHECK(isDivisibleBy(1000,7) == 0);
    CHECK(isDivisibleBy(6563,3) == 0);
    CHECK(isDivisibleBy(144,12) == 1);
}

//Task B
TEST_CASE("Fact base cases"){
    CHECK(isPrime(2) == 1);
    CHECK(isPrime(-10) == 0);
    CHECK(isPrime(1) == 0);
    CHECK(isPrime(5) == 1);

}
TEST_CASE("Fact small numbers"){
    CHECK(isPrime(6) == 0);
    CHECK(isPrime(7) == 1);
    CHECK(isPrime(3) == 1);
}
TEST_CASE("Fact large numbers"){
    CHECK(isPrime(1000) == 0);
    CHECK(isPrime(3833) == 1);
    CHECK(isPrime(4919) == 1);
}

//Task D
TEST_CASE("Fact base cases"){
    CHECK(countPrimes(6,29) == 7);
    CHECK(countPrimes(1,10) == 4);
    CHECK(countPrimes(70,110) == 10);
    CHECK(countPrimes(8,10) == 0);

}

//Task E
TEST_CASE("Fact base cases"){
    CHECK(isTwinPrime(3) == 1);
    CHECK(isTwinPrime(5) == 1);
    CHECK(isTwinPrime(7) == 1);
    CHECK(isTwinPrime(11) == 1);
    CHECK(isTwinPrime(13) == 1);
    CHECK(isTwinPrime(25) == 0);
    CHECK(isTwinPrime(-1) == 0);

}

//Task F

TEST_CASE("Fact base cases"){
    CHECK(nextTwinPrime(11) == 13);
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(19) == 29);
}

//Task G

TEST_CASE("Fact base cases"){
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
}