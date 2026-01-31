#include<iostream>
using namespace std;

bool autoMorphic(int val,int square){

   while(val>0) {
      if(val%10 != square%10){
        return false;
    } 
    val =val/10;
    square=square/10;
    }
    return true; 
    
}

int main(){
    int n =76;
    if(autoMorphic(n,n*n)){
        cout<<"Automorphic Num";
    } else {
        cout<<"Not a Automorphic Num";
    }

     return 0;
}