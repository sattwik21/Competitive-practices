#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string word;

    getline(cin,word);
    word[0] = toupper(word[0]);

    cout << word;
    
    return 0;
}