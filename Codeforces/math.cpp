#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>

using namespace std;

int main() {
    string sum,str1 = "",temp = "";

    getline(cin,sum);

    sum.erase(remove(sum.begin(),sum.end(),'+'),sum.end());
    sort(sum.begin(), sum.end());

    int i, len = sum.length();
    for(i=0;i<len;i++) {
        if(i != len-1){
            str1 = str1 + sum[i] + "+";
        } else {
            str1 = str1 + sum[i];
        }
    } 

    cout << str1;
    return 0;
}