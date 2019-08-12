#ifndef BIRD_H
#define BIRD_H
#include<sys/types.h>
                            #include<sys/stat.h>
                            #include<fcntl.h>  
#include <unistd.h>
#include<stdio.h>
#include "IAction.h"
#include "IShape.h"
#include <pthread.h> 
#include <fstream>
#include<cstring>
#include<string.h>
struct Vivodata{
int heng;
int zhong;
}; 
namespace taojie{ 
namespace luyao{
class Bird : public IShape, public IAction
{
public:
    Bird();
    ~Bird();
public:
static  void* vivorun(void* data);
public:
static Vivodata readfile();
    // IAction interface
public:
    void run() override;
    // IShape interface
public:
    int area() override;
 
 
};
}
}
#endif
