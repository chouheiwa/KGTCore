//
//  Prefix.h
//  KGTPlatform
//
//  Created by Di on 2019/12/11.
//
#include <iostream>

namespace graphene { namespace chain {

class prefix
{
private:
    prefix() { };
    ~prefix() { };
    prefix(const prefix&);
    prefix& operator=(const prefix&);
    static prefix& getInstance();
    std::string prefixString = "KGT";
    std::string symbolString = "KGT";
public:
    static std::string getPrefixString();
    static void setPrefixString(std::string prefix);
    static std::string getSymbolString();
    static void setSymbolString(std::string symbol);
};

}
}


