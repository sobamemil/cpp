#include<iostream>
using namespace std;

#include "4-8.h"	

int main() {
	int r, num, cnt=0;
	cout << "원의 개수 >> ";
	cin >> num ;
	Circle *pArray = new Circle[num];
	for(int i=0; i<num; i++){
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		pArray->setRadius(r);
		if(pArray->getArea() > 100) cnt++;
		pArray++; 
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}
