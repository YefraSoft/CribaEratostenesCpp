#include <iostream>
#include "interfaces/IPrimesNumberSearch.h"
#include "algorithms/SieveOfEratos.h"
#include "services/PrimesService.h"

using namespace std;

/**
 * @file main.cpp
 * @brief Punto de entrada de la aplicación para buscar números primos.
 */
int main()
{
    SieveOfEratos *eratos = new SieveOfEratos();
    PrimesService *service = new PrimesService(*eratos);

    int limit;
    std::cout << "Ingrese el limite para calcular numeros primos: ";
    std::cin >> limit;

    IntList primes = service->getPrimes(limit);
    for (int prime : primes)
    {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    delete eratos;
    delete service;

    return 0;
}
