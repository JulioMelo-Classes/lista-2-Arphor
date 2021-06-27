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
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    int x = n_first - first;


    while(n_first<last){
        for(ForwardIt i=n_first; i>first; i--){
            auto temp = *i;
            *i = *(i-1);
            *(i-1) = temp;
        }
        first++;
        n_first++;
    
    }



   return (last-x);
}

}
#endif
