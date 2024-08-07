#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = "Idea";
    }
}

Brain::Brain(const Brain & other)
{
    *this = other;
}

Brain & Brain::operator=(const Brain & other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{

}