#include <stdio.h>
#include <stdlib.h>

main()
{
	int ano, idade;
	
	printf("Informe o ano de seu nascimento: ");
	scanf("%d", &ano);
	idade = 2017 - ano;
	printf("Sua idade eh: %d\n", idade);
	system("pause");
}
