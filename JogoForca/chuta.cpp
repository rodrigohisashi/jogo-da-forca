
#include <iostream>
#include "chuta.hpp"
#include "letra_existe.hpp"



void Forca::chuta( std::map<char, bool> &chutou, std::array<char, 5> &chutes_errados, std::string& palavra_secreta, int& n_chutes)
{
    // chute
    char chute;
    std::cout << "Seu chute: " << std::endl;
    std::cin >> chute;
    chutou[chute] = true;

    if(letraExiste(chute, palavra_secreta))
    {
        std::cout << "Seu chute está na palavra" << std::endl;
    }
    else
    {
    
        std::cout << "Voce errou, seu chute não está na palavra!" << std::endl;
        chutes_errados[n_chutes] = chute;
        n_chutes++;
        
    }
    std::cout << std::endl;   
}
