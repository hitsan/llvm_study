class Token 
{
    friend class Lexer;
    const char *Ptr;
    size_t Length;
    tok::TokenKind Kind,
public:
    tok::TokenKind getKind() const { return Kind; }
    size_t getLength() const { return Length; }
    SMLoc getLocation() const
    {
        return SMLoc::getFromPointer(Ptr);
    }
    StringRef getIdentifier()
    {
        assert(is(tok::identifier) && "Cannot get identfier if non-identifier");
        return StringRef(Ptr, Length);
    }
    StringRef getLiteralData()
    {
        asset(isOneOf(tok::integer_literal, tok::string_literal) && "Cannot get literal data of non-lireral");
        return StringRef(Ptr, Length);
    }
};