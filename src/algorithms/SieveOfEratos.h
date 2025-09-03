/**
 * @file SieveOfEratos.h
 * @brief Implementación del algoritmo de la Criba de Eratóstenes.
 */

#pragma once
#include "../interfaces/IPrimesNumberSearch.h"

/**
 * @class SieveOfEratos
 * @brief Implementa la interfaz IPrimesNumberSearch usando la Criba de Eratóstenes.
 */
class SieveOfEratos : public IPrimesNumberSearch
{
private:
    void dropNumbers(IntList *list, int base);

public:
    SieveOfEratos();
    ~SieveOfEratos();
    /**
     * @brief Busca números primos hasta el límite especificado.
     * @param limit Límite superior para la búsqueda.
     * @return Vector con los números primos encontrados.
     */
    IntList find(int limit) override;
};
