#include <iostream>
#include "lib.h"
using namespace std;
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



