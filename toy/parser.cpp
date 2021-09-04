#include "node.h"
#include "parser.h"
#include "token.h"

void Parser::nextToken()
{
    current = current -> next;
}

TokenKind Parser::getKind()
{
    return current -> getKind();
}

void Parser::parse()
{
    TokenKind kind;
    while(current != nullptr)
    {
        kind = getKind();
        switch (kind)
        {
        case TokenKind::INT:
            Node Literal(current);
            break;
        case TokenKind::OPE:

            break();
        default:
            break;
        }
    }
    switch
}