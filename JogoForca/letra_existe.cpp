#include "letra_existe.hpp"


bool letraExiste(char chute, std::string &palavra_secreta)
{
    /*
    for(int i = 0; i < palavra_secreta.size() ; i++)
    {
        if(chute == palavra_secreta[i])
        {
            return true;
        }
    }*/
    // da pra fazer assim, MAS PARA COMPILAR DIGITAMOS g++ forca.cpp -o forca.exe -stc=c++11, para compilar no c++11
    for(char letra : palavra_secreta)
    {
        if(chute == letra) return true;
    }
    return false;
}