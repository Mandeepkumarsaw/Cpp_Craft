#include<iostream>
#include<vector>
using namespace std;

void revdig(int n){
    int temp=n;
    int rev = 0;
    vector<int> arr;

    while(temp>0){
        int last = temp%10;
        rev = rev*10+last;
        arr.push_back(last);
        temp /= 10;
    }
     
    //print reverse num
     cout<<"Reversed Num: "<<rev<<endl;
    
    //print rev dig(incl 0)
    cout<<"Rveresed Dig: ";
    for(auto el : arr){
        cout<<el<<" ";
    }
}

int main(){
    int val = 2100;
    revdig(val);

    return 0;
}