#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> p=std::make_unique<int>(10);
    std::cout<< *p << std::endl;
    std::cout<< p << std::endl;
    *p=11;
    std::cout<< *p << std::endl;
    p=std::make_unique<int>(12);
    std::cout<< p << std::endl;
    std::unique_ptr<const int> q=std::make_unique<const int>(20);
    std::cout<< *q << std::endl;
    std::cout<< q << std::endl;
    //*q=21; impossible de modifier la valeur de l'entier pointer
    std::cout<< *q << std::endl;
    q=std::make_unique<const int>(22);
    std::cout<< q << std::endl;
    const std::unique_ptr<int> r=std::make_unique<int>(30);
    std::cout<< *r << std::endl;
    std::cout<< r << std::endl;
    *r=31;
    std::cout<< *r << std::endl;
    //r=std::make_unique<int>(32); imposible de modifier l'adresse du pointeur
    std::cout<< r << std::endl;
    
    std::unique_ptr<int> tab[10]; // initialiser le tableau de 10 pointeurs intelligents
    for (int i=0; i<10; i++){
        tab[i]=std::make_unique<int>(i*2);  // alouer
    }
    for (int i=0; i<10; i++){
        std::cout<< tab[i] << std::endl;
        std::cout<< *tab[i] << std::endl;
    }
    
    int s=2;
    std::cout<< s << std::endl;
    int& ref=s; // creer la referenece de s
    ref=34;
    std::cout<< s << std::endl;
    ref=*p;
    std::cout<< s << std::endl;
    ref=*q;
    std::cout<< s << std::endl;
    ref=*r;
    std::cout<< s << std::endl;
    /*p=q;impossible
    p=r; impossible
    q=p; impossible
    q=r; impossible
    r=p;impossible
    r=q;impossible */
    ref=*p;
    ref=*q;
    ref=*r;
    // la gestion de mémoire se fait manuellement avec les pointeurs bruts mais se fait automatiquement avec les smarts pointeurs
    // pas besoin d'utiliser delete avec les smarts pointeurs
    return 0;
}

