#include <stdlib.h>
#include <stdio.h>
#define Max 100
int somme(int a,int b){
	return a+b;
}

int multip(int a ,int b){
	return a*b;
}

int max (int a,int b){
	if(a>=b){
		return a;
	}
	else{
		return b;
	}
}

int min (int a,int b){
	if(a<=b){
		return a;
	}
	else{
		return b;
	}
}

int factoriel(int n){
	int fact=1;
	while(n!=0){
		fact*=n;
		n--;
	}
	return fact;
}

int Fibonacci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return Fibonacci(n-1) + Fibonacci(n-2);
}

void inverser(char tab[Max] ,int n){
	int i;
	for(i=n-1;i>=0;i--){
		printf("%c",tab[i]);
	}
}

int Fonction_de_Verification_de_Parite(int n){
	if(n%2 == 0){
		return 1;
	}
	return 0;
}




