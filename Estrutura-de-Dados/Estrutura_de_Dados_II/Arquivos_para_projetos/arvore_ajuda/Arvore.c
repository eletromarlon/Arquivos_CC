#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"
	
	ArvoreBinaria *criar() {
		 ArvoreBinaria *arv = (ArvoreBinaria *)malloc(sizeof(ArvoreBinaria));
		 if (arv != NULL) {
			arv->raiz = NULL;
		 }
		 return arv;
	}
	
	//criar raiz (root)
	No *criarRaiz(ArvoreBinaria *arvore, int valor) {
		 arvore->raiz = (No *) malloc(sizeof (No));
		 if (arvore->raiz != NULL) {
			 arvore->raiz->filhoEsquerda = NULL;
			 arvore->raiz->filhoDireita = NULL;
			 arvore->raiz->valor = valor;
		 }
		 return arvore->raiz;
	}
	
 
