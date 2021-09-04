#include "token.h"
#include "lexer.h"
#include <string>

// void lexer(std::string words)
// {
//     int num = words.size();
//     for(int i = 0; i < num; i++) {
//         if(words[i] == ' ')
//             continue;
//         if(isdigit(words[i])) {
//             int first = i;
//             while(isdigit(words[i])){
//                 i++;
//                 continue;
//             }
//             std::word = words.substr(first, i - first - 1);
//             Token tok = new Token(INT, word);
//             code[num] = tok;
//             num++;
//         }
//         if(words[i] == '+' || words[i] == '-') {
//             Token tok = new Token(OPE, words[i]);
//             code[num] = tok;
//             num++;
//         }
//     }
// }