#include<stdio.h>
#include<string.h>
#include<iostream>
typedef char string[100];
typedef int arr[200];

void XacDinhTanSuat(string s, arr F);
void print_CS36(arr F);
void Print_CS8(arr F);
void Print_CS4(arr F);
int main(int argc, char** argv)
{
	string s;
	printf("\n Nhap vao chuoi can thong ke: ");
	fflush(stdin); gets(s);
	arr F;
	XacDinhTanSuat(s, F);
	printf("\nTan suat xuat hien cac ki tu:\n");print_CS36(F);
	printf("\nCac ki tu xuat hien nhieu lan nhat:\n");Print_CS4(F);
	printf("\nCac ki tu chi xuat hien 1 lan:\n");Print_CS8(F);
	return 0;
}
void XacDinhTanSuat(string s, arr F)
{
	for (int i=0;i<26;i++)  F[i]=0;
	for (int j=0; s[j]!='\0'; j++)
	     if(isalpha(s[j]))
	    {
		char c;
		if(isupper(s[j]))
		 	c=tolower(s[j]);
		else
			c=s[j]; 
		F[c-'a']++;
	}
}
void print_CS36(arr F)
{
		for (int i=0;i<26;i++)  
			if(F[i]>0)
				printf("%c:%d; ", char(i+'a') , F[i]);
}
int FindMax(arr F)
{
	int m=0;
	for(int i=0;i<26;i++)
	{
		if(F[i]>m)
		m=F[i];
	}
	return m;
}
void Print_CS4(arr F)
{
	int m=FindMax(F);
	for(int i=0;i<26;i++)
		if(F[i]==m)
			printf("%c: %d; ", char(i+ 'a'), F[i]);
}
void Print_CS8(arr F)
{
	int m=FindMax(F);
	for(int i=0;i<26;i++)
		if(F[i]==1)
			printf("%c: %d; ", char(i+ 'a'), F[i]);
}
