#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

void freqcount(vector<int> num){
    unordered_map<int,int> m;

    for(int i=0;i<num.size();i++){
        m[num[i]]++;
    }

    for(auto ch:m){
     cout<<ch.first<<" --> "<<ch.second<<"\n";
    }
}

int main(){
    int n = 12124;
    int temp = n;
    vector<int> arr;

    while(temp>0){
        int last = temp%10;
        arr.push_back(last);
        temp /= 10;
    }

    reverse(arr.begin(), arr.end());
    freqcount(arr);

    return 0;
}