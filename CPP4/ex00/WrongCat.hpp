#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "Animal.hpp"

class WrongCat : public Animal
{
    public:
        WrongCat();
        WrongCat(const WrongCat & other);
        WrongCat & operator=(const WrongCat & other);
        virtual ~WrongCat();
        
        void makeSound() const;
};

#endif