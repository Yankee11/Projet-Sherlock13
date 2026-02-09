**TP1 C++**

''Exercice 1''

##1.1 (Allocation avec new )
1)Un pointeur sur un entier: Avec new la valeur pointée est modifiable et le pointeur est modifiable.

2)Un pointeur sur un entier constant: avec new le pointeur est modifiable mais la valeur pointée ne l'est pas car c'est un entier constant.

3)un pointeur constant sur un entier: avec new le pointeur n'est pas modifiable à cause de constant et la valeur pointée est modifiable.

##1.2(Reference sur un entier) 
& pour créer un alias sur une variable et on peut modifier l'alias grace a la variable. 
Et contrairement au pointeur une référence ne peut pas etre nulle et ne peut pas changer de cible.

##1.3(Pointeur intelligent)
Avec les smarts pointers on a pas besoin d'utiliser delete car la mémoire est libérée automatiquement.

 **Exercice 2**

On definit 3 fonctions additions pour des types différents, le compilateur choisit automatiquement la bonne fonction selon le type des arguments(la surchage).
Pour le short, le compilateur fait une promotionimplicite de short vers int donc il appelle la version int.


**Exercice 3**

Le passage par adresse permet de modifier les variables du main
Avec les références, la syntaxe est plus simple (pas de * et & dans l’appel).
Les deux méthodes modifient directement les variables originales.


**Exercice 4**

La classe contient :

En private :
	float* tab : un tableau dynamique qui stocke les valeurs.
	int taille : la taille du tableau.

##Ces attributs sont privés pour respecter l’encapsulation : on ne peut pas les modifier directement depuis le main.

En public :

	le constructeur
	le destructeur
	les méthodes lire_valeur(), moyenne() et enleveelement()

##Les méthodes publiques permettent d’interagir avec l’objet.

la fonction enleveelement pourrait renvoyer un booléen comme demandé dans l’énoncé au lieu d’afficher directement les messages. Mais on a trouvé les messages plus pertinents pour l'utilisateur


**Exercice 5**
On a réalisé une classe Equation2 pour représenter et résoudre une équation du second degré.
On utilise comme dans l'exo 4 des attributs privés et des méthodes publique.

On utilise aussi un contructeur par défaut 
Equation2 () {} qui sera initialié plus tard.


**Exercice 6**
Dans cet exercice on a vraiment utilisé les meme bases des exos précédents. 
ce qui change un peu c'est l'algorithme de dérivé et d'intégrale qu'on a vraiment implementé.
Pour la dérivée : d/dx (aᵢ xⁱ) = i·aᵢ xⁱ⁻¹
∫ aᵢ xⁱ dx = aᵢ/(i+1) xⁱ⁺(google)



**AUTEURS** 

YVES HAROLD VALCIUS 
MATTHIS DE BACKER.



Polytech Sorbonne. 



















