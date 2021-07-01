#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 a execução deu segfault, não vou considerar
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    InputIt ini = first;
    InputIt move = first;

    while(first!=last){
        if(ini != first){
            while(move!=first){
                if(eq(*move, *first)==true){
                    for(auto i=(first+1); i<last; i++){
                        auto temp = *i;
                        *i = *(i-1);
                        *(i-1) = temp;
                    }
                    last--;
                    move = ini;
                    break;
                }else{
                    move++;
                }
            }
        }

        first++;

    }
    return last;
}

}
#endif
