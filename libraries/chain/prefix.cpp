//
//  Prefix.h
//  KGTPlatform
//
//  Created by Di on 2019/12/11.
//
#include <graphene/chain/prefix.hpp>

namespace graphene { namespace chain {
prefix& prefix::getInstance() {
        static class prefix instance;
        return instance;
}
std::string prefix::getPrefixString() {
    return getInstance().prefixString;
}
void prefix::setPrefixString(std::string prefix) {
    getInstance().prefixString = prefix;
}
std::string prefix::getSymbolString() {
    return getInstance().symbolString;
}
void prefix::setSymbolString(std::string symbol) {
    getInstance().symbolString = symbol;
}

}}


