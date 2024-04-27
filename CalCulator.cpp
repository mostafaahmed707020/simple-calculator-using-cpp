#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


void addition();
void subtraction();
void multiplication();
void division();
void squaring();
void squareRoot();
void isEven();
void power();
void table();
void determinant();

int main(){
        int op;
        cout<<"press any key to start\n";
        getch(); 
        do
        {
            cout<<"\nSelect the operation using a number"
                  "\n 1-Addition"
                  "\n 2-Subtraction"
                  "\n 3-Multiplication"
                  "\n 4-Division"
                  "\n 5-squaring"
                  "\n 6-Square Root"
                  "\n 7-Even Or Not"
                  "\n 8-Power"
                  "\n 9-Table Of Contents"
                  "\n 10-Determinant"
                  "\n 11-Exit"<<endl;
                  cout<<"\n=======================\n";
                  cout<<"choose the operation : "; cin>>op;
                  cout<<"=======================\n";
                  
                
                switch (op)
                {
                    case 1 : addition(); break;
                    case 2 : subtraction(); break;
                    case 3 : multiplication(); break;
                    case 4 : division(); break;
                    case 5 : squaring(); break;
                    case 6 : squareRoot(); break;
                    case 7 : isEven(); break;
                    case 8 : power(); break;
                    case 9 : table(); break;     
                    case 10 : determinant(); break;  
                    case 11 : exit(0); 
                    default : cout<<"Enter a listed number ! \n"; main(); break;
                }
        } while(op != 11);
   
    return 0;
}

//////////////////////////////////////////////////////
void addition()
    {
    int q,n,s=0;
    cout<<"Enter the number of inputs";
    cout<<"\n=======================\n";
    cin>>q;
    cout<<"\n=======================\n";
    for(int i=1; i<=q; i++)
    {
        cout<<"Enter number "<<i<<": "; cin>>n;
        s=s+n;
        
    }
    cout<<'\n'<<s<<endl;
    }

//////////////////////////////////////////////////////
    void subtraction()
    {
        float num1,num2;
        cout<<"Enter the first number : "; cin>>num1;
        cout<<"=======================\n";
        cout<<"Enter the second number : "; cin>>num2;
        cout<<"=======================\n";
        cout<<"The result is = "<<num1-num2<<endl;
        cout<<"=======================\n";
    }

//////////////////////////////////////////////////////
void multiplication()
{
    float q,input,s=1;
    cout<<"Enter the number of inputs : "; cin>>q;
    cout<<"=======================\n";
    for(int i=1; i<=q; i++)
    {
        cout<<"Enter number "<<i<<" : "; cin>>input;
            s *=input;
    }
    cout<<"\n=======================\n";
    cout<<"Thr result is : "<<s;
    cout<<"\n=======================\n";
}

//////////////////////////////////////////////////////
void division()
{
    float num1, num2;
    cout<<"Enter the first number : "; cin>>num1;
     cout<<"=======================\n";
     cout<<"Enter the second number : "; cin>>num2;
    cout<<"=======================\n";
    if(num2==0){
        cout<<"NOT VAILD, YOU CAN'T DIVIDE BY ZERO";
        cout<<"\n=======================\n";
    }
    else {
        cout<<"The result is : "<<num1/num2;
        cout<<"\n=======================\n";
    }
    
}

//////////////////////////////////////////////////////
void squaring()
{
    float num;
   cout<<"Enter the  number : "; cin>>num;
     cout<<"=======================\n"; 
     cout<<"The result is : "<<num*num;
     cout<<"\n=======================\n"; 
}

//////////////////////////////////////////////////////
void squareRoot()
{
    float num;
    cout<<"Enter the  number you want to get squre root : "; cin>>num;
     cout<<"=======================\n"; 
    cout<<"The result is : "<<sqrt(num);
     cout<<"\n=======================\n"; 
}

//////////////////////////////////////////////////////
void isEven()
{
       int num;
   cout<<"Enter the  number you want to check : "; cin>>num;
   
   if (num % 2==0)
   {
    cout<<"=======================\n"; 
    cout<<"The number is even";
    cout<<"\n=======================\n"; 
   }
   else 
   {
    cout<<"=======================\n";
    cout<<"The number is odd";
    cout<<"\n=======================\n";
   }
}

//////////////////////////////////////////////////////
void power()
{
       float num,power;
   cout<<"Enter the  number : "; cin>>num;
   cout<<"=======================\n";
   cout<<"Enter the power : "; cin>>power;
   cout<<"=======================\n";
   cout<<num<<"^"<<power<<" = "<<pow(num , power);
    cout<<"\n=======================\n";

}

