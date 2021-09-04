#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum TOKENS {FDT , SEP, CAD};

struct token {
	char nombre;
	char buffer[128];
};

struct token get_token();

struct token token;
