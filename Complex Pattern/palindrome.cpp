#include<iostream>
using namespace std;

bool palindrome(int val){
   int temp=val;
   int Nval=0;

    while(temp>0){
    int ldig = temp%10;
    Nval = Nval*10+ldig;
    temp/=10;
   }

   if(val == Nval){
    return true;
   }
   return false;
    
}

int main(){
    int n=121;
    if(palindrome(n)){
        cout<<"Hence It's plaindrome";
    } else {
        cout<<"Not a palindrome";
    }
    return 0;
}