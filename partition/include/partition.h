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
 80%
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    ForwardIt fin = last;

    while(first<fin){
        if(p(*first)==false){
            for(ForwardIt i=(first+1); i<fin; i++){
                auto temp = *i;
                *i = *(i-1);
                *(i-1) = temp;
            }
            fin--;
        }else{
            first++;
        }
        
    }


    return fin;
}

}
#endif
