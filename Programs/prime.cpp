#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> generateNPrimes(int count) {
    std::vector<int> primes;
    int num = 2;  // Starting from the first prime number

    while (primes.size() < count) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        ++num;
    }

    return primes;
}

int main() {
    int count;
    std::cout << "Enter the number of prime numbers to generate: ";
    std::cin >> count;

    if (count < 1) {
        std::cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    std::vector<int> primeNumbers = generateNPrimes(count);

    std::cout << "First " << count << " prime numbers:\n";
    for (size_t i = 0; i < primeNumbers.size(); ++i) {
        std::cout << primeNumbers[i] << " ";
    }

    return 0;
}
