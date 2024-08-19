#ifndef CRESCENTE_H_INCLUDED
#define CRESCENTE_H_INCLUDED
#include "Algoritimos.h"

void crescente(int algoritimo, int tam, FILE *ftp, FILE *saida, FILE *T){
	int n = 0,seed, *A;
	double tempo;
	srand(time(NULL));
    seed = (rand() % 1000000) * 101 * 100;
    char arquivo[60],arquivo2[60],arquivo3[60];
    switch(algoritimo){
    	case 1:
            cout << endl << "Insertion Sort" << endl;
            strcpy(arquivo, "Insertion_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Insertion_Sort//Saida//crescente//");
            strcpy(arquivo3, "Insertion_Sort//Tempo//crescente//");
            break;
            
        case 2:
        	cout << endl << "Bubble Sort" << endl;
            strcpy(arquivo, "Bubble_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Bubble_Sort//Saida//crescente//");
            strcpy(arquivo3, "Bubble_Sort//Tempo//crescente//");
            break;
            
        case 3:
        	cout << endl << "Selection Sort" << endl;
            strcpy(arquivo, "Selection_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Selection_Sort//Saida//crescente//");
            strcpy(arquivo3, "Selection_Sort//Tempo//crescente//");
            break;
            
        case 4:
        	cout << endl << "Shell Sort" << endl;
            strcpy(arquivo, "Shell_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Shell_Sort//Saida//crescente//");
            strcpy(arquivo3, "Shell_Sort//Tempo//crescente//");
            break;
		case 5:
        	cout << endl << "Merge Sort" << endl;
            strcpy(arquivo, "Merge_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Merge_Sort//Saida//crescente//");
            strcpy(arquivo3, "Merge_Sort//Tempo//crescente//");
            break;
            
        case 6:
        	cout << endl << "Quick Sort" << endl;
            strcpy(arquivo, "Quick_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Quick_Sort//Saida//crescente//");
            strcpy(arquivo3, "Quick_Sort//Tempo//crescente//");
            break;
        case 7:
        	cout << endl << "Heap Sort" << endl;
            strcpy(arquivo, "Heap_Sort//Entrada//crescente//");
            strcpy(arquivo2, "Heap_Sort//Saida//crescente//");
            strcpy(arquivo3, "Heap_Sort//Tempo//crescente//");
            break;
	}
	switch(tam){
		case 1:
            cout << "Tamanho 10" << endl;
            n = 10;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "10crescente.txt");
            strcat(arquivo2, "10crescente.txt");
            strcat(arquivo3, "10tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"10\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            
            if(algoritimo == 1){
                tempo = Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
			if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
			if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
            
        case 2: 
        cout << "Tamanho 100" << endl;
            n = 100;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "100crescente.txt");
            strcat(arquivo2, "100crescente.txt");
            strcat(arquivo3, "100tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"100\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algoritimo == 1){
                tempo = Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
				if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
			if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
			            
        case 3: 
        cout << "Tamanho 1000" << endl;
            n = 1000;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "1000crescente.txt");
            strcat(arquivo2, "1000crescente.txt");
            strcat(arquivo3, "1000tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"1000\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algoritimo == 1){
               tempo = Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
				if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
			
			if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
            
        case 4: 
        cout << "Tamanho 10000" << endl;
            n = 10000;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "10000crescente.txt");
            strcat(arquivo2, "10000crescente.txt");
            strcat(arquivo3, "10000tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"10000\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algoritimo == 1){
                tempo = Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
				if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
			
            if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
        case 5: 
        cout << "Tamanho 100000" << endl;
            n = 100000;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "100000crescente.txt");
            strcat(arquivo2, "100000crescente.txt");
            strcat(arquivo3, "100000tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"100000\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            cout << endl;
			cout << "--------------------------------------------------------------" << endl;
            if(algoritimo == 1){
                Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
				if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
		if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
            
        case 6:
        	cout << "Tamanho 1000000" << endl;
            n = 1000000;
            A = (int*)calloc(n,sizeof(int));
            cout << "seed:" << seed << endl;
            strcat(arquivo, "1000000crescente.txt");
            strcat(arquivo2, "1000000crescente.txt");
            strcat(arquivo3, "1000000tempo.txt");
            ftp = fopen(arquivo, "w");
            fprintf(ftp,"1000000\n");
            for(int j = 0; j < n; j++){
                seed++;
                A[j] = seed;
                fprintf(ftp,"%d\n", A[j]);
            }
            fclose(ftp);
            printf("\n-----------------------------------\n");
            if(algoritimo == 1){
               tempo = Insertion_sort(A,n);
			}
			if(algoritimo == 2){
				tempo = Bubble_sort(A,n);
			}
			if(algoritimo == 3){
				tempo = Selection_sort(A,n);
			}
			if(algoritimo == 4){
				tempo = Shell_sort(A,n);
			}
			if(algoritimo == 5){
				tempo = merge_sort(A,0,n-1);
			}
			if(algoritimo == 6){
				tempo = quick_sort(A,0,n-1);
			}
			if(algoritimo == 7){
				int opch;
				constroi(A,n);  ///BUILD
				do{
				system("cls");
				heap_hud();
				cin >> opch;
				if(opch > 0 && opch <= 5){
				if(opch == 5)
				break;
				switch(opch){
                case 1:
                	tempo = heap_sort_min(A,n);
                	cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
                	system("pause");
                    break;
                case 2:
                    cout << "Elemento minimo: " << heap_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 3:
                	cout << "Elemento minimo: " << heap_extract_min(A,n) << endl;
                    system("pause");
                    break;
                    
                case 4: 
                   	int key;
                	cout << "Digite a posicao" << endl;
                	cin >> key;
                	min_heap_insert(A,n,key);
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
				}while(opch != 5);
			}
			if(algoritimo !=7){
            cout << "Ordenacao Concluida" << endl;
            saida = fopen(arquivo2, "w");
            for(int k = 0; k < n; k++){
                fprintf(saida, "%d\n", A[k]);
            }
            fclose(saida);
            T = fopen(arquivo3, "w");
            fprintf(ftp, "Tempo de exec foi: %.5lf", tempo);
            fclose(T);
            free(A);
        }
            break;
        
        default: 
        cout << "Valor Invalido" << endl;
        break;
	} 
}
#endif	






