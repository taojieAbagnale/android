#include<unistd.h>
#include<stdio.h>
#include "Bird.h"
#include <iostream> 
void doRun(IAction *object)
{
    object->run();
}
 
void getArea(IShape *object)
{
    object->area();
}
using namespace taojie::luyao; 
using  namespace std;
int main()
{

   cout<<"main 开始了";
    Bird *bird = new Bird();
    return 0;
}
