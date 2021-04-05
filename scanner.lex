%{
	#include <stdio.h>
	#include "tokens.hpp"
%}

%option yylineno
%option noyywrap
noZeroDigit	    ([1-9])
digit		    ([0-9])
letter		    ([a-zA-Z])
whitespace	    ([\t\r\n])
binop           ([+-*/])
relop           ([=<>])
contradiction   ([!])

%%
void					return VOID;
int                     return INT;
byte                    return BYTE;
b                       return B;
bool                    return BOOL;
and                     return AND;
or                      return OR;
not                     return NOT;
true                    return TRUE;
false                   return FALSE;
return                  return RETURN;
if                      return IF;
else                    return ELSE;
while                   return WHILE;
break                   return BREAK;
continue                return CONTINUE;
switch                  return  SWITCH;
case                    return CASE;
default                 return DEFAULT;
:                       return COLON;
;                       return SC;
,                       return COMMA;
\(                      return LPAREN;
\)                      return RPAREN;
{                       return LBRACE;
}                       return RBRACE;
=                       return ASSIGN;
relop=                  return RELOP;
contradiction=          return RELOP;
relop                   return RELOP;
\n+whitespace*          ++yylineno;
whitespace              ;
\/\/.                   return COMMENT;
{letter}+{[a-zA-Z0-9]}* return ID;
{noZeroDigit}{digit}*	return NUM;
{letter}+				return STRING;
%%