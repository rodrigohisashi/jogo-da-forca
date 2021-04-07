#include <iostream>
#include <fstream>
#include "le_arquivo.hpp"

std::vector<std::string> Forca::le_arquivo()
{
    std::ifstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open())
    {
        int qtdPalavras;
        arquivo >> qtdPalavras;

        std::vector<std::string> palavrasArquivo;

        for(int i = 0 ; i < qtdPalavras; i++)
        {
            std::string palavraLida;
            arquivo >> palavraLida;
            palavrasArquivo.push_back(palavraLida);
        }
        arquivo.close();
    
    return palavrasArquivo;
    }
    else 
    {
        std::cout << "nao foi possivel abrir o arquivo" << std::endl;
        exit(0);
    }
}