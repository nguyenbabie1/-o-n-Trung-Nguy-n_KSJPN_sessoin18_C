#include <stdio.h>
 
int main(){
	struct Student{
		int id;
		char fullName[100];
		int age;
		char phone[100];
	};
	//Khai bao bien tu cau truc
	struct Student ptit={1,"Dinh Nguyen Bao Anh",16,"0833220678"};
	struct Student ptit2;
	//Truy xuat
	printf("In thong tin sinh vien:\n");
	printf("%d\n", ptit.id);
	printf("%s\n", ptit.fullName);
	printf("%d\n", ptit.age);
	printf("%s\n", ptit.phone);
}
