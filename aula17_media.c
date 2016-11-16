/*******************************************************************

Autor  		: Anderson Siqueira - aula 17 ESW
Data   		: 16/11/2016
Função 		: Calcular a médiad de uma aluno
Parâmetros  : Nenhum, em termos de função 
 
*/

# include <stdio.h>
# include <math.h>

int main() {
	
	float nMedia1Bim, nMedia2Bim, nMedia3Bim, nMedia4Bim, nMediaFinal;
	char vNome[50];
	
	// Informar os dados do aluno e médias
	printf("Informe o nome do aluno     : ");
	fgets(vNome,sizeof(vNome),stdin);
	
	printf("Informe a Média 1o Bimestre : ");
	scanf("%f",&nMedia1Bim);
	
	printf("Informe a Média 2o Bimestre : ");
	scanf("%f",&nMedia2Bim);
	
	printf("Informe a Média 3o Bimestre : ");
	scanf("%f",&nMedia3Bim);
	
	printf("Informe a Média 4o Bimestre : ");
	scanf("%f",&nMedia4Bim);
	
	nMediaFinal = (nMedia1Bim+nMedia2Bim+nMedia3Bim+nMedia4Bim)/4;
	
	printf("\n\n A media do aluno e %2.2f",nMediaFinal);
	
	return 0;
	
}
