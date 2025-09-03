/**
 * @file SieveOfEratos.cpp
 * @brief Definición de métodos para la clase SieveOfEratos.
 */
#include "SieveOfEratos.h"
#include <algorithm>

SieveOfEratos::SieveOfEratos() = default;
SieveOfEratos::~SieveOfEratos() = default;

void SieveOfEratos::dropNumbers(IntList *list, int base)
{
    int multipleFactor = 2;
    int multiple = base * multipleFactor;

    while (multiple <= list->back())
    {
        auto value = std::find(list->begin(), list->end(), multiple);
        if (value != list->end())
        {
            list->erase(value);
        }
        multipleFactor++;
        multiple = multipleFactor * base;
    }
}

IntList SieveOfEratos::find(int limit)
{
    IntList primes;
    for (int i = 2; i < limit; i++)
    {
        primes.push_back(i);
    }

    for (int i = 0; i < primes.size(); i++)
    {
        dropNumbers(&primes, primes[i]);
    }
    return primes;
}
