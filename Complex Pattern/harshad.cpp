#include<iostream>
using namespace std;

void hershad(int num,int sum){
      if(num % sum == 0){
        cout<<"Harshad Num";
      } else {
       
      cout<<"Not a harshad num";
      }

    
}

int main(){
    int n=19;
    int temp = n;
    int sum=0;

    while(temp>0) {
        int last = temp%10;
        sum += last;
        temp /= 10;
    }

    hershad(n,sum);

    return 0;
}