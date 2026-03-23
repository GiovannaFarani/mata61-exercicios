#include "token.h"
#include <stdio.h>

extern int yylex();
extern char* yytext;

int main(int argc, char **argv) {
    int token;

  while ((token = yylex()) != 0){
    if (token == NUM){
      printf("categoria do token: %d, constante numérica: %s\n", token, yytext);
    }
    else if (token == ERROR){
      printf("erro léxico: caractere inválido\n");
    }
    else{
      printf("categoria do token: %d\n", token);
    }
  }
  return 0;
}

