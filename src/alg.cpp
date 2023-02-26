#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i < value; i++){
        if ((value % i) == 0)
            return false;
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    uint64_t res = 0;
    uint64_t number = 0;
    for (uint64_t i = 2; number < n; i++)
        if (checkPrime(i)) {
            res = i;
            number++;
        }
    return res;
}
uint64_t nextPrime(uint64_t value) {
    uint64_t search = value + 1;
    while (checkPrime(search) == false) {
        search++;
    }
    return search;
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
