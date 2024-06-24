#include <utility>
#include <iostream>

//PAIRS ----------

int main()
{
    std::pair<int, char> nameAge;
    nameAge.first = 10;
    nameAge.second = 'B';
    std::cout << "Name: " << nameAge.first << ", Age: " << nameAge.second << std::endl;
    // Output: Name: 10, Age: B
}
