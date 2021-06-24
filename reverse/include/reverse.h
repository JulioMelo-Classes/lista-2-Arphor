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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{

    auto size = last-first;
    int count=0;

    while(count<size){
        for(auto i=(first+1); i<(last-count); i++){
            auto temp = *i;
            *i = *(i-1);
            *(i-1) = temp;
        }

        count++;
    }

}

}
#endif
