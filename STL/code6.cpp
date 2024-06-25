/*In C++, a vector is a dynamic array that can grow or shrink in size.
It is part of the Standard Template Library (STL) and is implemented as a template class.
Vectors provide dynamic arrays with the ability to automatically resize themselves when elements are added or removed.*/


//Modifiers
/*
push_back() -adds element at the end 
pop_back()  -deletes the last element
insert()  -inserts new element before specified position
erase()  -removes the elements from the container from specified range
swap()  -swap the contents between vectors v1.swap(v2)
assign() -assignes new value to vector at positions
clear()  -used to remove all elements
*/


//Iterators
/*
begin() - it returns the iterator to the beginning
end() - it returns the iterator to the end
*/


//Capacity (Associated with size)
/*
size() - returns the number of elements in the vector
max_size() - returns maximum size of vector
resize() - changes the size
capacity() - returnes size of the allocated storage capacity
empty() - it tests weather vector is empty
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int>n;
    n.assign(9,1); //9 is number of values, 1 is the value, we are assigning one to 9 positions
    std::cout<< "The Contents are : "<<std::endl;
    for(int i=0;i<n.size();i++){
        std::cout<<n[i]<<" "<<std::endl;
    }
    n.push_back(2);
    //now we have to display this element we will store the size of vector in some variable and then we will print the last element.
    int sz= n.size();
    std::cout<<"Last Element :" <<n[sz-1]<<std::endl;

    n.pop_back();
    std::cout<<"now the contents after pop_back() are: "<<std::endl;
    for(int i=0;i<n.size();i++){
        std::cout<<n[i]<<" "<<std::endl;
    }

    n.insert(n.begin(), 7);//first parameter specifies position and second parameter specifies value
    std::cout<<" First element is :"<<n[0]<<std::endl;


    n.clear();
    std::cout<<"Now the size is :" <<n.size();
}

