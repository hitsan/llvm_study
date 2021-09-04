#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum TokenKind
{
    INT,
    OPE
};

class Token
{
private:
    TokenKind kind;
    std::string value;
public:
    Token* next;
    Token(TokenKind kind, std::string value, Token *next);
    TokenKind getKind() { return kind; }
    std::string getValue() { return value; }
};

Token::Token(TokenKind kind, std::string value, Token *next) {
    this->kind = kind;
    this->value = value;
    this->next = next;
}

Token* first = new Token(OPE, "first", nullptr);
Token* current = first;
#endif