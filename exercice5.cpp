#include <iostream>
#include <math.h>

class Equation2{
    private:
        float a;
        float b;
        float c;
        float dis;
        float x0;
        float x1;
    public:
    Equation2(){
    }
    void saisir(){
        std::cout<<"Entrez les parametres"<<std::endl;
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
    }
    void resoudre(){
        dis=(b*b)-4*a*c;
        if (dis>0){
            x0=(-b+sqrt(dis))/(2*a);
            x1=(-b-sqrt(dis))/(2*a);
            std::cout<<"racine simple réel x0="<<x0<<"x1="<<x1<<std::endl;
        }
        else if (dis==0){
            x0=-b/(2*a);
            std::cout<<"racine double réel x0="<<x0<<std::endl;
        }
        else{
            float reel=-b/(2*a);
            float im=sqrt(-dis)/(2*a);
            std::cout<<"racine comlexe conjugué :"<<std::endl;
            std::cout<<"x0="<<reel<<"-"<<im<<"i"<<std::endl;
            std::cout<<"x1="<<reel<<"+"<<im<<"i"<<std::endl;
        }
    }
    
};
int main(){
    Equation2 e;
    e.saisir();
    e.resoudre();
    return 0;
}
