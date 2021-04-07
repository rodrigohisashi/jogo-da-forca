#include "nao_acertou.hpp"
#include <vector>



bool Forca::nao_acertou(std::string &palavra_secreta, const std::map<char, bool> &chutou)
{
    for(char letra : palavra_secreta)
    {
        if(chutou.find(letra) == chutou.end() || !chutou.at(letra))
        {
            return true;
        }
    }
    return false;
}