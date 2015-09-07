#ifndef CHICKEN_H
#define CHICKEN_H

#include <stdio.h>

class Chicken
{
public:
    int age;
    int weight;
  	virtual void damin();
    void zhuixiaoji(){printf("zhuixiaoji : hui hui\n");};
};

void Chicken::damin(){printf("ji ji ji");};
//void Chicken::zhuixiaoji(){printf("hui hui");}

class Muji:public Chicken
{
public:
    void xiadan()
    {
	printf("oh oh di!OOOOOOOO\n");
	};
    virtual void damin(){
	printf("Muji : gu gu gu\n");
	};
};

class Gongji:public Chicken
{
public:
    void baoage(){printf("age=%d\n",age);}
    virtual void damin(){printf("o o di\n");}
};

#endif