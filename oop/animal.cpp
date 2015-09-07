#include "chicken.h"
int main(){
    Muji rose;
    Gongji jack;
    jack.age=3;
    jack.damin();
    jack.zhuixiaoji();
    jack.baoage();
    Chicken *p = &rose;
    p->damin();
    return 0;
}
