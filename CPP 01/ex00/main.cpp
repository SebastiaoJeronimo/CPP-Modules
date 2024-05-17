#include "Zombie.hpp"


//Fazer throws que propagam para a main
//g++ *.cpp *.hpp && valgrind ./a.out
int main()
{
    Zombie *z = newZombie("sebastiao");
    if (z == NULL)
        std::cout << "failed alloc\n";
    else
        z->announce();
    delete z; 
}