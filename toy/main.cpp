#include <iostream>
#include "token.h"
#include "lexer.h"

int main()
{
    lexer("1+22+3");
    Token *f = first;
    while(f != nullptr) {
        std::cout << f -> getKind() <<  " " << f -> getValue() << std::endl;
        f = f -> next;
    }
    return 0;
}