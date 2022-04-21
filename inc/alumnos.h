/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Estructura genérica para almacenar datos de alumnos
 *
 * En el trabajo práctico se espera que cada alumno agregue sus datos
 * al repositorio usando esta estructura.
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Serialización de datos de un alumno
 *
 * Entrega de todos los datos de un almuno en una única cadena de texto.
 *
 * @param cadena búfer donde se dejará la cadena de texto serializada
 * @param espacio espacio disponible en el búfer para escritura (bytes)
 * @param alumno struct con los datos del alumno
 * @return true para datos correctamente serializados
 * @return false cuando faltó espacio en el búfer para serializar correctamente
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Serialización de datos de todos los alumnos
 *
 * Entrega de datos serializados para todos los alumnos disponibles en el
 * programa.
 *
 * @param cadena búfer donde se dejará la cadena de texto serializada
 * @param espacio espacio disponible en el búfer para escritura (bytes)
 * @return true para datos correctamente serializados
 * @return false cuando faltó espacio en el búfer para serializar correctamente
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
