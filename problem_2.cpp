#include <iostream>

using namespace std;

int  number_of_matches (char arr1[], char arr2[])
{
   int counter1=0 ;
   for(int i =0 ; i<sizeof(arr1);i++){


        if(arr1[i]==arr2[i]){

            counter1+=1;
            cout<<"arr1 is :"<<arr1[i]<<" arr2 is : "<<arr2[i]<<"\n";
        }
   }
   cout<<"number of non-NUL characters : "<<counter1;
}

int main()
{
    int char1 , char2;
   cout<<"enter your size of first character : ";
   cin>>char1;
   char arr1[char1+1];
   cout<<"enter your character : ";
   for (int i=0 ; i <char1;i++)
   {
       cin>>arr1[i];
   }
   arr1[char1]='\0';
   cout<<"enter your size of second character : ";
   cin>>char2;
   char arr2[char2+1];
   cout<<"enter your character : ";
   for (int i=0 ; i <char2;i++)
   {
       cin>>arr2[i];
   }
   arr2[char2]='\0';

   number_of_matches ( arr1,  arr2);
    return 0;
}
