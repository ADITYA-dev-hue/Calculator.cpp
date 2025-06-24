#include<iostream>
using namespace std;
//To add two numbers
void sum(float a,float b){
    cout<<a+b;
    
}
//To product two numbers
void product(float x,float y){
    cout<<x*y;
    
}
//To substract two numbers
void difference(float x,float y){
    cout<<x-y;
}
//To devide two numbers
void devide(float x,float y){
    cout<<x/y;
}
//To find percentage of two numbers
void percentage(float x,float y){
    cout<<(x*y)/100;
}
//To find square of a number
void square(float x){
    cout<<x*x;
}
//To find square root of a number
#include<cmath>
void Sqrt(float x){
    sqrt(x);
    cout<<sqrt(x);
}
//To find trigonometric values
#include<cmath>
void Cosine(float x){
    cout<<cos(x);
}
void Sine(float x){
    cout<<sin(x);
}
void Tan(float x){
    cout<<tan(x);
}
void Cot(float x){
    cout<<1/tan(x);
}
void sec(float x){
    cout<<1/cos(x);
}
void cosec(float x){
    cout<<1/sin(x);
}
//To print trigonometric table
void table(){
    cout<<"\t0  \t30 \t45  \t60  \t90  \n";
    cout<<"_______________________________________________\n";
    cout<<"sin\t0\t1/2\t1/root2\troot3/2\t1\n";
    cout<<"cos\t1\troot3/2\t1/root2\t1/2\t0\n";
    cout<<"tan\t0\t1/root3\t1\troot3\tInfi\n";
    cout<<"cot\tInfi\troot3\t1\t1/root3\t0\n";
    cout<<"cosec\tInfi\t2\troot2\t2/root3\t1\n";
    cout<<"sec\t12/root3\troot2\t2\tInfi\n\n";
    
}
/*      Above functions are used to perform various operations in the calculator
        The functions include addition, subtraction, multiplication, division, percentage calculation,
        square and square root calculation, and trigonometric functions.*/

//Main function
int main(){
    float a,b;
    int c;
    do{
        cout<<"1. Add        4. Divide       7. Square   10.Tan(x)   13.Cosec(x)\n2. Substract  5. Percentage   8. Cos(x)   11.Cot(x)   14. Trignometric Table\n3. Product    6. SquareRoot   9. Sin(x)   12.Sec(x)   15. Exit\n\n";
        cout<<"Enter your choice: ";
        cin>>c;
        if(c==1){
            cout<<"Enter a=";
            cin>>a;
            cout<<"+\n"<<"Enter b=";
            cin>>b;
            cout<<"Ans = ";
            sum(a,b);
            cout<<"\n\n";
        }else if(c==2){
            cout<<"Enter a=";
            cin>>a;
            cout<<"-\n"<<"Enter b=";
            cin>>b;
            cout<<"Ans = ";
            difference(a,b);
            cout<<"\n\n";
        }else if(c==2){
            cout<<"Enter a=";
            cin>>a;
            cout<<"-\n"<<"Enter b=";
            cin>>b;
            cout<<"Ans = ";
            difference(a,b);
            cout<<"\n\n";
        }else if(c==3){
            cout<<"Enter a=";
            cin>>a;
            cout<<"*\n"<<"Enter b=";
            cin>>b;
            cout<<"Ans = ";
            product(a,b);
            cout<<"\n\n";
        }else if(c==4){
            cout<<"Enter a=";
            cin>>a;
            cout<<"/\n"<<"Enter b=";
            cin>>b;
            cout<<"Ans = ";
            devide(a,b);
            cout<<"\n\n";
        }else if(c==5){
            cout<<"Enter a=";
            cin>>a;
            cout<<"'%'\nEnter b=";
            cin>>b;
            cout<<"Ans = ";
            percentage(b,a);
            cout<<"\n\n";
        }else if(c==6){
            cout<<"Enter a=";
            cin>>a;
            cout<<"Square root of "<<a<<" is: ";
            Sqrt(a);
            cout<<"\n\n";
        }else if(c==7){
            cout<<"Enter a=";
            cin>>a;
            cout<<"Square of "<<a<<" is: ";
            square(a);
            cout<<"\n\n";
        }
        else if(c==8){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Cos("<<a<<") is: ";
            Cosine(radians);
           cout<<"\n\n";
        }else if(c==9){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Sin("<<a<<") is: ";
            Sine(radians);
            cout<<"\n\n";
        }else if(c==10){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Tan("<<a<<") is: ";
            Tan(radians);
            cout<<"\n\n";
        }else if(c==11){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Cot("<<a<<") is: ";
            Cot(radians);
            cout<<"\n\n";
        }else if(c==12){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Sec("<<a<<") is: ";
            sec(radians);
            cout<<"\n\n";
        }else if(c==13){
            cout<<"Enter angle in degrees: ";
            cin>>a;
            float radians = a * M_PI / 180.0; // Convert degrees to radians
            cout<<"Cosec("<<a<<") is: ";
            cosec(radians);
            cout<<"\n\n";
        }else if(c==14){
            cout<<"TrigoMetric Table\n\n";
            table();
            cout<<"\n\n";
        }
        else if(c==15){
            cout<<"Exiting the calculator. Goodbye!"<<endl;
         
        }else{
            cout<<"\nInvalid choice, please try again.\n"<<endl;
        }
    }while (c!=15);
    
    
}