#include <stdio.h>

class Chicken
{
public:
    int age;
    int weight;
  virtual void damin();
    void zhuixiaoji();
};

//void Chicken::damin(){printf("ji ji ji");};
void Chicken::zhuixiaoji(){printf("hui hui");}

class Muji:public Chicken
{
public:
    void xiadan(){printf("oh oh di\n");}
    void damin(){printf("gu gu gu\n");}
};

class Gongji:public Chicken
{
public:
    void baoage(){printf("age=%d\n",age);}
    void damin(){printf("o o di\n");}
};
