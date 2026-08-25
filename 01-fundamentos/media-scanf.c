#include <stdio.h> //importacao da biblioteca

int main()
{
	int n1, n2;
	float media;
	char nome[10];
	
	printf("Digite o valor de n1");
	scanf("%d", &n1);
	printf("Digite o valor de n2");
	scanf("%d", &n2);
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	media = (n1 + n2) /2;
	
	printf("%s, sua media e %f", nome, media);
	
	return 0;
}
