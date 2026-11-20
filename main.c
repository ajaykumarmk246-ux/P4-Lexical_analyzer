#include <stdio.h>
#include "lexer.h"

int main(int argc, char *argv[]) 
{
    if(argc != 2)
    {
        printf("Usage: ./a.out filename\n");
        return 1;
    }


    initializeLexer(argv[1]);

    Token token;

    printf("\n");
    while ((token = getNextToken()).type!=UNKNOWN) 
    {
        printf("Token :- \t %-35s Type :- \t %s\n", token.lexeme, Token_Type(token.type));
    } 
    printf("\n");
    
    return 0;
}