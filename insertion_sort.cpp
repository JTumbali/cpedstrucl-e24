#include <iostream>
using namespace std;

int main(){
	int A[]={40, 30, 20, 50, 10};
	int j;
	for(int i=5;i>1;i--){
		for(i=1;i<5;i++){
			int tmp=A[i];
			for(j=i-1;j>=0 && tmp<A[j];j--){
				A[j+1] = A[j];
			}
			A[j+1]= tmp;
			for(int i= 0; i<5; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		cout<<endl;
	}
	cout<<"The sorted array is: "<<endl;
	for(int i= 0; i<5;i++){
		cout<<A[i]<<" ";
}
return 0;
}
}
