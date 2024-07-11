#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    int     nbrAnimals = 10;
    Animal* animals[nbrAnimals];
    
    for (int i = 0; i < nbrAnimals; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < nbrAnimals; i++)
    {
        delete animals[i];
    }
    return 0;
}