/**
 * @file IPrimesNumberSearch.h
 * @brief Interfaz para la búsqueda de números primos.
 */

#pragma once
#include <vector>

using IntList = std::vector<int>;

/**
 * @interface IPrimesNumberSearch
 * @brief Interfaz para algoritmos de búsqueda de números primos.
 */
class IPrimesNumberSearch
{
public:
    /**
     * @brief Busca números primos hasta el límite especificado.
     * @param limit Límite superior para la búsqueda.
     * @return Vector con los números primos encontrados.
     */
    virtual IntList find(int limit) = 0;
    virtual ~IPrimesNumberSearch() = default;
};
