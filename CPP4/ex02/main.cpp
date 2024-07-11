#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << dog->getType() << " makes a sound: ";
    dog->makeSound();

    std::cout << cat->getType() << " makes a sound: ";
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}