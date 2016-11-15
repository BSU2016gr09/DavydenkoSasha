#include <iostream> 
#include <iomanip> 
#include <math.h>
//Ãðàôèê ôóíêöèè y=sin(2x)/x
using namespace std; 
void drawSin () 
{ 
float x=-6, y; 
while (x<=6) 
{ 
y=(sin(x*2)/x)*20; //Откуда взялась константа 20? Как она вычислена была? Дай пояснение!
cout<<setw(40+(y))<<setfill('_')<<'*'<<"\n"; //А зачем такой странный заполнитель? Чем тебя пробел то не устраивает?
x=x+0.1; 
} 
} 
int main() 
{ 
drawSin(); 
system("pause"); 
}
