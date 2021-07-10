#include<iostream>
using namespace std;

void func(int a){
	a = 10;
	a = 20;
}

int main(){
	int a=10;
	a = 20;
	func(a);
	return 0;
}
