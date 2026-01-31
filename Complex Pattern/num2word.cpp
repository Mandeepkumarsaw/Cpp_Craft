#include<iostream>
#include<string>
using namespace std;

string oneToNineteen[] = {
//idx- 0   1     2       3      4       5     6      7       8       9     10    11        12        13        14           15        16      17            18        19     
      "","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"
};

string tens[] = {
//idx 0 10    20     30        40      50      60      70        80       90 
     "","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"
};

string num2Words(int n){                   //n=12124
    string res="";

    if(n>=1000){  // n=12124
        res += oneToNineteen[n/1000] + " thousand ";    //12124/1000=12   twelve thousand
        n %= 1000;  //  12124 % 1000 -- 124
    }
    if(n>=100){ // n=124
        res += oneToNineteen[n/100] + " hundred ";  //124/100=1           twelve thousand one hundred
        n %= 100;   //  124 % 100  -- 24
    }
    if(n>=20){  // n=24
        res += tens[n/10] + " ";      // 24/10=2            twelve thousand one hundred twenty
        n %= 10;  // 24%10   -- 4
    }
    if(n>0){ // n=4
        res += oneToNineteen[n] + " ";                     // twelve thousand one hundred twenty four
    }

    return res;
}

int main(){
    int n=19999;           //show upto---19999
    string ans = num2Words(n);
    cout<<ans;

    return 0;
}