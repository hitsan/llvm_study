#ifndef NODE_H
#define NODE_H
#include "Token.h"


class Node
{
protected:
    Token* tok;
public:
    std::string getValue();
    Node(Token* tok);
};

class Expression: public Node
{
public:
    Node* lHand;
    Node* rHand;
    Expression(Node* lHand, Node* rHand, Token* tok);
};

class Literal: public Node
{
public:
    Literal(Token* tok);
};

#endif