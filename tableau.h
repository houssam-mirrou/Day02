#include <stdio.h>
#include <stdlib.h>
#define M 200

/*
Challenge 1 :
�crivez un programme C qui initialise un tableau d'entiers avec des valeurs donn�es et affiche ces valeurs. 
Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.
*/

void Initialisation_et_Affichage() {
	int tab[6]= {0,1,2,3,4,5};
	int i=0;
	for(i=0 ; i<6;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
Challenge 2:
�crivez un programme C qui demande � l'utilisateur le nombre d'�l�ments d'un tableau, puis demande � l'utilisateur de saisir ces �l�ments.
Affichez ensuite les �l�ments du tableau.
*/

void Saisie_et_Affichage_des_Elements (){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	printf("*****************************\n");
	for(i=0 ; i<n;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
Challenge 3 :
�crivez un programme C qui calcule et affiche la somme des �l�ments d'un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments, puis les �l�ments du tableau, et afficher la somme totale.
*/

void Somme_des_Elements (){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int sum=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		sum+=tab[i];
	}
	printf("La somme est : %d",sum);
}

/*
Challenge 4 :
�crivez un programme C qui trouve et affiche le plus grand �l�ment dans un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.
*/

void Trouver_le_Maximum() {
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int max=-1;
	printf("tab [%d] = ",i);
	scanf("%d",&tab[0]);
	max=tab[0];
	for(i=1;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		if(tab[i] > max){
			max=tab[i];
		}
	}
	printf("Le maximum du tableaux est : %d",max);
}

/*
Challenge 5:
�crivez un programme C qui trouve et affiche le plus petit �l�ment dans un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau
*/

void Trouver_le_Minimum(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int min=0;
	printf("tab [%d] = ",i);
	scanf("%d",&tab[0]);
	min=tab[0];
	for(i=1;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		if(tab[i] < min){
			min=tab[i];
		}
	}
	printf("Le minimum du tableaux est : %d",min);
	
}

/*
Challenge 6:
�crivez un programme C qui multiplie chaque �l�ment d'un tableau d'entiers par un facteur donn� et affiche le tableau r�sultant. 
Le programme doit demander le nombre d'�l�ments, les �l�ments du tableau, et le facteur de multiplication.
*/

void Multiplication_des_Elements() {
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int fact= 0;
	printf("donner le facteur du tableaux : ");
	scanf("%d",&fact);
	for(i=0;i<n;i++){
		printf("tab [%d] * %d = %d\n",i,fact, (tab[i] *fact));
	}
}

/*
Challenge 7:
�crivez un programme C qui demande � l'utilisateur de saisir un tableau d'entiers,
puis affiche le tableau tri� en ordre croissant sans utiliser de fonction de tri pr�d�finie
*/

void Tableau_en_Ordre_Croissant(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(tab[i]>tab[j]){
				int temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
	printf("*****************tableau en ordre croissant***********\n");
	for(i=0;i<n;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
Challenge 8 :
�crivez un programme C qui copie les �l�ments d'un tableau d'entiers dans un autre tableau. 
Affichez les �l�ments du tableau original et du tableau copi� pour v�rifier que la copie est correcte.
*/

void copie_tableaux(int *copie){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	copie= malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		copie[i]=tab[i];
	}
	printf("l affichage du copie de tableaux : \n");
	for(i=0;i<n;i++){
		printf("copie [%d] = %d \n",i,copie[i]);
	}
}

/*
Challenge 9 :
�crivez un programme C qui inverse les �l�ments d'un tableau d'entiers. 
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau invers�.
*/

void Inversion_d_un_Tableau(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int left = 0;
	int right = n-1;
	while(left<right){
		int temp =tab[left];
		tab[left] = tab [right];
		tab[right] = temp;
		left++;
		right--;
	}
	printf("******************le tableaux apres l'inverssion******************\n");
	for(i = 0; i<n ;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
Challenge 10 :
�crivez un programme C qui recherche un �l�ment sp�cifique dans un tableau d'entiers en utilisant une recherche lin�aire. 
Le programme doit demander � l'utilisateur le nombre d'�l�ments, les �l�ments du tableau, et l'�l�ment � rechercher, 
puis afficher si l'�l�ment est pr�sent ou non.
*/

void Rechercher_un_Element(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int rech = 0;
	int val;
	printf("donner la valeur a rechercher : ");
	scanf("%d",&val);
	for(i = 0 ;i< n;i++){
		if(tab[i] == val){
			printf("La valeur existe dans %d du tableaux .\n",i);
			rech=1;
			break;
		}
	}
	if(rech==0){
		printf("La valeur n'existe pas dans le tableaux .\n");
	}
}

/*
Challenge 11 :
�crivez un programme C qui remplace toutes les occurrences d'une valeur sp�cifique dans un tableau d'entiers par une nouvelle valeur.
Le programme doit demander � l'utilisateur le nombre d'�l�ments, les �l�ments du tableau, la valeur � remplacer, et la nouvelle valeur.
*/

void Remplacer_un_Element () {
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	int val_rech = 0;
	int val_remp = 0;
	printf("donner la valeur a rechercher pour les remplacer : ");
	scanf("%d",&val_rech);
	printf("donner la valeur de remplacement : ");
	scanf("%d",&val_remp);
	for(i=0; i<n;i++){
		if(tab[i] == val_rech){
			tab[i] = val_remp;
		}
	}
	printf("******************le tableaux apres le remplacement ******************\n");
	for(i = 0; i<n ;i++){
		printf("tab [%d] = %d \n",i,tab[i]);
	}
}

/*
Challenge 12 :
�crivez un programme C qui affiche uniquement les �l�ments pairs d'un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.
*/

void  Afficher_les_Elements_Paire(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	printf("******************les elements pair tableaux ******************\n");

	for(i=0;i<n;i++){
		if(tab[i]%2 == 0){
			printf("tab [%d] = %d \n",i,tab[i]);
		}
	}
}

/*
Challenge 13 :
�crivez un programme C qui affiche uniquement les �l�ments impairs d'un tableau d'entiers.
Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.
*/

void  Afficher_les_Elements_Impairs(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
	}
	printf("******************les elements pair tableaux ******************\n");

	for(i=0;i<n;i++){
		if(tab[i]%2 == 1){
			printf("tab [%d] = %d \n",i,tab[i]);
		}
	}
}

/*
Challenge 14:
�crivez un programme C qui calcule la moyenne des �l�ments d'un tableau d'entiers. 
Le programme doit demander le nombre d'�l�ments, les �l�ments du tableau, puis afficher la moyenne.
*/

void calculer_moyenne(){
	int tab[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	float moy = 0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab[i]);
		moy+=tab[i];
	}
	moy/=n;
	printf("la moyenne des element est : %.2f\n",moy);
}

/*
Challenge 15:
�crivez un programme C qui fusionne deux tableaux d'entiers en un seul tableau. 
Le programme doit demander � l'utilisateur le nombre d'�l�ments pour chaque tableau, puis les �l�ments des deux tableaux, 
et afficher le tableau fusionn�.
*/

void Fusion_de_Deux_Tableaux(){
	int tab_1[M];
	int n;
	printf("donner la taille du tableaux : ");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab_1[i]);
	}
	int tab_2[M];
	int m ;
	printf("donner la taille du tableaux : ");
	scanf("%d",&m);
	i=0;
	for(i=0;i<n;i++){
		printf("tab [%d] = ",i);
		scanf("%d",&tab_2[i]);
	}
	int *tab_3;
	tab_3 = malloc(sizeof(int) * (n+m));
	for(i=0;i<n;i++){
		tab_3[i] = tab_1[i];
	}
	int j=0;
	for(i = n;i<n+m;i++){
		tab_3[i] = tab_2[j++]; 
	}
	printf("**************** le tableaux merger ********************\n");
	for(i=0;i<n+m;i++){
		printf("tab [%d] = %d \n",i,tab_3[i]);
	}
}











