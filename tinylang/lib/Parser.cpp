#include "Parser.h"

AST *Parser::parse()
{
    AST *Res = parseCalc();
    expect(Token::eoi);
    return Res;
}

AST *Parser::parseCalc()
{
    Expr *E;
    llvm::SmallVector<llvm::StringRef, 8> Vars;

    if(Tok.is(Token::ident))
    {
        advance();
        if(expect(Token::ident)) { goto _error; }
        Vars.push_back(Tok.getText());
        advance();

        while(Tok.is(Token::comma))
        {
            advance();
            if(expect(Token::ident)) { goto _error; }
            Vars.push_back(Tok.getText());
            advance();
        }

        if (consume(Token::colon)) { goto _error; }
        E = parseExpr();
    }
}