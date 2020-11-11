#include <iostream>
using namespace std;

int main(){

    //Common functions in strings

    string s = "geeksforgeeks";

    cout << s.find("geeks") << endl; //Returns the first occurence
    cout << s.find("for") << endl;
    cout << s.substr(1,5) << endl; // substr( Begin Index, Length); 
    
}