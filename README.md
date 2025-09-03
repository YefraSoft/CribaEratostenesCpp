# Criba de Eratóstenes en C++

## Justificación

Este proyecto implementa la búsqueda de números primos utilizando el algoritmo de la Criba de Eratóstenes en C++. El diseño sigue principios de programación orientada a objetos, permitiendo la extensión y el mantenimiento sencillo del código. Se utiliza una arquitectura basada en interfaces y servicios para desacoplar el algoritmo de la lógica de negocio.

## Estilo de Programación

- **Orientación a Objetos:** El código está estructurado en clases, cada una con una responsabilidad clara.
- **Interfaces:** Se define la interfaz `IPrimesNumberSearch` para permitir la implementación de diferentes algoritmos de búsqueda de primos.
- **Inyección de Dependencias:** El servicio `PrimesService` recibe el algoritmo por constructor, facilitando el cambio de implementación sin modificar el servicio.
- **Nombres Descriptivos:** Las clases y métodos tienen nombres que reflejan su propósito.
- **Documentación Doxygen:** El código está documentado para facilitar su comprensión y mantenimiento.

## Estructura

- `src/interfaces/IPrimesNumberSearch.h`: Interfaz para algoritmos de búsqueda de primos.
- `src/algorithms/SieveOfEratos.h/cpp`: Implementación de la Criba de Eratóstenes.
- `src/services/PrimesService.h/cpp`: Servicio que utiliza un algoritmo para obtener primos.
- `src/main.cpp`: Punto de entrada de la aplicación.

## Ejecución

Compila y ejecuta el archivo `main.cpp`, ingresando el límite superior por consola.

---

## Principios SOLID

### S - Single Responsibility Principle (SRP)

Cada clase tiene una única responsabilidad:

- `SieveOfEratos`: Implementa el algoritmo de la criba.
- `PrimesService`: Gestiona la obtención de primos usando un algoritmo.
- `main.cpp`: Orquesta la ejecución.

### O - Open/Closed Principle (OCP)

El sistema está abierto a extensión (puedes agregar nuevos algoritmos implementando la interfaz) y cerrado a modificación (no necesitas cambiar el servicio).

### L - Liskov Substitution Principle (LSP)

Cualquier implementación de `IPrimesNumberSearch` puede ser usada por `PrimesService` sin alterar su funcionamiento.

### I - Interface Segregation Principle (ISP)

La interfaz `IPrimesNumberSearch` es específica y no obliga a implementar métodos innecesarios.

### D - Dependency Inversion Principle (DIP)

`PrimesService` depende de la abstracción (`IPrimesNumberSearch`), no de una implementación concreta.
