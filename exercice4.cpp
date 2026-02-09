#include <iostream>

class Tableau{
    private:
        float* tab;
        int taille;
    public:
    Tableau(int n){
        taille=n;
        tab=new float[taille];
    }
    ~Tableau(){
        delete[] tab;
    };
    void lire_valeur(){
        for(int i=0; i<taille; i++){
            std::cin>>tab[i];
        }
    }
    float moyenne(){
        float s=0;
        for(int i=0; i<taille; i++){
            s+=tab[i];
        }
        return s/taille;
    }
    void enleveelement(){
        int val;
        std::cout <<"Quelle valeur voulez-vous supprimez"<<std::endl;
        std::cin>>val;
        int i=0;
        while (tab[i]!=val && i<taille){
            i++;
        }
        if (i==taille){
            std::cout <<"valeur pas dans tableau"<<std::endl;
        }
        else
        {
            for (int j=i; j<taille-1; j++){
                tab[j]=tab[j+1];
            }
            std::cout <<"valeur dans tableau"<<std::endl;
            tab[taille-1]=0;
            taille-=1;
            float new_moy=moyenne();
            std::cout <<"nouvelle moyenne="<<new_moy<<std::endl;
        }
    }
};

int main(){
    int n;
    std::cout <<"nb de valeur à traiter"<<std::endl;
    std::cin>>n;
    Tableau tab(n);
    tab.lire_valeur();
    float moy=tab.moyenne();
    std::cout <<"moyenne="<<moy<<std::endl;
    tab.enleveelement();
    return 0;
}
