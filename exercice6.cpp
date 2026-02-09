#include <iostream>

class Polynome{
    private:
        int degre;
        float *coef;
    public:
    Polynome(int n){
        degre=n;
        coef=new float[degre+1];
    }
    ~Polynome(){
        delete[] coef;
    };
    void saisir_valeur(){
        std::cout <<"saisiser les "<<degre+1<<" parametres"<<std::endl;
        for(int i=degre; i>=0; i--){
            std::cin>>coef[i];
        }
    }
    void afficher_poly(){
        for(int i=degre; i>=0; i--){
            std::cout<<coef[i];
            if(i!=0){
                std::cout<<"x^"<<i<<"+";
            }
        }
        std::cout<<std::endl;
    }
    void integrer(){
        for(int i=degre; i>=0; i--){
            coef[i+1]=coef[i]/(i+1);
        }
        coef[0]=0; //constante chosie arbitrairement
        degre++;
    }
    void deriver(){
        for(int i=1; i<=degre; i++){
            coef[i-1]=coef[i]*i;
        }
        degre--;
    }
};
int main(){
    int n;
    std::cout <<"degre polynome"<<std::endl;
    std::cin>>n;
    Polynome p(n);
    p.saisir_valeur();
    std::cout <<"polynome :"<<std::endl;
    p.afficher_poly();
    p.deriver();
    std::cout <<"polynome deriver :"<<std::endl;
    p.afficher_poly();
    p.integrer();
    std::cout <<"polynome integrer :"<<std::endl;
    p.afficher_poly();
    return 0;
}
