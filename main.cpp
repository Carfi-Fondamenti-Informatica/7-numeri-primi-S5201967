#include <iostream>
#include "lib.h"
using namespace std;
bool numeriprimi(int i, int n){
    if(n%i==0)  {
        return false;
    }
    if((i+1) ==  n) {
        return true;
    }
    return  numeriprimi(i+1,n);
}

int main(){
    int num;
    bool val;
    cout<<"inserisci numero intero: ";cin>>num;
    val=numeriprimi(2,num);
    if(val) {
        cout<<"Numero primo"<<endl;
    } else {
        cout<<"Numero non primo"<<endl;
    }
    return 0;
}



