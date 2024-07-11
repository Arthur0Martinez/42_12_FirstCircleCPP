#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const Animal* wrongCatRealAnimal = new WrongCat();
    //const WrongAnimal* wrongCat = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();

    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << wrongCatRealAnimal->getType() << " " << std::endl;

    wrongMeta->makeSound();
    wrongCatRealAnimal->makeSound();

    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCatRealAnimal;

    return 0;
}
