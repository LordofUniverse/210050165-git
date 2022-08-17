#include "hashing.hpp"

int hash_string(string s) {
    // implement hashing function here
    int prime = 67; 

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += (int)s[i];
    }
    
    return sum % prime;

}
