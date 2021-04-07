#include <iostream>
#include "imprime_erros.hpp"


void Forca::imprime_erros(const std::array<char, 5>& chutes_errados)
{
    // Imprimindo os chutes ERRADOS do usuario;              
    std::cout << "Chutes ERRADOS" << std::endl;
    for (char letra : chutes_errados)
    {
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}
