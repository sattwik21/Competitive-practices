#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string uname;

    int count = 0,i,j = 0,dist = 0;
    int temp = 97;
    
    getline(cin,uname);
    
    int len = uname.length();

    while(temp < 123){
        count = 0;
        for(i=0;i<len;i++) {
            if(uname[i] == char(temp)) {
                count = count + 1;
            }
        }   
        if(count >= 1) {
            dist = dist + 1;
        }
        temp++;
    }
    

    if(dist % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}