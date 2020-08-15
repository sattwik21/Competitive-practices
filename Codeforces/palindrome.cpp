#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cctype>

using namespace std;

int main() {
    string input,temp = "",mod = "";
    int i;
    getline(cin,input);

    int len = input.length();

    for(i=0;i<len;i++) {
        if(isalnum(input[i])) {
            mod = mod + input[i];
        }
    }

    for(i=len-1;i>=0;i--) {
        temp = temp + mod[i];
    }

    if(tolower(temp) == tolower(mod)) {
        cout << "true";
    } else {
        cout << "false";
    }

    
    return 0;
}