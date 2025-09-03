/**
 * @file PrimesServce.cpp
 * @brief Definición de métodos para la clase PrimesService.
 */
#include "PrimesService.h"

PrimesService::PrimesService(IPrimesNumberSearch &algorithm) : alg(algorithm) {}

PrimesService::~PrimesService() = default;

IntList PrimesService::getPrimes(int limit)
{
    return alg.find(limit);
}

