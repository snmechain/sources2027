# Travaux Pratiques : Gestion d'un parc d'équipements réseau en C

**Diplôme :** BTS CIEL (Cybersécurité, Informatique et réseaux, Électronique)  
**Option :** IR (Informatique et Réseaux)  
**Environnement :** Visual Studio 2026 / Langage C (Console)  
**Notions abordées :** Structures (`struct`), Pointeurs, Allocation dynamique (`malloc`, `free`), Fonctions.  
**Durée indicative :** 3 heures  

---

## 1. Objectifs et compétences visées

Conformément au référentiel du **BTS CIEL**, ce TP vise à valider les compétences suivantes :

* **C11.3 — Développer un composant logiciel :** Écrire et tester un programme modulaire en langage C.
* **C11.1 — Analyser le besoin :** Modéliser un équipement réseau à l'aide d'une structure de données.
* **C13.1 — Sécuriser un composant logiciel :** Allouer et libérer la mémoire de manière sécurisée (gestion des pointeurs).

---

## 2. Contexte du travail

Vous devez développer un programme console en C pour un outil de gestion d'équipements réseau (switchs, routeurs, bornes Wi-Fi). 

L'utilisateur indique au démarrage le nombre d'équipements qu'il souhaite gérer. Le programme doit alors allouer la mémoire exacte nécessaire sur le tas (*heap*), saisir les équipements, afficher la liste et permettre la modification de l'état d'un équipement via un pointeur.

---

## 3. Modélisation des données

Chaque équipement réseau est défini par la structure `Equipement` suivante :

```
typedef struct {
    int id;
    char nom[30];
    char ip[16];
    int est_actif; // 1 = Actif, 0 = Inactif
} Equipement;

```
 
## 4. Résultats attendus
--- GESTION DU PARC RESEAU ---
Combien d'equipements voulez-vous gerer ? 2

--- Saisie de l'equipement 1 ---
ID : 101
Nom : Switch-Cisco
Adresse IP : 192.168.1.1
Actif (1: Oui, 0: Non) : 1

--- Saisie de l'equipement 2 ---
ID : 102
Nom : Routeur-Borne
Adresse IP : 192.168.1.254
Actif (1: Oui, 0: Non) : 0

--- LISTE DES EQUIPEMENTS ---
ID: 101 | Nom: Switch-Cisco  | IP: 192.168.1.1   | Etat: ACTIF
ID: 102 | Nom: Routeur-Borne | IP: 192.168.1.254 | Etat: INACTIF

Changement d'etat du premier equipement...
L'equipement 101 est maintenant INACTIF.

Memoire liberee avec succes.
