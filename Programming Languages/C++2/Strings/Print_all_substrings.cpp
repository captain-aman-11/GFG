//Print all the stubstrings of a given String

#include <iostream>
using namespace std;

int main(){
string str = "abcde";

for(int i =0; i < str.length() ; i++){

  for(int j= i + 1; j <= str.length(); j++)
    cout << str.substr(i,j) << endl;

}

    return 0;
}
