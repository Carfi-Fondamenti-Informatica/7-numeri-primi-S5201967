#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int a=0, b=2;
    cin>>a;
    bool ris=numeriprimi(a,b);
    if(ris){
        cout<<"Numero primo"<<endl;
    } else {
        cout<<"Numero non primo"<<endl;
    }
    return 0;
}



