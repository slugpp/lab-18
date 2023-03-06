#include<iostream>
using namespace std;
void myString(int *&p,int N){
	p = new int[N];    
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	p = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
