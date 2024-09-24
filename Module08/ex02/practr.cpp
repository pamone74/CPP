#include <iostream>
#include <stack>


int main()
{
    std::stack<int> myStack;

    for(int i(0); i <= 20; i++)
    {
        myStack.push(i+2);
        std::cout << "At Position :: " << i << std::endl;
    }
    int i = 20;
    while(!myStack.empty())
    {
        std::cout << "My top stack is :: " << myStack.top() << " At pos:: " << i-- << std::endl;
        myStack.pop();

    }

    
}
