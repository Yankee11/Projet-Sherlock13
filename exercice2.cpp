#include <iostream>

int add(int x,int y){
    return x+y;
}
float add(float x,float y){
    return x+y;
}
void add(int T[10],int U[10]){
    int res[10];
    for(int i=0; i<10; i++){
        res[i]=T[i]+U[i];
        std::cout << res[i] << std::endl;
    }
}

int main(){
    int a=5;
    int b=6;
    int res=add(a,b);
    std::cout << res << std::endl;
    float c=5.6;
    float d=6.5;
    float res2=add(c,d);
    std::cout << res2 << std::endl;
    int T[10];
    int U[10];
    for(int i=0; i<10; i++){
        T[i]=i;
        U[i]=3*i;
    }
    add(T,U);
    short e=1000;
    short f=9000;
    short res3=add(e,f);
    std::cout << res3 << std::endl;
    
    //en utilliant deux short en argument on appelle la fonction int add, parce que les short sont promut en int
    return 0;
}
