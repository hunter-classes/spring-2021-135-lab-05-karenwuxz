#include <iostream>


#include "funcs.h"

int main(){
  //Task A
  std::cout << "Testing if 100 is divisable by 25: " << isDivisibleBy(100,25) << std::endl;
  std::cout << "Testing if -90 is divisable by 5: " << isDivisibleBy(-90,5) << std::endl;
  std::cout << "Testing if 0 is divisable by 0: " << isDivisibleBy(0,0) << std::endl;
  std::cout << "Testing if 10 is divisable by 0: " << isDivisibleBy(10,0) << std::endl;

  // Task B
  std::cout << "Is 10 prime: " << isPrime(10)<< std::endl;
  std::cout << "Is 2 prime: " << isPrime(2) << std::endl;
  std::cout << "Is 0 prime: " << isPrime(0) << std::endl;
  std::cout << "Is -14 prime: " << isPrime(-14) << std::endl;

  // Task C
  std::cout << "Next prime number after 8: " << nextPrime(8) << std::endl;
  std::cout << "Next prime number after 1113106: " << nextPrime(1113106) << std::endl;

  //Task D
  std::cout << "amount of prime number 1-12: " << countPrimes(1,12) << std::endl;
  std::cout << "amount of prime number 24-50: " << countPrimes(24,50) << std::endl;
  std::cout << "amount of prime number 100-200: " << countPrimes(100,200) << std::endl;
  std::cout << "amount of prime number 0-5: " << countPrimes(0,5) << std::endl;

  //Task E
  std::cout << "Is 11 a twin Prime: " << isTwinPrime(11) << std::endl;
  std::cout << "Is 1 a twin Prime: " << isTwinPrime(1) << std::endl;
  std::cout << "Is 17207 a twin Prime: " << isTwinPrime(17207) << std::endl;

  //Task F
  std::cout << "The next twin prime after 101 is " << nextTwinPrime(101) << std::endl;
  std::cout << "The next twin prime after 2 is " << nextTwinPrime(2) << std::endl;
  std::cout << "The next twin prime after 10 is " << nextTwinPrime(10) << std::endl;

  //Task G
  std::cout << "The largest twin prime from 1-10 " <<largestTwinPrime(1,10) <<std::endl;
  std::cout << "The largest twin prime from 24-50 " <<largestTwinPrime(24,50) <<std::endl;
  std::cout << "The largest twin prime from 100-200 " <<largestTwinPrime(100,200) <<std::endl;
  return 0;
}
