#include <thread>
#include <iostream>
#include <string>

void greeting(std::string const& message)
{
    std::cout<<message<<std::endl;
}

int main()
{
    std::thread t(greeting,"hi!");
    t.join();
}