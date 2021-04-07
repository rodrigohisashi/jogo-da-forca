#include "le_arquivo.hpp"
#include <ctime>
#include "sorteia_palavra.hpp"

std::string Forca::sorteia_palavra()
{
    std::vector<std::string> palavras = Forca::le_arquivo();
    srand(time(NULL));

    int indice_sorteado = rand() % palavras.size();

    return palavras[indice_sorteado];
}