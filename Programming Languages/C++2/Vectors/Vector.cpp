/* Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
 with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that
 they can be accessed and traversed using iterators.*/

 #include <vector>
 #include <iostream>
 using namespace std;

 int main(){
   vector <int> v;
   v.push_back(10); // Inserting elements into vector
   v.push_back(20);
   v.push_back(30);

   // Short Method to print Vectors ( for each loop )
   for(auto x : v){
     cout << x << " ";
   }

   // Basic Method
   // for(int i =0; i < v.size();i++){
   //   cout << v[i] << " ";  //Printing vector is as similar as printing arrays
   // }
   return 0;

 }
