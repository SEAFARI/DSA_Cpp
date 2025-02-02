#include <iostream>
using namespace std;

#include <vector>
using std::vector;



//  1. vector copying   -> vector <T>v2 (v1)     or   vector <T> v2 = v1
int main(){

vector<int>Vec;
Vec = {1,2,3};
vector<int> newVec(Vec);  // vectors must have the same type to get copied
vector<int> newVec1 = Vec;




// 2.  List initializing a vector  -> CURLY BRACES is used

    vector<string> colours {"red","green","blue"};   // vector<string> colours ("red","green","blue");  -> error , no curly braces


// 3.  Creating specified number of elements  -> (number of times, value)


    vector<int> vec3(5,-2); // -> -2 stored 5 times

    vector<string> vec2(6,"egg");  // egg is stored 6 times

    vector<int> vec4(12); // 0 is stored 12 times


    vector<int> vec6(2,3);  // 3 is stored 2 times
    vector<int> vec_new1{2,3};  // 2 and 3 is stored in vec6

    vector<string> vec7{10};  //v7 has ten default elements bc we have given the type as string. "10" like would store it



// 4. Adding Elements to a vector

    /*when we have small elements, use vector initialization
    for large numbers: create empty vector 
                        add elements using push_back at runtime
                        
        push_back add the new element to the back of the vector. */

vector<int> new_vec;
for(int i=0;i<=100;i++)
    new_vec.push_back(i);
for(int i :new_vec)
    cout<<i<< endl;

    //adding string elements 

string word;
vector<string> mytext;

while(cin>>word)
    mytext.push_back(word);
for(string i:mytext)
    cout<<i<<endl;


}