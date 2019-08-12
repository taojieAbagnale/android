#include <unistd.h>
#include<stdio.h>
#include "Bird.h"
#include <iostream> 
#include "A.h"
void doRun(IAction *object)
{
    object->run();
}
 
void getArea(IShape *object)
{
    object->area();
}
using namespace taojie::luyao; 
int main()
{
    Bird::readfile();
    A::print();
     std::cout<<"main 开始了";
    Bird *bird = new Bird();
    return 0;
}
