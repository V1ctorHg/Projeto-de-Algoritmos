#ifndef ALGORITIMOS_H_INCLUDED
#define ALGORITIMOS_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<ctime>
#include <string.h>

using namespace std;

void entradas(){
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
		cout << "\t\t******TAMANHO******\t\t\t\t" << endl;
		cout << "--------------------------------------------------------------" << endl;
    printf("1. 10 numeros\n");
    printf("2. 100 numeros\n");
    printf("3. 1.000 numeros\n");
    printf("4. 10.000 numeros\n");
    printf("5. 100.000 numeros\n");
    printf("6. 1.000.000 numeros\n");
}

void tipo_entrada(){
	cout << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "\t\t******ENTRADA******\t\t\t\t" << endl;
		cout << "--------------------------------------------------------------" << endl;
    printf("1. Crescente\n");
    printf("2. Decrescente\n");
    printf("3. Randomica\n");
}


void Criar_Pastas(int op){
	if(op == 1){
		system("mkdir Insertion_Sort\\Entrada\\Crescente");
		system("mkdir Insertion_Sort\\Entrada\\Decrescente");
		system("mkdir Insertion_Sort\\Entrada\\Randomico");
		system("mkdir Insertion_Sort\\Saida\\Crescente");
		system("mkdir Insertion_Sort\\Saida\\Decrescente");
		system("mkdir Insertion_Sort\\Saida\\Randomico");
		system("mkdir Insertion_Sort\\Tempo\\Crescente");
		system("mkdir Insertion_Sort\\Tempo\\Decrescente");
		system("mkdir Insertion_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	if(op == 2){
		system("mkdir Bubble_Sort\\Entrada\\Crescente");
		system("mkdir Bubble_Sort\\Entrada\\Decrescente");
		system("mkdir Bubble_Sort\\Entrada\\Randomico");
		system("mkdir Bubble_Sort\\Saida\\Crescente");
		system("mkdir Bubble_Sort\\Saida\\Decrescente");
		system("mkdir Bubble_Sort\\Saida\\Randomico");
		system("mkdir Bubble_Sort\\Tempo\\Crescente");
		system("mkdir Bubble_Sort\\Tempo\\Decrescente");
		system("mkdir Bubble_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	if(op == 3){
		system("mkdir Selection_Sort\\Entrada\\Crescente");
		system("mkdir Selection_Sort\\Entrada\\Decrescente");
		system("mkdir Selection_Sort\\Entrada\\Randomico");
		system("mkdir Selection_Sort\\Saida\\Crescente");
		system("mkdir Selection_Sort\\Saida\\Decrescente");
		system("mkdir Selection_Sort\\Saida\\Randomico");
		system("mkdir Selection_Sort\\Tempo\\Crescente");
		system("mkdir Selection_Sort\\Tempo\\Decrescente");
		system("mkdir Selection_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	if(op == 4){
		system("mkdir Shell_Sort\\Entrada\\Crescente");
		system("mkdir Shell_Sort\\Entrada\\Decrescente");
		system("mkdir Shell_Sort\\Entrada\\Randomico");
		system("mkdir Shell_Sort\\Saida\\Crescente");
		system("mkdir Shell_Sort\\Saida\\Decrescente");
		system("mkdir Shell_Sort\\Saida\\Randomico");
		system("mkdir Shell_Sort\\Tempo\\Crescente");
		system("mkdir Shell_Sort\\Tempo\\Decrescente");
		system("mkdir Shell_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	if(op == 5){
		system("mkdir Merge_Sort\\Entrada\\Crescente");
		system("mkdir Merge_Sort\\Entrada\\Decrescente");
		system("mkdir Merge_Sort\\Entrada\\Randomico");
		system("mkdir Merge_Sort\\Saida\\Crescente");
		system("mkdir Merge_Sort\\Saida\\Decrescente");
		system("mkdir Merge_Sort\\Saida\\Randomico");
		system("mkdir Merge_Sort\\Tempo\\Crescente");
		system("mkdir Merge_Sort\\Tempo\\Decrescente");
		system("mkdir Merge_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	if(op == 6){
		system("mkdir Quick_Sort\\Entrada\\Crescente");
		system("mkdir Quick_Sort\\Entrada\\Decrescente");
		system("mkdir Quick_Sort\\Entrada\\Randomico");
		system("mkdir Quick_Sort\\Saida\\Crescente");
		system("mkdir Quick_Sort\\Saida\\Decrescente");
		system("mkdir Quick_Sort\\Saida\\Randomico");
		system("mkdir Quick_Sort\\Tempo\\Crescente");
		system("mkdir Quick_Sort\\Tempo\\Decrescente");
		system("mkdir Quick_Sort\\Tempo\\Randomico");	
		system("cls");
	}
	
	if(op == 7){
		system("mkdir Heap_Sort\\Entrada\\Crescente");
		system("mkdir Heap_Sort\\Entrada\\Decrescente");
		system("mkdir Heap_Sort\\Entrada\\Randomico");
		system("mkdir Heap_Sort\\Saida\\Crescente");
		system("mkdir Heap_Sort\\Saida\\Decrescente");
		system("mkdir Heap_Sort\\Saida\\Randomico");
		system("mkdir Heap_Sort\\Tempo\\Crescente");
		system("mkdir Heap_Sort\\Tempo\\Decrescente");
		system("mkdir Heap_Sort\\Tempo\\Randomico");	
		system("cls");
	}
}


double Insertion_sort(int A[], int tam){
	double tempo; 
	clock_t start,end;
	start = clock();
	int chave, i, j;
		for(j=1;j<tam;j++){
			chave = A[j];
			i = j-1;
			while(i>=0 && A[i]> chave){
				A[i+1] = A[i];
				i--;
			}
		A[i+1] = chave;
		}
	end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}

double Bubble_sort(int A[], int tam){
	double tempo; 
	clock_t start,end;
	start = clock();
	int aux, i, j;
		for(i = 1; i <= (tam - 1);i++){
			for(j = 1; j <= (tam - i);j++){
				if(A[j] > A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;	
				}
			}
		}
	end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}

double Selection_sort(int A[], int tam){
	double tempo; 
	clock_t start,end;
	start = clock();
	int i, j, aux, menor;
	for(i = 0; i < (tam -1); i++){
		menor = i;
		for(j = i+1; j < tam; j++){
			if(A[j] < A[menor])
			menor = j;
		}
		aux = A[menor];
		A[menor] = A[i];
		A[i] = aux;
	}
	end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}

double Shell_sort(int A[], int tam){
	double tempo; 
	clock_t start,end;
	start = clock();
	int h, i, j, aux;
	h = 1;
	while(h < tam/3)
	h = 3*h + 1;
	while(h>0){
		for(i = h; i < tam; i++){
			aux = A[i];
			j = i;
			while(j >= h && A[j-h] > aux){
				A[j] = A[j-h];
				j -= h;
			}
			A[j] = aux;
		} 
		h = (h-1)/3;		
	}
	end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}


int particiona1(int vet[], int p , int r){
	int pivo = vet[p];
	int i = p-1;
	int j = r+1, aux;
	while(vet[i] > pivo)
	i++;
	while(vet[j]<pivo)
	j--;
	
	if(i < j){
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
	aux = vet[p];
	vet[p] = vet[j];
	vet[j] = aux;
	
	return i;	
}

int particiona2(int vet[], int p , int r){ //Media
    int pivo = vet[(p + r)/2];
    int i = p;
    int j, aux;
    for(j = p+1;j<=r;j++){
        if(vet[j] <= pivo){
            i+=1;
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
    aux = vet[p];
    vet[p] = vet[i];
    vet[i] = aux;

    return i;
}
int particiona4(int vet[], int p, int r){ //Random
    //srand(time(NULL));
    int random = r - p + 1;
    int pivo_random = (int)(rand() * random) + p;

    int aux  = vet[p];
    vet[p] = pivo_random;
    pivo_random = aux;
    
    int pivo = vet[p];
    int i = p;
    int j, troca;
    for(j = p+1;j<=r;j++){
        if(vet[j] <= pivo){
            i+=1;
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = troca;
        }
    }
    troca = vet[p];
    vet[p] = vet[i];
    vet[i] = troca;

    return i;

}
int particiona3(int vet[], int p , int r){ //Mediana
    int mediana = (p+r)/2;

    int aux[] = {vet[p],vet[mediana],vet[r]};
    int pivoMediana, pivoReal;
    if(aux[0] < aux[1]){
        if(aux[1] < aux[2]){
            pivoMediana = mediana;
        }else{
            if(aux[0] < aux[2]){
                pivoMediana = r;
            }else{
                pivoMediana = p;
            }
        }
    }else{
        if(aux[2] < aux[1]){
            pivoMediana = mediana;
        }else{
            if(aux[2] < aux[0]){
                pivoMediana = r;
            }else{
                pivoMediana = p;
            }
        }
    }
    int troca = vet[pivoMediana];
    vet[pivoMediana] = vet[r];
    vet[r] = troca;

    pivoReal  = vet[r];
    int i = p-1;
    int j;
    for(j = p;j<=r-1;j++){
        if(vet[j] <= pivoReal){
            i+=1;
            int aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
    int troca2 = vet[r];
    vet[r] = vet[i+1];
    vet[i+1] = troca2;

    return i+1;

}

double quick_sort(int vet[] , int p , int r){
	double tempo; 
	clock_t start,end;
	start = clock();
	int p_pivo;
	if(p < (r - 1)){
		p_pivo = particiona3(vet,p,r);
		quick_sort(vet,p,p_pivo -1);
		quick_sort(vet,p_pivo+1,r);
	}
	end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}


void merge(int *array, int inicio, int meio, int fim){

    int *temp,p1,p2,tamanho,i,j,k;
    int fim1 = 0,fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int*)malloc(tamanho*sizeof(int));
    if(temp!=NULL){
        for(i=0;i<tamanho;i++){
            if(!fim1 && !fim2){
                if(array[p1]<array[p2])
                    temp[i] = array[p1++];
                else
                    temp[i]= array[p2++];

                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }else{
                if(!fim1)
                    temp[i]=array[p1++];
                else
                    temp[i]=array[p2++];
            }
        }
        for(j=0,k=inicio;j<tamanho;j++,k++)
            array[k]=temp[j];
    }
    free(temp);
}

double merge_sort(int vet[], int p, int size_vet){
	double tempo; 
	clock_t start,end;
	start = clock();
    if(p < size_vet){
        int q = (size_vet+p)/2;

        merge_sort(vet,p,q);
        merge_sort(vet,q+1,size_vet);
        merge(vet,p,q,size_vet);
    }
    end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
}


//HEAP SORT
	void verifica(int vet[], int size, int i){  //HEAPFY
		int esq = 2*i + 1;
		int dir = 2*i + 2;
		int menor;
		
		if (esq < size &&  vet[esq] < vet[i])
		menor = esq;  
		else menor = i;
		
		if(dir < size && vet[dir] < vet[menor])
		menor = dir;
		
		if(menor != i){
			int aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] = aux;
			verifica(vet,size,menor);
		}
	}
	
	void constroi(int vet[], int size){		//BUILD
		for(int i = ((size/2)-1); i >=0; i-- ){
			verifica(vet,size,i);
		}
	}
	
	double heap_sort_min(int vet[], int size){
		double tempo; 
	clock_t start,end;
	start = clock();
				
		for(int i = size-1; i>0; i--){
			int aux = vet[0];
			vet[0] = vet[i];
			vet[i] = aux;
			verifica(vet,i,0);
		}
		 end = clock();
	tempo = (end - start) / (double)CLOCKS_PER_SEC;
	return tempo;
	}


//FILA DE PRIORIDADE

int heap_min(int vet[], int size){
	return vet[0];
}

int heap_extract_min(int vet[], int size){
	int menor;
	if(size < 0){
		cout << "Error";
		return 0;	
	}
	menor = vet[0];
	vet[0] = vet[size];
	size = size-1;
	verifica(vet,size,0);
	return menor;
}

int parents(int size ){
	if(size = -1)
	return 1;
	return size/2;
}

void heap_increase_key(int vet[],int size, int key){
	if(key < vet[size])
	exit(1);
	
	vet[size] = key;
	while(size > 0 && vet[parents(size)] < vet[size]){
		int aux = vet[size];
		vet[size] = vet[parents(size)];
		vet[parents(size)] = vet[size];
	}
}

void min_heap_insert(int vet[], int size, int key){
	size = size + 1;
	vet[size] = 0;
	heap_increase_key(vet,size,key);
}

void heap_hud(){
	cout << "--------------------------------------------------------------" << endl;
		cout << "\t\t******Heap_Sort_Minimo******\t\t\t\t" << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "1. Heap_Sort" << endl;
		cout << "2. Heap_Minimo" << endl;
		cout << "3. Heap_Extract_Minimo" << endl;
		cout << "4. Heap_Increase_Key" << endl;
		cout << "5. Sair" << endl;
}

#endif




















