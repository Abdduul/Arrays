/*
program name : arrays.c
the program is about making arrays from couples of data
programer	: Abdul Halim
*/
#include <iostream>
#include <string.h>
using namespace std;
#define N 5

main(){
	char hewan[N][30];
	int i;
	
	cout<< "Name : Abdul Halim\nNIM: 22343001\n";
	cout<< "-------------------------------------------------------------------------------------\n\n";
	cout<< "name something you love so much \n";
	for (i=0; i<N;++i){
	cout<<"data"<<i+1<<" : "; 
	gets(hewan[i]);
	}
	
	//menampilkan hasil data
	printf("\n\ndata that already taken: \n");
	for(i=0;i<N;++i){
		cout<<hewan[i]<<endl;
	}
}
