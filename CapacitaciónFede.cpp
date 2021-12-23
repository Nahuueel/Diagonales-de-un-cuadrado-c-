#include <iostream>
#include <stdlib.h>     
#include <time.h>

using namespace std;

int main(){
	
	int tam;
	cout<<"ingrese el tamaño de la matriz"<<endl;
	cin>>tam;
	system("cls");
	
	int m[tam][tam];
	int diago[2]{0,0};	
	
	srand (time(NULL));
	for(int i = 0; i < tam; i++){	
		for(int e = 0; e < tam; e++){
			m[i][e] = rand() % 100;
		}
	}

	for(int i = 0; i < tam; i++){	
		for(int e = 0; e< tam; e++){
			if (i == e)diago[0] = diago[0] + m[i][e];
			if (e+i == tam-1)diago[1] = diago[1] + m[i][e];
		}
	}

	for(int i = 0; i < tam; i++){	
		for(int e = 0; e< tam; e++){
			cout<<"\t"<<m[i][e];
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Suma de la primera diagonal: "<<diago[0]<<endl;
	cout<<"Suma de la segunda diagonal: "<<diago[1]<<endl;


	return 0;
}
