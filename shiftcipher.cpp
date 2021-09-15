#include<iostream>
#include<string.h>

using namespace std;

int main() {
   cout<<"Masukan Teks:\n";
   char msg[100];
   cin.getline(msg,100); 
   int i, j, length,choice,key;
   cout << "Masukan kunci: ";
   cin >> key; //key sebagai input
   length = strlen(msg);


   cout<<"Apa yang ingin anda lakukan \n1. Enkripsi \n2. Dekripsi \n";
   cin>>choice;
   if (choice==1) {
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //enkripsi lowercase
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
         }
         //enkripsi uppercase
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      printf("Cipherteks: %s", msg);
   }
   else if (choice == 2) { 
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //dekripsi lowercase
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         //dekripsi uppercase
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Plainteks : " << msg;
   }
}