#include <iostream>


int main(){
    int *p=new int(10);
    std::cout<< *p << std::endl;
    std::cout<< p << std::endl;
    *p=11;
    std::cout<< *p << std::endl;
    p=new int(12);
    std::cout<< p << std::endl;
    const int *q=new int(20);
    std::cout<< *q << std::endl;
    std::cout<< q << std::endl;
    //*q=21; impossible de modifier la valeur de l'entier pointer
    std::cout<< *q << std::endl;
    q=new int(22);
    std::cout<< q << std::endl;
    int * const r=new int(30);
    std::cout<< *r << std::endl;
    std::cout<< r << std::endl;
    *r=31;
    std::cout<< *r << std::endl;
    //r=new int(32); imposible de modifier l'adresse du pointeur
    std::cout<< r << std::endl;
    
    int *tab[10]; // initialiser le tableau de 10 pointer
    for (int i=0; i<10; i++){
        tab[i]=new int(i*2);  // alouer
    }
    for (int i=0; i<10; i++){
        std::cout<< tab[i] << std::endl;
        std::cout<< *tab[i] << std::endl;
    }
    for (int i=0; i<10; i++){
        delete tab[i]; //desallouer
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
    // p=q; impossible
    p=r;
    q=p;
    q=r;
    // r=p; impossible
    // r=q;impossible
    ref=*p;
    ref=*q;
    ref=*r;
    delete p;
    delete q;
    delete r;
    return 0;
}
