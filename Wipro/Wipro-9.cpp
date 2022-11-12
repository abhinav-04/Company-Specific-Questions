#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    
    int n, arr[1000], noToSearch, count = 0;
    cin>>n;
    
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    
    cin>>noToSearch;
    
    for(int i=0; i < n; i++){
        if(arr[i] == noToSearch)
            count++;
    }
    cout << "Number of Appereances of "<< noToSearch << " are : " << count;
}
