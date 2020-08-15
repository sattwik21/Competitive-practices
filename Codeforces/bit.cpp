#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int X = 0,i,n;
    string op[4] = {"X++","++X","X--","--X"};
    string res[151];

    cin >> n;
   for(i=0;i<n;i++) {
       cin >> res[i];
   }

   for(i=0;i<n;i++) {
       if(res[i] == op[0] || res[i] == op[1]) {
           X = X + 1;
       } else if(res[i] == op[2] || res[i] == op[3]){
           X = X - 1;
       } else {
           break;
       }
   }
    
    cout << X;
    return 0;
}