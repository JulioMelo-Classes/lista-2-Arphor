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
 80% tinha um erro de compilação, mas ok
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    ForwardIt sorted = first+1;
    ForwardIt move = first;

    while(sorted<last){
        while(move<sorted){
            if(cmp(*sorted, *move)==true){
                for(ForwardIt i = sorted; i>move; i--){
                    auto temp = *i;
                    *i = *(i-1);
                    *(i-1) = temp;
                }
            }
            move++;
        }
        sorted++;
        move=first;
        
    }
}

}
#endif
