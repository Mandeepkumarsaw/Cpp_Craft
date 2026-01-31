#include<iostream>
using namespace std;

bool perfectsquare(int val){
    
    for(int i=2;i*i<=val;i++){
        if(i*i == val){
          return true;
        }
    }
    return false;
}

int main(){
    int n = 4;
    if(perfectsquare(n)){
        cout<<"Perfect Square";
    } else {
        cout<<"Not a Perfect square";
    }

    return 0;
}