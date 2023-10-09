#include <list>
#include <iostream>


int main()
{
    std::list<int> num_list = {1,2,3,4,5};
    num_list.push_back(1);
    for(const auto i : num_list)
    {
        std::cout << i << "\n";
    }
    return 0;
}