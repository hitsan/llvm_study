#include "node.h"

class Parser
{
private:
    Token* current;
public:
    void nextToken();
    void parse();
    TokenKind getKind();
};