//////////////////////////////////////////////////////
void table()
{
    int choice;
    void tableOfNumbers();
    void tableOfStrings();
    do{
    cout<<"Enter the type of inputs : "
        <<"\n 1-numbers"
        <<"\n 2-words"
        <<"\n 3-Exit";
        cout<<"\n=======================\n"; 
        cin>>choice;
        cout<<"=======================\n"; 
        switch(choice)
        {
            case 1 : tableOfNumbers(); break;
            case 2 : tableOfStrings(); break;
            case 3 : main();           break;
            default: cout<<"Enter a listed number!\n"; table(); break;
        }
    }while(choice != 3);
}

void tableOfNumbers()
{
    int n;
    
    cout<<"Enter the number of inputs : "; cin>>n;
    float numbers[n];
        cout<<"=======================\n"; 
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter number "<<i<<" : "; cin>>numbers[i-1];
    }
        cout<<"=======================\n";
        cout<<"Your table of contents\n"; 
        cout<<"\n********************************************\n";
        for(int i=0; i<n; i++)
        {
            
                cout<<numbers[i]<<"  ||  ";
          
        }
         cout<<"\n********************************************\n";

}

void tableOfStrings()
{
    int n;
    
    cout<<"Enter the number of inputs : "; cin>>n;
    string numbers[n];
        cout<<"=======================\n"; 
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter word "<<i<<" : "; cin>>numbers[i-1];
    }
        cout<<"=======================\n";
        cout<<"Your table of contents\n"; 
        cout<<"\n********************************************\n";
        for(int i=0; i<n; i++)
        {
            
                cout<<numbers[i]<<"  ||  ";
          
        }
         cout<<"\n********************************************\n";

}

//////////////////////////////////////////////////////
void determinant()
{
    void det_2d();
    void det_3d();
int choice;
    do
    {
    cout<<"Choose the size of determianant 2D OR 3D"
        <<"\n 1-2D"
        <<"\n 2-3D"
        <<"\n 3-Exit\n";
        cout<<"=======================\n"; 
        cin>>choice;
        cout<<"=======================\n"; 
        switch(choice)
        {
            case 1 :  det_2d(); break;
            case 2 :  det_3d(); break;
            case 3 :  main();   break;
            default : cout<<"Enter a listed number!\n"; determinant(); break;
        }
    }
        while(choice !=3);
    
}

void det_2d()
{
    float elem1, elem2, elem3, elem4, result;

    cout<<"Enter the first row \n";
    cout<<"Enter the first element : "; cin>>elem1;
    cout<<"Enter the second element : "; cin>>elem2;
    cout<<"Enter the second row \n";
    cout<<"Enter the first element : "; cin>>elem3;
    cout<<"Enter the second element : "; cin>>elem4;
    result = (elem1 * elem4) - (elem2 * elem3);
    cout<<"=======================\n"; 
    cout<<" |"<<elem1<<"  "<<elem2<<"| \n"
        <<" |"<<elem3<<"  "<<elem4<<"| \n"
        <<" = "<<result<<"\n";  
    cout<<"=======================\n"; 
}

void det_3d()
{
    float elem1, elem2, elem3, elem4, elem5, elem6, elem7, elem8, elem9, x, y, z;

    cout<<"Enter the first row \n";
    cout<<"Enter the first element : "; cin>>elem1;
    cout<<"Enter the second element : "; cin>>elem2;
    cout<<"Enter the third element : "; cin>>elem3;
    cout<<"Enter the second row \n";
    cout<<"Enter the first element : "; cin>>elem4;
    cout<<"Enter the second element : "; cin>>elem5;
    cout<<"Enter the third element : "; cin>>elem6;
    cout<<"Enter the third row \n";
    cout<<"Enter the first element : "; cin>>elem7;
    cout<<"Enter the second element : "; cin>>elem8;
    cout<<"Enter the third element : "; cin>>elem9;
    x=(elem5 * elem9)-(elem6 * elem8);
    y=-(elem4 * elem9)-(elem6 * elem7);
    z=(elem4 * elem8)-(elem5 - elem7);
    cout<<"=======================\n"; 
    cout<<" |"<<elem1<<"  "<<elem2<<"  "<<elem3<<"| \n"
        <<" |"<<elem4<<"  "<<elem5<<"  "<<elem6<<"| \n"
        <<" |"<<elem7<<"  "<<elem8<<"  "<<elem9<<"| \n"
        <<" = "<<x+y+z;
    cout<<"\n=======================\n"; 
}