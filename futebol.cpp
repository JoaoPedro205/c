#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <locale.h>

struct Time 
{
    int codigo;
    char time[30];
    int pontos;
    char artilheiro[30];
    int vitorias;
    int gols;
};


 cadastrarTimes(Time times[]) 
 {
    for (int i = 0; i < 20; i++) 
	{
        printf("Digite o código do time %i: ", i + 1);
        scanf("%i", &times[i].codigo);
        printf("Digite o nome do time %i: ", i + 1);
        scanf("%s", times[i].time);
    }
}


 atribuirZero(Time times[]) 
 {
    for (int i = 0; i < 20; i++) 
	{	
        times[i].pontos = 0;
        times[i].vitorias = 0;
        times[i].gols = 0;
    }
}


 alterarPontosVitorias(Time times[]) 
 {
    int codigo;
    printf("Digite o código do time: ");
    scanf("%i", &codigo);

    for (int i = 0; i < 20; i++) 
	{
        if (times[i].codigo == codigo) 
		{
            printf("Digite a nova quantidade de pontos: ");
            scanf("%i", &times[i].pontos);
            printf("Digite a nova quantidade de vitórias: ");
            scanf("%i", &times[i].vitorias);
            break;
        }
    }
}


alterarArtilheiro(Time times[]) 
{
    int codigo;
    printf("Digite o código do time: ");
    scanf("%i", &codigo);

    for (int i = 0; i < 20; i++) 
	{
        if (times[i].codigo == codigo) 
		{
            printf("\nDigite o novo nome do artilheiro: ");
            scanf("%s", times[i].artilheiro);
            break;
        }
    }
}


 informarVencedor(Time times[])
 {
 
    struct Time vencedor = times[0];

    for (int i = 1; i < 20; i++) 
	{
        if (times[i].pontos > vencedor.pontos) 
		{
            vencedor = times[i];
        }
    }

    printf("\nTime vencedor: %s", vencedor.time);
    printf("\nArtilheiro: %s", vencedor.artilheiro);
    printf("\nPontos: %i", vencedor.pontos);
}


 informarArtilheiroGols(Time times[]) 
 {
    struct Time maisGols = times[0];

    for (int i = 1; i < 20; i++) 
	{
        if (times[i].gols > maisGols.gols) 
		{
            maisGols = times[i];
        }
    }

    printf("\nArtilheiro do time com mais gols: %s", maisGols.artilheiro);
}

 main() 
 {
 	setlocale(LC_ALL,"Portuguese");
    struct Time times[20];

    int opcao;
    do {
        printf("\nEscolha uma opção:");
        printf("\n1. Cadastrar times");
        printf("\n2. Atribuir zero aos campos");
        printf("\n3. Alterar pontos e vitórias");
        printf("\n4. Alterar artilheiro");
        printf("\n5. Informar vencedor do campeonato");
        printf("\n6. Informar artilheiro do time com mais gols");
        printf("\n0. Sair");

        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
                cadastrarTimes(times);
                break;
            case 2:
                atribuirZero(times);
                break;
            case 3:
                alterarPontosVitorias(times);
                break;
            case 4:
                alterarArtilheiro(times);
                break;
            case 5:
                informarVencedor(times);
                break;
            case 6:
                informarArtilheiroGols(times);
                break;
            case 0:
                printf("\nFinalizando navegação.");
                break;
            default:
                printf("\nOpção inválida. Tente novamente mais tarde.");
        }
    } while (opcao != 0);
}

