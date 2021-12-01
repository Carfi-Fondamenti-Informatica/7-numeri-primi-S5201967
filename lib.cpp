#include "lib.h"
bool numeriprimi(int n, int i) {
    int rest;
    if (n > 1) {
        if (i < n) {
            rest = n % i;
            if (rest != 0) {
                return numeriprimi(n, i+1);
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else if (n == 2) {
        return true;
    } else {
        return false;
    }
}
