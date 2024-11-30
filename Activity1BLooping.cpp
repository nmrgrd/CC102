#include<iostream>
using namespace std;

int main(){
	
	for (int a=1; a<=8; a=a+1){
		for (int z=8; z>=1; z=z-1){
			if (a>z){
				cout<<" ";
			}
			else {
				cout<<"#";
			}
		}
		cout<<endl;
	}
	return 0;
}

