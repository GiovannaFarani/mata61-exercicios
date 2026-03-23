/* recognize tokens for the calculator */

%option noyywrap
%{
#include "token.h"
%}
%%
[0-9]+(\.[0-9]+)?   { return NUM; }
"+"                 { return PLUS; }
"-"                 { return MINUS; }
"*"                 { return TIMES; }
"/"                 { return DIV; }
[ \t]+              { }
\n                  { return EOL; }
.                   { return ERROR; }
%%



