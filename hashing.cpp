#include "hashing.hpp"

int hash_string(string s, int m) {
    // implement hashing function here

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += (int)s[i];
    }
    
    return sum % m;
}
