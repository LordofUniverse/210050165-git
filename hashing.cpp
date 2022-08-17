#include "hashing.hpp"
#include <cmath>

int hash_string(string s, int m) {
    // implement hashing function here
    int p = 67; 

    int val = 1;

    long long int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        int character = s[i];
        int val = 1;
        for (int j = 0; j < i; j++) {
            val *= p;
            val %= m;
        }
        sum += (val * character%m) % m;        
    }
    
    return sum % m;

}
