#include "tokens.hpp"
#include <iostream>

string tokenNames [] = {
        "VOID",
        "INT" ,
        "BYTE",
        "B",
        "BOOL",
        "AND",
        "OR",
        "NOT",
        "TRUE",
        "FALSE",
        "RETURN",
        "IF",
        "ELSE",
        "WHILE",
        "BREAK",
        "CONTINUE",
        "SWITCH",
        "CASE",
        "DEFAULT",
        "COLON",
        "SC",
        "COMMA",
        "LPAREN",
        "RPAREN",
        "LBRACE",
        "RBRACE",
        "ASSIGN",
        "RELOP",
        "BINOP",
        "COMMENT",
        "ID",
        "NUM",
        "STRING",
        "NUM_OF_VALID_TOKENS"
};

int main()
{	
	int token;
	while(token = yylex()) {
	    if (token - 1 < NUM_OF_VALID_TOKENS)
        {
            cout << yylineno << " " << tokenNames[token - 1] << " " << yytext << endl;
        }else{
	        cout << "Error " << yytext << endl;
	    }

		/*
		switch(token){
			case INT:
				std::cout  << PRINT_TOKEN(INT) << endl;
				std::cout << PRINT_TOKEN(tokentype[token]) << endl;
				
				printf("INT %d %s\n", yylineno ,yytext);
				break;
			case STRING:
				printf("STRING %d %s\n", yylineno ,yytext);
				break;
			case VOID:
				printf("VOID %d %s\n", yylineno ,yytext);
				break;
		}*/
	}
	return 0;
}