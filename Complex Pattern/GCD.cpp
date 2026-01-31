#include<iostream>
using namespace std;

//Eucldiean Algorithm  -- try to make a||b == 0
int GCD(int a,int b){
    
    while(b!=0){    //a > b->step and reduces iterations,a<b ->step more but answer is same on both bcoz it swap auto
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a=18,b=48;         //a=48 b=12, ans=6
    int res = GCD(a,b);
    cout<<"Greatest Common Divisor of a,b: "<<res;

    return 0;
}