/*
 * Copyright (c) 2015 Cryptonomex, Inc., and contributors.
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include <cli/cli.hpp>
#include <graphene/chain/prefix.hpp>


int main( int argc, char** argv )
{
    graphene::chain::prefix::setPrefixString("BDS");
    graphene::chain::prefix::setSymbolString("BDS");
    
    auto object = std::make_shared<kgt::rpc::cli>();
    std::string str;
    str = "4a93e8abe6ab5f2b935d692e13eea73cdbfb288959fb41640b829d25b7f4bd84";
    std::string str1;
    str1 = "ws://103.101.205.170:46218";
    int res = object->init(str, str1, 1000);
    object->setTimeout(1000);
    
    std::cout << res << "end\n";
    
    int i = 0;
    std::string str2;
    std::string str3;
    
    str2 = "set_password 11111111";
    i = object->runCommand(kgt::rpc::api_type::wallet_api_type, str2, str3);
    std::cout << str2 << "\n" << str3 << "\n";
    
    
    str2 = "unlock 11111111";
    i = object->runCommand(kgt::rpc::api_type::wallet_api_type, str2, str3);
    std::cout << str2 << "\n" << str3 << "\n";
    
    str2 = "import_key lihong8 5K2EwMLdiYNLFSfiNgH5FZt5fvrCFDqNVEbThAvUewnBPFmTsaP";
    i = object->runCommand(kgt::rpc::api_type::wallet_api_type, str2, str3);
    std::cout << str2 << "\n" << str3 << "\n";
    
    object.reset();
    return 0;
}
