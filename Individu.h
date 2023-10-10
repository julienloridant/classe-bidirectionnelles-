/**
 * @file Individu.h
 * @author Julien Loridant
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 1.0
 * @date 2022-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief cette classe représente un Individu et la Voiture qu'il conduit si il en possède une.
 * 
 * @details Au delà de représenter une personne par son nom et prénom, la classe Individu permet de renseigner la Voiture qu'il conduit.
 * 
 * La Voiture associée à l'Individu est représente par un pointeur vers un objet Voiture qui peut être mis à null si il n'en possède pas une.
 * 
 *@warning Un Individu conduit au plus une Voiture
 *
 * @deprecated La classe Individu sera bientôt remplacée par la classe Personne.   
 * 
 * @remark Code légèrement modifié pour le TP Doxygen
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:

      /**
       * @brief Le nom de l'individu
       * 
       */
    string nom; 
    /**
       * @brief Le prénom de l'individu
       * 
       */
    string prenom; 
    /**
       * @brief Lien avec la voiture de l'individu
       * 
       */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu, à partir de son nom(premier paramêtre), et de son prénom(deuxième paramêtre).
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief detruit un objet Individu 
     * 
     */
    ~Individu();

    /**
     * @brief Affiche l'identité de l'individu 
     * 
     * @return string l'identité de l'Individu sous la forme <nom> <prénom>
     * 
     * @bug Problème de formatage: un espace en trop 
     * 
     * @todo Ajouter un paramètre pour choisir si on veut un affichage du type <nom> <prénom> ou <prénom> <nom>
     */
    string toString();        

    /**
     * @brief // Affiche l'identité de l'Individu et de sa Voiture s'il en a une
     * 
     * @return string Chaine sous la forme <nom> <prénom> pilote la voiture : <marque> <imat>
     */
    string toStringAndLink(); 

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit l'objet Voiture conduit par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu.
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H