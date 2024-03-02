#include "GenerateAndIdentyfy.hpp"

static Base* genA()
{
    return (new A());
}

static Base*genB()
{
    return (new B());
}

static Base* genC()
{
    return (new C());
}

typedef Base* (*genBase)();

Base * generate(void)
{
    std::srand(std::time(0));
    int RandNumber = (std::rand() % 3);
    genBase constructors[3] = {&genA, &genB, &genC};

    return (constructors[RandNumber]());
}