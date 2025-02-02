#include <iostream>
using namespace std;

#include <vector>
using std::vector;


int main()
{

// 1. v.empty() -> returns true if v is empty , or false if v is not empty

    vector<int>Vec;
    cout<<Vec.empty()<<endl;  // 1 for true
    Vec = {1,2,3,4,5}; 
    cout<<Vec.empty()<<endl;  // 0 for false

 
// 2. v.size()->  returns number of elements in vector v

cout<<Vec.size()<<endl;

// 3.n[v] return a reference to the element at posision n in v

    cout<<"the third element in Vec: "<<Vec[2]<<endl;


// 4. v1 = v2 -> replaces the elements in v1 with a copy of elements of v2

    vector <int> Vec2;
    Vec2 = Vec;
    for(int i: Vec2)    
        cout<< i <<endl;

//5. v1 = {1,2,3...}  replaces with a copy of elements in sqare brackets

    Vec2 = {1,45,78,99};
    for(int i: Vec2)
        cout<< i <<endl;

// 6. v1 = v2 , they are equal if they have same number of elements

// we can use other relational operators on vectors

} 