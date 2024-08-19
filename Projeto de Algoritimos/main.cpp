#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include"decrescente.h"
#include"crescente.h"
#include"randomico.h"

using namespace std;

int main(){
	
	int opcao1, opcao2, entrada;
	FILE *ftp = NULL, *saida = NULL, *T = NULL;
	do{
		system("cls");
		cout << "--------------------------------------------------------------" << endl;
		cout << "\t\t******ALGORITMOS******\t\t\t\t" << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "1. Insertion Sort" << endl;
		cout << "2. Bubble Sort" << endl;
		cout << "3. Selection Sort" << endl;
		cout << "4. Shell Sort" << endl;
		cout << "5. Merge Sort" << endl;
		cout << "6. Quick Sort" << endl;
		cout << "7. Heap Sort(minimo)" << endl;
		cout << "8. Sair" << endl;
		cin >> opcao1;
		if(opcao1 > 0 && opcao1 <= 8){
			if(opcao1 == 8)
			break;
			Criar_Pastas(opcao1);
			entradas();
            cin >> entrada;
            tipo_entrada();
            cin >> opcao2;
			switch(opcao2){
                case 1:
                    crescente(opcao1, entrada,ftp,saida,T);
                    cout << "Crescente" << endl;
                    system("pause");
                    break;
                case 2:
                    decrescente(opcao1, entrada,ftp,saida,T);
                    cout << "Decrescente" << endl;
                    system("pause");
                    break;
                case 3:
                    randomico(opcao1, entrada,ftp,saida,T);
                    cout << "Randomica" << endl;
                    system("pause");
                    break;
                default:
                    cout << "Valor invalido" << endl;
                    system("pause");
                    break;
            } 
		}else{
			cout << "Valor invalido" << endl;
			system("pause");
		}
		
	}while(opcao1 != 8);
}







