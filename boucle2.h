#include <stdlib.h>
#include <stdio.h>

/*
Challenge 1:
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication en ordre 
décroissant, de 10 à 1. 
*/

void Table_de_Multiplication_Inversee(){
	int n;
	printf("Donner un nombre n : ");
	scanf("%d",&n);
	int i=0;
	for(i=10;i>0;i--){
		printf("%d * %d = %d \n",n,i,(n*i));
	}
}

/*
Challenge 2 :
Écrire le programme pour avoir un pyramide d'étoile, 
le nombre des lignes à composer est demandé à l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.
*/

void pyramide_d_etoile(){
	int n;
	printf("Donner un nombre de ligne n : ");
	scanf("%d",&n);
	int i=0;
	int j=0;
	int k=0;	
	for(i=0;i<n;i++){
		for (j = 0; j < 2 * (n - i - 1); j++){
			printf(" ");
		}
        for (k = 0; k < 2 * i + 1; k++){
            printf("* ");
		}
        printf("\n");
	}
}

/*
Challenge 3:
Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. 
Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.
*/

int premier(int n){
	if(n<=1){
		return 0;
	}
	int i =0;
	
	for(i=2;i<n;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

void Affichage_des_Nombres_Premiers(){
	int n=0;
	printf("Donner un nombre entier n : ");
	scanf("%d",&n);
	int i=0;
	for(i=1 ; i<=n ;i++){
		if(premier(i)==1){
			printf("%d ",i);
		}
	}
	printf("\n");
}

/*
challenge 6
Écrivez un programme C qui affiche tous les facteurs d'un nombre entier positif n entré par l’utilisateur. 
Par exemple, pour n = 36, affichez : 1, 2, 3, 4, 6, 9, 12, 18, 36.
*/

void Facteurs_d_un_Nombre(){
	int n;
	printf("Donner un entier n : ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		if(n%i == 0 ){
			if(i<n){
				printf("%d, ",i);
			}
			else{
				printf("%d \n",i);
			}
		}
	}
}

/*
Challenge 8
Écrivez un programme C qui implémente la recherche dichotomique dans un tableau trié d’entiers. 
Le programme doit demander à l’utilisateur un nombre et rechercher ce nombre dans le tableau en utilisant 
la méthode de recherche dichotomique.
*/

void trier(int *tab,int n){
	int i;
	int j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(tab[i]>tab[j]){
				int temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}

void recherche_dicotomie(){
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i;
	int tab[M];
	for(i=0;i<n;i++){
		printf("tab[%d] = ",i);
		scanf("%d",&tab[i]);
	}
	trier(tab,n);
	int val;
	printf("Donner la valeur a rechercher : ");
	scanf("%d",&val);
	int left = 0;
	int right = n-1;
	int found = 0;
	int mid = n/2;
//	while(left<=right){
//		if(tab[mid]>val){
//			right=mid-1;
//			mid = left + ((right-left)/2);
//		}
//		else if (tab[n/2]<val){
//			left=mid+1;
//			mid = left + ((right-left)/2);
//		}
//		else{
//			found=1;
//		}
//	}
//	if(found==1){
//		printf("l element a rechercher a ete trouver\n");
//	}
//	else{
//		printf("l element nexiste pas dans le tableaux.\n");
//	}
	
}














