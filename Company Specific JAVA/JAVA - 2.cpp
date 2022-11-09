#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;
int find(int n){
    int i=1;
    while(n > 0){
        n -= i;
        i++;
    }
    if(n == 0)
        return 1;
    else
        return 0;
}


int main() {
    
    int n;
    cin>>n;
    
    if(find(n))
        cout << "Yes";
    else
        cout << "No";
    
}