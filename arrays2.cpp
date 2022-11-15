/*
the program is about sum up 2 different matrix 
programer : Abdul Halim
Nick Name : Halim*/
#include <iostream>
using namespace std;
#include <conio.h>
#define N 3

main(){
	int i,x,matriks_1[N][N],matriks_2[N][N],matriks_3[N][N];
	
	cout <<"Name : Abdul Halim\nNIM : 22343001";
	cout <<"program to count 2 matriks with ordo N \n";
	cout <<"-----------------------------------------------------\n\n";
	
	// add Matrix 1
	cout <<"DATA MATRIX 1\n\n";
	for(i=0;i<N;++i){
		for(x=0;x<N;++x){
			cout <<"DATA LINE-"<<i+1<<" COLUMN-"<<x+1<<" : ";
			cin >>matriks_1[i][x];
		}
	}
	//add matrix 2
	cout <<"\n\nDATA MATRIX 2 \n\n";
	for(i=0;i<N;++i){
		for(x=0;x<N;++x){
			cout <<"DATA LINE-"<<i+1<<" COLUMN- "<<x+1<<" : ";
			cin >>matriks_2[i][x];
		}
	}
	for(i=0;i<N;++i){
		for(x=0;x<N;++x){
			matriks_3[i][x] = matriks_2[i][x] + matriks_1[i][x];
		}
	}
	
	// pop up result
	cout <<"\n\n------RESULT------\n\n";
	for (i=0; i<N ; ++i){
		for (x=0; x<N; ++x){
			cout <<matriks_3[i][x]<<"\t";
			
			if (x == N-1)
			cout <<"\n\n";
		}
	}
	return 0;
}
