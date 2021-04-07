#include <iostream>
#include "imprime_palavra.hpp"

void Forca::imprime_palavra(std::string &palavra_secreta, const std::map<char, bool> &chutou)
{
    for(char letra : palavra_secreta)
    {
        if(chutou.find(letra) != chutou.end() && chutou.at(letra))
        {
            std::cout << letra << " ";
        }
        else
        {
            std::cout << "_ " ;
        }
        
    }
}
