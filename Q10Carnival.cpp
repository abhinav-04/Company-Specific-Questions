#include <iostream>
#include <vector>

using namespace std;

bool check(vector<string> str){
    for(int i = 0;i < str.size() - 1;i++){
        if(str[i]=="cookie" && str[i+1] != "juice"){
            return false;
        }
    }
    return true;
}

int main(){
    vector <string> str = {"cookie","juice","juice","cookie","juice","cookie","juice"};

    if(check(str)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    cout<<endl;
    return 0;
}