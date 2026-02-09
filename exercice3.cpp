#include <iostream>

void ech2paradresse(float *x, float *y){
    if(*x>*y){
        float temp=*x;
        *x=*y;
        *y=temp;
    }
}
void ordonnetrois(float *x, float *y, float *z){
    ech2paradresse(x,y);
    ech2paradresse(x,z);
    ech2paradresse(y,z);
}
int main(){
    float a=10.5;
    float b=-5.3;
    float c=-0.2;
    ordonnetrois(&a,&b,&c);
    std::cout <<"a="<<a<<std::endl;
    std::cout <<"b="<<b<<std::endl;
    std::cout <<"c="<<c<<std::endl;
    return 0;
}
