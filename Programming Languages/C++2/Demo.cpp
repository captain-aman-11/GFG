#include <iostream>
using namespace std;

string compressString1(string str){

    string s = str.at(0);

    for(int i =1; i < str.length(); i++){
        char curr = str.at(i);
        char prev = str.at(i-1);

        if(curr != prev){
            s += curr;
        }
    }
    return s;
}


int main(){
    string str;
    cin >> str;
    cout << compressString1(str) << endl;
    // cout << compressString2(str) << endl;
    return 0;
}
