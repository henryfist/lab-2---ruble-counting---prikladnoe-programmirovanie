/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*____________________________________________________________________________*/
class klass_PartOfaNumber // класс содержит четыре части цифры
{
public:

int tho;
int hun;
int ten;
int one;
int dou;
};
/*____________________________________________________________________________*/
int Fun_Thousand(klass_PartOfaNumber PoN)//Функция тысячи
{
    if (PoN.tho == 1) {cout <<"Одна тысяча "; }
    if (PoN.tho == 2) {cout <<"Две тысячи "; }
    if (PoN.tho == 3) {cout <<"Три тысячи "; }
    if (PoN.tho == 4) {cout <<"Четыре тысячи "; }
    if (PoN.tho == 5) {cout <<"Пять тысяч "; }
    if (PoN.tho == 6) {cout <<"Шесть тысяч "; }
    if (PoN.tho == 7) {cout <<"Семь тысяч "; }
    if (PoN.tho == 8) {cout <<"Восемь тысяч "; }
    if (PoN.tho == 9) {cout <<"Девять тысяч "; }
    return 0;
}
/*---------------------------------------*/
int Fun_Big_Hundred(klass_PartOfaNumber PoN)//Функция большой сотни
{
    if (PoN.hun == 1) {cout <<"Сто ";}
    if (PoN.hun == 2) {cout <<"Двести ";}
    if (PoN.hun == 3) {cout <<"Тристо ";}
    if (PoN.hun == 4) {cout <<"Четыресто ";}
    if (PoN.hun == 5) {cout <<"Пятьсот ";}
    if (PoN.hun == 6) {cout <<"Шестьсот ";}
    if (PoN.hun == 7) {cout <<"Семьсот ";}
    if (PoN.hun == 8) {cout <<"Восемьсот ";}
    if (PoN.hun == 9) {cout <<"Девятьсот ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Little_Hundred(klass_PartOfaNumber PoN)//Функция маленькой сотни
{
    if (PoN.hun == 1) {cout <<"сто ";}
    if (PoN.hun == 2) {cout <<"двести ";}
    if (PoN.hun == 3) {cout <<"тристо ";}
    if (PoN.hun == 4) {cout <<"четыресто ";}
    if (PoN.hun == 5) {cout <<"пятьсот ";}
    if (PoN.hun == 6) {cout <<"шестьсот ";}
    if (PoN.hun == 7) {cout <<"семьсот ";}
    if (PoN.hun == 8) {cout <<"восемьсот ";}
    if (PoN.hun == 9) {cout <<"девятьсот ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Big_Ten(klass_PartOfaNumber PoN)//Функция большой десятки
{
    if(PoN.ten == 2) {cout << "Двадцать ";}
    if(PoN.ten == 3) {cout << "Тридцать ";}
    if(PoN.ten == 4) {cout << "Сорок ";}
    if(PoN.ten == 5) {cout << "Пятьдесят ";}
    if(PoN.ten == 6) {cout << "Шестьдесят ";}
    if(PoN.ten == 7) {cout << "Семьдесят ";}
    if(PoN.ten == 8) {cout << "Восемьдесят ";}
    if(PoN.ten == 9) {cout << "Девяносто ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Little_Ten(klass_PartOfaNumber PoN)//Функция маленькой десятки
{
    if(PoN.ten == 2) {cout << "двадцать ";}
    if(PoN.ten == 3) {cout << "тридцать ";}
    if(PoN.ten == 4) {cout << "сорок ";}
    if(PoN.ten == 5) {cout << "пятьдесят ";}
    if(PoN.ten == 6) {cout << "шестьдесят ";}
    if(PoN.ten == 7) {cout << "семьдесят ";}
    if(PoN.ten == 8) {cout << "восемьдесят ";}
    if(PoN.ten == 9) {cout << "девяносто ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Big_One(klass_PartOfaNumber PoN)//Функция большой единицы
{
    if(PoN.one == 1) {cout << "Один ";}
    if(PoN.one == 2) {cout << "Два ";}
    if(PoN.one == 3) {cout << "Три ";}
    if(PoN.one == 4) {cout << "Четыре ";}
    if(PoN.one == 5) {cout << "Пять ";}
    if(PoN.one == 6) {cout << "Шесть ";}
    if(PoN.one == 7) {cout << "Семь ";}
    if(PoN.one == 8) {cout << "Восемь ";}
    if(PoN.one == 9) {cout << "Девять ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Little_One(klass_PartOfaNumber PoN)//Функция маленькой единицы
{
    if(PoN.one == 1) {cout << "один ";}
    if(PoN.one == 2) {cout << "два ";}
    if(PoN.one == 3) {cout << "три ";}
    if(PoN.one == 4) {cout << "четыре ";}
    if(PoN.one == 5) {cout << "пять ";}
    if(PoN.one == 6) {cout << "шесть ";}
    if(PoN.one == 7) {cout << "семь ";}
    if(PoN.one == 8) {cout << "восемь ";}
    if(PoN.one == 9) {cout << "девять ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Big_Double(klass_PartOfaNumber PoN)//Функция большого второго десятка
{
    if(PoN.dou == 10){cout <<"Десять ";}
    if(PoN.dou == 11){cout <<"Одиннадцать ";}
    if(PoN.dou == 12){cout <<"Двенадцать ";}
    if(PoN.dou == 13){cout <<"Тринадцать ";}
    if(PoN.dou == 14){cout <<"Четырнадцать ";}
    if(PoN.dou == 15){cout <<"Пятьнадцать";}
    if(PoN.dou == 16){cout <<"Шестьнадцать ";}
    if(PoN.dou == 17){cout <<"Семьнадцать ";}
    if(PoN.dou == 18){cout <<"Восемьнадцать ";}
    if(PoN.dou == 19){cout <<"Девятьнадцать ";}
    return 0;
}
/*---------------------------------------*/
int Fun_Little_Double(klass_PartOfaNumber PoN)//Функция маленького второго десятка
{
    if(PoN.dou == 10){cout <<"десять ";}
    if(PoN.dou == 11){cout <<"одиннадцать ";}
    if(PoN.dou == 12){cout <<"двенадцать ";}
    if(PoN.dou == 13){cout <<"тринадцать ";}
    if(PoN.dou == 14){cout <<"четырнадцать ";}
    if(PoN.dou == 15){cout <<"пятьнадцать";}
    if(PoN.dou == 16){cout <<"шестьнадцать ";}
    if(PoN.dou == 17){cout <<"семьнадцать ";}
    if(PoN.dou == 18){cout <<"восемьнадцать ";}
    if(PoN.dou == 19){cout <<"девятьнадцать ";}
    return 0;
}
/*____________________________________________________________________________*/

int Fun_PartOfaNumber (int number, klass_PartOfaNumber PoN)// функция превращает введенное число в 4 цифры
{
 PoN.tho = number / 1000;
 PoN.hun = (number / 100)-(PoN.tho*10);
 PoN.one = number % 10;
 PoN.ten = ((number % 100) - PoN.one)/10;
 PoN.dou = number % 100;
/*---------------------------------------*/
 if (PoN.tho != 0) 
    {
     Fun_Thousand(PoN);
     Fun_Little_Hundred(PoN);
     if ((PoN.dou >= 10) && (PoN.dou <= 19))
     {
         Fun_Little_Double(PoN);
     }else
        {
             Fun_Little_Ten(PoN);
             Fun_Little_One(PoN);    
        }
    }else
        {
            if (PoN.hun != 0)
            {
             
            Fun_Big_Hundred(PoN);
            if ((PoN.dou >= 10) && (PoN.dou <= 19))
            {
                Fun_Little_Double(PoN);
            }else
              {
                Fun_Little_Ten(PoN);
                Fun_Little_One(PoN);    
              }
            }else
                {
                    if (PoN.ten != 0)
                        {
                          if ((PoN.dou >= 10) && (PoN.dou <= 19))
                        {
                            Fun_Big_Double(PoN);
                        }else
                            {
                               Fun_Big_Ten(PoN);
                               Fun_Little_One(PoN);    
                             }   
                        }else
                        {
                            if (PoN.one != 0)
                                {
                                 
                                 Fun_Big_One(PoN);
                                }else
                                    {
                                     
                                     cout << "Ноль ";
                                    }
                        }
                }
            
        }
/*---------------------------------------*/
if ((PoN.one >= 2) && (PoN.one <=4) && ((PoN.dou < 12) || (PoN.dou > 14)))//Оператор, определяющий падеж слова "рубль"
{
    cout << "рубля.";
}else
    {
      if((PoN.one == 1) && (PoN.dou != 11))
      {
      cout << "рубль."; 
      }else
      {
      cout << "рублей.";    
      }
    }
/*---------------------------------------*/
 return 0;
}
/*____________________________________________________________________________*/
int main()
{
   klass_PartOfaNumber PoN;
   int number;
   cout << "Введите число :"<< endl;
   cin >> number;
   Fun_PartOfaNumber (number, PoN);
    return 0; 
}
