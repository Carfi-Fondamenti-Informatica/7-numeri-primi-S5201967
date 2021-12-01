#include "lib.h"
bool numeriprimi(int i, int n) {
    int rest;
    if (n > 1) {
        if (i < n) {
            rest = n % i;
            if (rest != 0) {
                return numeriprimi(i + 1, n);
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
