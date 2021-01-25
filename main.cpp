#include <iostream>
#include<string>
#include<cstring>
#include <iomanip>

/*
Author: Joanne Tran
This program takes user input and then computes and displays the occurrences of vowel letters.
*/

using namespace std;

const char UPPER_VOWELS [ ] = "AEIOU";
const char LOWER_VOWELS [ ] = "aeiou";

int isVowel(char c)//vowel identification
{
    if(c=='A'||c=='a')
        return 0;
    else if(c=='E'||c=='e')
        return 1;
    else if(c=='I'||c=='i')
        return 2;
    else if(c=='O'||c=='o')
        return 3;
    else if(c=='U'||c=='u')
        return 4;
    else
        return -1;
}
int main()
{
    char c;
    cout<<"This program counts the vowel occurrences in input phase\n";

    while(c !=-1)//loop for taking input from user
    {
    int vowel[5]={0};//array to store vowel count
    char ch[300];//array to take input from user
     cout<<"Enter a phrase and hit Enter (maximum length 299): ";
     cin.getline(ch,300);//taking input from user
     if(char()==0)

     cout<<"Vowel"<<"   Count"<<setw(5)<<endl;
     string v1="aeiou";
     string v2="AEIOU";

     int total=0;//total count of vowel

     for(int i=0;i<strlen(ch);i++)//loop till length of string
     {
        // cout<<ch[i]<<" ";
         if(isVowel(ch[i])!=-1)//if vowel character
         {
             //cout<<ch[i]<<" ";
             vowel[isVowel(ch[i])]++;//incrementing vowel count
             total++;//incrementing total
         }

     }

     cout<<"a - A "<<setw(5)<< vowel[0]<<"\n";//printing vowel count
     cout<<"e - E "<<setw(5)<<vowel[1]<<"\n";
     cout<<"i - I "<<setw(5)<<vowel[2]<<"\n";
     cout<<"o - O "<<setw(5)<<vowel[3]<<"\n";
     cout<<"u - U "<<setw(5)<<vowel[4]<<"\n";
     cout<<endl;
     cout<<"Total of vowels is "<<total<<"\n";
    }
    return 0;
}
