#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl(void);
        void filterComplain(std::string level);
        ~Harl(void);
};

#endif