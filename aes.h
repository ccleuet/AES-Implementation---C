// stdafx.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets qui sont utilisés fréquemment,
// et sont rarement modifiés
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#ifndef EXAMPLE_AES_H
#define EXAMPLE_AES_H

/**
*	@brief	Call of the AES encryption algorithm
*
*	@param[in]	Pointer to the begining of the plaintext
*	@param[out]	Pointer to the desired @a output ciphertext
*	@param[in]	Pointer to the @a secret key
*
*	This algoritm must be implemented by the student.
*
*/
void encrypt_aes_16(unsigned char *input, unsigned char *output, unsigned char *key);

/* ... Add needed prototypes ... */

#endif