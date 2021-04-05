%{
	#include <stdio.h>
	#include "tokens.hpp"
%}

%option yylineno
%option noyywrap
noZeroDigit	([1-9])
digit		([0-9])
letter		([a-zA-Z])
whitespace	([\t\r\n])

%%
void					return VOID;
{noZeroDigit}{digit}*	return INT;
{letter}+				return STRING;
%%