#include "GenerateAndIdentyfy.hpp"

void	identify(Base *p)
{
	std::cout << "Base Type with Pointer: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
    std::cout << "Cast was not succefull" << std::endl;
}

void identify(Base& p)
{
    std::cout << "\033[1;35mIdentifying...\033[0m" << std::endl;

    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
    }
    catch (std::exception& e)
    {
        try
        {
            B b = dynamic_cast<B&>(p);
            std::cout << "Type is B" << std::endl;
        }
        catch (std::exception& e)
        {
            try
            {
                C c = dynamic_cast<C&>(p);
                std::cout << "Type is C" << std::endl;
            }
            catch (std::exception& e)
            {
                std::cout << "Cast was not successful: " << e.what() << std::endl;
            }
        }
    }
}

