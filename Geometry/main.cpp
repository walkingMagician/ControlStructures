#include<iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// � ����� ���� ����������� � ���� ��������� 

void main()
{
   
    while (true)
    {
        int a = 5, b = 0;
        cout << "0)" << endl;
        for (; b < a; b++)      // ������� ����
        {
            cout << "*****"<< endl;
            
        }
        break;
    }

    while(true)
    {
        int a = 4, b = 0;
        cout << endl;
        cout << "1)" << endl;
        for (;b < a; b++)       //
        {
            cout << "*" << endl;
            
            for (int i = 0; i <= b; i++) 
            {
                cout << "*";
                
            }
           
        }
        cout << "*"<< endl;
    
         // a = 4, b = 0;
        cout << endl;
        cout << "2)" << endl;
       cout << "*****" << endl;
       for (int j = 0; j < 4; j++)      
       {
           for (int i = 0; i < a;i++)
           {
               cout << "*";
           }
           cout << endl;
           a--;
       }
    
         a = 4, b = 0;      // ��������� ���������� � � b
         cout << endl;
        cout << "3)" << endl;
       cout << "*****" << endl;
       
       for (int j = 0; j < 4; j++)       
       {
           
           b++;
           for (int k = 0; k < b; k++)      // ���� �������� ��������
           {
               cout << " ";
           }
           for (int i = 0; i < a;i++)       // ���� �������� "*" 
           {

               cout << "*";
               
           } 
           cout  <<  endl;
           a--;                             // ��� ���� ���� "*" ���� ��� ������ � ������ 
           
       }


        a = 1, b = 4;
        cout << endl;
        cout << "4)" << endl;
        for (int k = 0; k < 5; k++)             
        {
            for (int i = 0; i < b; i++)     //  ���� �������� �������� 
            {
                cout << " ";
            }

            for (int j = 0; j < a; j++)     // ���� �������� "*"
            {
                cout << "*";

            }
            cout << endl;
            
            b--; a++;                       // b-- ���� �������� ���� ������, �-- ���� "*" ���� ������  
        }
        
        a = 5, b = 5;
        int l = 0;
        cout << endl;
        cout << "5)" << endl;
        for (int k = 0; k < 5; k++)         // #1
        {
            for (int i = 0; i < b; i++)     // ������� ������ ���-�� �������� ��� ������� �����
            {
                cout << " ";
            }

            for (int i = 0; i < b; i++)     // ������� "/"
            {
                cout << "/";
                break;
            }
            l++;
            for (int i = 1; i < l; i++)     // ��������� ������ ��� ���������� �����
            {
                cout << "  ";
            }
            for (int i = 0; i < b; i++)     // �������� ���� 
            {
                cout << "\\";
                break;
            }
            b--;
            cout << endl;
           
        } 

         a = 5, b = 0, l = 5;
        for (int k = 0; k < 5; k++)         // �������� ���� #1
        {

            b++;
            for (int i = 0; i < b; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < 5; i++)
            {
                cout << "\\";
                break;
            }
            for (int i = 1; i < l; i++)
            {
                cout << "  ";
            }
            for (int i = 0; i < b; i++)
            {
                cout << "/";
                break;
            }
            l--;
            cout << endl;

        }

        int f = 0;
        cout << endl;
        cout << "6)" << endl;               // ��� ������ ������� �������, 
        for (int i = 0; i < 3; i++)         // �� ���� ������� ���������
        {
            for (int k = 0; k < 2; k++)
                {
                    cout << "+ - + - +";
                    break;
                }
            cout << endl;
            if (f != 2)
            {
                for (int k = 0; k < 1; k++)
                {
                    cout << "- + - + -";
                    break;
                }
            }
            cout << endl;
            f++;
        }
        break;
    }
}