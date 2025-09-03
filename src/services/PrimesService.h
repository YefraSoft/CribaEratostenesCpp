/**
 * @file PrimesService.h
 * @brief Servicio para obtener números primos usando un algoritmo específico.
 */

#pragma once
#include "../interfaces/IPrimesNumberSearch.h"

/**
 * @class PrimesService
 * @brief Servicio que utiliza un algoritmo para obtener números primos.
 */
class PrimesService
{
private:
    IPrimesNumberSearch &alg;

public:
    /**
     * @brief Constructor que recibe el algoritmo de búsqueda.
     * @param algorithm Instancia de IPrimesNumberSearch.
     */
    PrimesService(IPrimesNumberSearch &algorithm);
    ~PrimesService();

    /**
     * @brief Obtiene los números primos hasta el límite especificado.
     * @param limit Límite superior para la búsqueda.
     * @return Vector con los números primos encontrados.
     */
    IntList getPrimes(int limit);
};
