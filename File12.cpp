#include <iostream.h>
void karsilama(){
 cout<<"Lutfen bekleyiniz hesap makinesi yukleniyor ";
 for (int i=0; i < 3; i++) {
  cout<<"*";
  for (int j=0; j < 2000000000; j++);}
  system("cls");}
int menu(float sayi){
 float sayi2;
 char a;
 while(1){
 cout<<"islem giriniz"<<endl;
 cin>>a;
 if(a=='=') cout<<sayi<<endl;
 else if(a=='+') {
     cout<<"sayi giriniz"<<endl;
	 cin>>sayi2;
	 sayi+=sayi2;}
 else if(a=='/') {
	 cout<<"sayi giriniz"<<endl;
	 cin>>sayi2;
	 sayi/=sayi2;}
 else if(a=='-') {
	 cout<<"sayi giriniz"<<endl;
	 cin>>sayi2;
	 sayi-=sayi2;}
 else if(a=='*') {
	 cout<<"sayi giriniz"<<endl;
	 cin>>sayi2;
	 sayi*=sayi2;}}}
main(){
  float sayi;
  karsilama();
  cout<<"hos geldiniz"<<endl;
  cout<<"sayi giriniz"<<endl;
  cin>>sayi;
  menu(sayi);
  getchar();
  getchar();}
