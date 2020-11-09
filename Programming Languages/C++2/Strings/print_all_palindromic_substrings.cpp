//Print all Palindromic substrings

/*
Question
1. You are given a string.
2. You have to print all palindromic substrings of the given string.
*/

#include <iostream>
using namespace std;

boolean isPalindrome(string subString){
  int i = 0;
  int j = subString.length() - 1;

  char ch1 = subString.at(i);
  char ch2 = subString.at(j);

  if(ch1 != ch2)
    return false;
  else{
    i++;
    j--;
  }
  return true;
}

int main(){
  string str = "abcc";

//Getting all the substrings
for(int i=0; i < str.length(); i++){
    for(j = i + 1; j <= str.length(); j++){
      string subString = str.substr(i,j); // Here we are getting the sub strings
      if(isPalindrome(subString) == true)
        cout << subString << endl;
    }
}
  return 0;
}
