#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void anagram(string &x, string &y) {
    int j,count = 0,len = x.length();

    if(x == y) {
        count = 0;
    } else {
        for(j=0;j<len;j++) {
            if(x[j] != y[j]) {
                count = count + 2;
            }
        }
    }

    cout << count;
}


int main() {
    string a,b;

    getline(cin,a);
    getline(cin,b);

    sort(a.begin(),b.end());
    sort(b.begin(),b.end());

    anagram(a,b);

    return 0;
}