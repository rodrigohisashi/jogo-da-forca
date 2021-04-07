#include <iostream>
#include <string>
#include <map>  // biblioteca do map
#include <array>
#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "salva_arquivo.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "adiciona_palavra.hpp"
// Arquivos de cabeçalho (hpp)  nao podem usar (recomendavel) o using namespace std (tira a possibilidade de uso em outras funcoes)
using namespace std;


// Uso de static para definir essas variaveis somente nessa unidade de tradução (deixando de ser global) 
// Ou seja nao da pra acessar essas variaveis com o uso de extern
static string palavra_secreta;
static map<char, bool> chutou;
static array<char, 5> chutes_errados;    // Array de 5 posicao;




int main()
{
    int numero_de_chutes = 0;

    Forca::cabecalho();
    palavra_secreta = Forca::sorteia_palavra();


    while(numero_de_chutes < 5 && Forca::nao_acertou(palavra_secreta, chutou))
    {
       
        Forca::imprime_erros(chutes_errados);  // estou deixando a funcao mais especifica usando namespace (ver definição da funcao)

        Forca::imprime_palavra(palavra_secreta, chutou);

        cout << endl;
        Forca:: chuta(chutou, chutes_errados, palavra_secreta, numero_de_chutes);
    }
    cout << " FIM DE JOGO " << endl;
    if(Forca::nao_acertou(palavra_secreta, chutou))
    {
        cout << "Voce perdeu, que triste" << endl;
    }
    else
    {
        cout << "Parabens vc ganhou o jogo " << endl;
        cout << "Voce gostaria de adicionar uma palavra nova? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S')
        {
            Forca::adiciona_palavra();
        }
    }
    cout << "A palavra secreta era " << palavra_secreta << endl;
    return 0;
}   
