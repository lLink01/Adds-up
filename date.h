#ifndef __DATE_H__
#define __DATE_H__

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Define a estrutura tm como moment
**/ 
typedef struct tm moment;

/**
 * @brief Funcao que cria uma estrura moment e retorna o seu endereco
 * 
 * @param (int) dia
 * @param (int) mes
 * @param (int) ano
 * @return (moment *) o endereco da estrutura
 */
moment * createMoment(int day, int month, int year);

/**
 * @brief Cria uma estrutura do tipo Moment com valores aleatórios
 * 
 * @reeturn (moment *) duration: Endereço de uma estrutura do tipo moment
 */
moment * getRandomMoment();

/**
 * @brief Funcao que compara duas estruturas moment
 * 
 * @param (moment * moment1) a estrutura a ser comparada
 * @param (moment * moment2) a estrutura a ser usada para comparar
 * @return (Char) retorna 1 se moment1 for maior que moment2; e retorna 0 se isso nao for verdade
 */
char momentcmp(moment * moment1, moment * moment2);

/**
 * @brief Funcao para imprimir um data
 * 
 * @param (moment *) a estruta a ser impressa
 */
void printDate(moment * m);

/**
 * @brief Funcao para leitura de um data em um arquivo
 * 
 * @param (FILE *) o arquivo a ser lido
 * @return a estrutura de data lida
 */
moment * readDate(FILE * f);

/**
 * @brief Funcao para escrita de um data em um arquivo
 * 
 * @param (FILE *) o arquivo a ser escrito
 * @param (moment *) a estruta a ser armazenada
 */
void writeDate(FILE * f, moment * m);

#endif