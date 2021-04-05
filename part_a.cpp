#include "tokens.hpp"

int main()
{
	int token;
	while(token = yylex()) {
		switch(token){
			case INT:
				printf("INT %d %s\n", yylineno ,yytext);
				break;
			case STRING:
				printf("STRING %d %s\n", yylineno ,yytext);
				break;
			case VOID:
				printf("VOID %d %s\n", yylineno ,yytext);
				break;
		}
	}
	return 0;
}