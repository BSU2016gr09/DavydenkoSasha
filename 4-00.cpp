#include <iostream> 
#include <iomanip> 
#include <math.h>
//График функции y=sin(2x)/x
using namespace std; 
void drawSin () 
{ 
float x=-6, y; 
while (x<=6) 
{ 
y=(sin(x*2)/x)*20; 
cout<<setw(40+(y))<<setfill('_')<<'*'<<"\n"; 
x=x+0.1; 
} 
} 
int main() 
{ 
drawSin(); 
system("pause"); 
}