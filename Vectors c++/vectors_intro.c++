/*
Vectors are sequence of container that contain variable size arrays

container = contain other objects
variable size arrays = collection of objects


vector is a class template -> from which specific type classes can be created
it is the guidelines for the compiler to create classes or functions

Instantiation -> describes the procedure the compiler employs to build classes or functions out of templates

*/

#include <vector>
using std::vector;

// use these header files 

// we specify the type of obj a vector will hold

vector<int> myVec;  // -> enclose the type in angle brackets after the template's name

// vector <Type> name;                                                   
/// Example prog:

#include <iostream>
using namespace std;

#include <vector>
using std::vector;

int main()
{
    vector<int> myVec;
    myVec = {1,2,3,4,5};
    for(int i:myVec)
        cout<<i<<endl;

    return 0;
}


