#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void strcpy(char *s1, char *s2);
void strcat(char *s1, char *s2, char *s6);
void strrev(char *s1, char *s4, char *s2, char *s5);
void strcmp(char *s1, char *s2);

int main(){
	
	int choice;
	char s1[20], s2[20], s3[20], s4[20], s5[20], s6[20];
	
	cout<<"\nEnter first message: ";
	gets(s1);
	cout<<"Enter second message: ";
	gets(s2);
	while(1){
		system("cls");
		cout<<"First Message: ";
		puts(s1);
		cout<<"Second Message: ";
		puts(s2);
	
		cout<<"\nMAIN MENU\n";
		cout<<"1. Strcat\n";
		cout<<"2. Strcpy\n";
		cout<<"3. Strrev\n";
		cout<<"4. Strcmp\n";
		cout<<"5. Exit\n";
	
		cout<<"CHOICE: ";
		cin>>choice;
		switch(choice)
		{
			case 1: {
				strcat(s1, s2, s6);
				cout << "\nstrcat: " << s6;
				break;
			}
			case 2: {
				strcpy(s3,s2);
				cout << "\nstrcpy: " << s3;
				break;
			}
			case 3: {
				strrev(s1, s4, s2, s5);
				cout <<"\nstrrev: \n\tFirst Message: "<<s4<<"\n\tSecond Message: "<<s5;
				break;
			}
			case 4: strcmp(s1, s2); break;
			case 5: exit(1); break;
			default: break;
		}
		getch();
	}
	
	getch();
	return 0;
}

void strcat(char *s1, char *s2, char *s6){
	
	while (*s6=*s1++)
		*s6++;
	while (*s6++=*s2++);
}
void strcpy(char *s1, char *s2){
	while (*s1++=*s2++);
}
void strrev(char *s1, char *s4, char *s2, char *s5){
	while (*s1)
		*s1++;
	while(*s4++=*--s1);
	
	while (*s2)
		*s2++;
	while(*s5++=*--s2);
}
void strcmp(char *s1, char *s2){
	int a(0);
	while(*s1++&&*s2++){
		if (*s1==*s2)
			;
		else
			a++;
	}
	while(*s2++){
		if (*s2++==*s1++)
			;
		else
			a++;
	}
	if (a==0)
		cout<<"\nstrcmp: EQUAL";
	else
		cout<<"\nstrcmp: NOT EQUAL";
}
