**Projet Sherlock 13 - Programmation Réseau & Graphique**

1. Présentation du Projet

Ce projet consiste en la réalisation d'une version numérique du jeu de société Sherlock13. Il a été réalisé dans le cadre du module d'Informatique Système en 4ème année de Robotique à Polytech Sorbonne. L'application permet à 4 joueurs de s'affronter en réseau via une interface graphique développée en C / SDL2.


2. Architecture Technique

L'application repose sur une architecture Client-Serveur robuste utilisant les sockets TCP :

    1) Serveur Principal (server.c) :
    
	C'est le centre de controle du jeu. C'est comme l'arbitre, le mélange du deck de 13 cartes et la distribution des indices.
        
	Implémente aussi une Machine à États Finis (FSM) pour gérer les phases de connexion et de jeu. 


   2)  Client Graphique (sh13.c) :

	Multi-threading : Utilise pthread pour séparer l'affichage graphique (SDL2) de l'écoute réseau.

Serveur TCP Local : Chaque client intègre un thread "serveur" qui réceptionne les messages asynchrones du serveur principal sans geler l'interface.

Synchronisation : Communication entre threads via une variable partagée synchro et un buffer global gbuffer. 
       
       

3. Protocole de Communication

Les échanges sont basés sur des messages textuels formatés :

    C : Demande de connexion du client au serveur.

    I : Envoi de l'identifiant (ID) unique au client.

    L : Diffusion de la liste des noms des joueurs.

    D : Distribution des 3 cartes secrètes à chaque joueur.

    V : Mise à jour des indices dans la grille (valeur réelle ou symbole *).

    M : Désignation du joueur courant (active le bouton "GO").

    W : Annonce du gagnant et fin de la partie???    
    
4. Installation et Compilation

Le projet nécessite les bibliothèques SDL2, SDL2_image et SDL2_ttf.

Compilation

Les deux fichiers doivent etre compilés :
	
#gcc -o sh13 -I/usr/include/SDL2 sh13.c -lSDL2_image -lSDL2_ttf -lSDL2 -lpthread
#gcc -o server server.c

Pour eviter d'écrire tout ça a chaque fois, ces deux lignes de code se trouvent dans un fichiers cmd.sh qui execute ces deux commande quand on tape la commande ./cmd.sh dans le repértoire des fichiers dans le terminal.
	 

5. Exécution

    Lancer le serveur : ./server 32000

    Lancer 4 clients : ./sh13 <IP_Serveur> 32000 <IP_Client> <Port_Unique_Client> <Nom> Exemple : ./sh13 localhost 32000 localhost 320000 Mathis
	   ./sh13 localhost 32000 localhost 320001 Yves_Harold
	   
	   	

6. Auteurs

    Yves-Harold Valcius - Polytech Sorbonne (ROB4)

    Mathis De Backer    - Polytech Sorbonne (ROB4)
    
   
   
 


      
        
        
    
