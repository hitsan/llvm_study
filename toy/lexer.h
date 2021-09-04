#ifndef LEXER_H
#define LEXER_H
#include "token.h"
#include <string>
#include <iostream>

void lexer(std::string words)
{
    int num = words.size();
    for(int i = 0; i < num; i++) {
        if(words[i] == ' ') {
            continue;
        }
        if(isdigit(words[i])) {
            int first = i;
            while(isdigit(words[i])){
                i++;
                continue;
            }
            std::string word = words.substr(first, i - first);
            Token* tok = new Token(INT, word, nullptr);
            current -> next = tok;
            current = tok;
        }
        if(words[i] == '+' || words[i] == '-') {
            Token* tok = new Token(OPE, "+", nullptr);
            current -> next = tok;
            current = tok;
        }
    }
}

#endif