#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotatearr(vector<int>& num,int k){
   int n =num.size();
   k = k%n;

   //rev whole arr
   reverse(num.begin(),num.end());

   //rev till k
   reverse(num.begin(),num.begin()+k);

   //rev rest of ele except k
   reverse(num.begin()+k,num.end());
}

//hence k=2 so rotate 2 times in right side ie Clock wise direction
//rotation -1  [5,1,2,3,4]
//rotation -2  [4,5,1,2,3]


int main(){
   vector<int> arr = {1,2,3,4,5};
   int k=2;
   rotatearr(arr,k);

   for(auto el : arr){
    cout<<el<<" ";
   }

   return 0;
}
   