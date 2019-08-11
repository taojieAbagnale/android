#include <stdio.h>
#include<unistd.h>
#include "Bird.h"
#include<stdlib.h>
#include <string.h> 
#include <iostream>
using namespace taojie::luyao;
Bird::Bird()
{   
    Vivodata vivodata;
    vivodata.heng=5;
    std::cout<<"构造函数"<<std::endl;
    pthread_t thread;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
   int number=    pthread_create(&thread,&attr,vivorun,&vivodata);
   pthread_detach(thread);
   std::cout<<number<<std::endl;
    std::cout<<"小鸟出生了"<<std::endl;
   int i=5;
do{
std::cout<<"主线程运行";
std::cout<<vivodata.heng;
std::cout<<",";
std::cout<<vivodata.zhong;
std::cout<<std::endl;
sleep(1);


}while(i--);
}
 
Bird::~Bird()
{
    std::cout<<"小鸟挂掉了"<<std::endl;
}
 
void Bird::run()
{
    std::cout<<"小鸟飞呀飞呀"<<std::endl;
}
Vivodata readfile(){
        Vivodata vivodata;

        int file=open("taojiegg",O_RDWR);
        std::cout<<file<<std::endl;
        char buf[30];
        int n=read(file,buf,30);
        std::cout<<buf;
        close(file);
        return vivodata;
}
void* Bird::vivorun(void* data){
    	int k=5;
	Vivodata* data1 =(Vivodata*)data;
	int file;
	int n;
      	int temp1;
	int temp2;
   do{
      file=open("taojiegg",O_RDWR);
        char buf[30];
        n=read(file,buf,30);
	char * token=strtok(buf,",");
	 temp1=atoi(token);
          token=strtok(NULL,",");
	temp2=atoi(token);
        std::cout<<temp1;
	std::cout<<",";
	std::cout<<temp2;
        close(file);
	data1->heng=temp1;
	data1->zhong=temp2;
	 std::cout<<"vivo线程来了在运行中"<<std::endl;
  	  sleep(2);
}while(k--);
} 
int Bird::area()
{
    std::cout<<"小鸟的形状像小鸡仔的形状"<<std::endl;
}
