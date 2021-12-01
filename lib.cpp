#include "lib.h"
bool numeriprimi(int i, int n){
    if(n%i==0)  {
        return false;
    }
    if((i+1) ==  n) {
        return true;
    }
    return  numeriprimi(i+1,n);
}


