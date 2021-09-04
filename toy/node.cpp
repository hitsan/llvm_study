#include <string>
#include "node.h"
#include "token.h"

Node::Node(Token* tok)
{
    this->tok = tok;
}

std::string Node::getValue()
{
    return tok->getValue();
}

Expression::Expression(Node* lHand, Node* rHand, Token* tok)
{
    this->lHand = lHand;
    this->rHand = rHand;
}

Literal::Literal(Token* tok)
{
    this->tok = tok;
}
