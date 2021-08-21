#include "tinylang/Basic/TokenKinds.h"
#include "llvm/Support/ErrorHandling.h"
using namespace tinylang;
static const char * const TokNames[] = {
    #define TOK(ID) #ID,
    #define KEYWORD(ID, FLAG) #ID,
    #include "tinylang/Basic/TokenKinds.def"
    nullptr
};
const char *tok::getTokenName(TokenKind Kind) {
    return TokNames[Kind];
}
const char *tok::getPunctuatorSpelling(TokenKind Kind) {
    switch (Kind) {
    #define PUNCTUATOR(ID, SP) case ID: return SP;
    #include "tinylang/Basic/TokenKinds.def"
        default: break;
    }
    return nullptr;
}