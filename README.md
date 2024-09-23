# Système de Chiffrement de Messages

## Description du Projet

Ce projet en C a pour but de mettre en œuvre des algorithmes de chiffrement et déchiffrement pour sécuriser des messages. Il offre une interface simple permettant aux utilisateurs de chiffrer ou déchiffrer des fichiers texte en utilisant les méthodes de César et de Vigenère.

### Fonctionnalités

- **Chiffrement César** : Un algorithme de substitution où chaque lettre du texte est décalée d'un certain nombre de positions dans l'alphabet.
- **Chiffrement Vigenère** : Une méthode de chiffrement plus complexe qui utilise une clé pour déterminer le décalage de chaque lettre, rendant ainsi le message plus difficile à déchiffrer sans la clé appropriée.
- **Déchiffrement** : Le programme peut également déchiffrer des messages précédemment chiffrés, permettant aux utilisateurs de retrouver le texte original.

### Utilisation

Le programme prend trois paramètres en ligne de commande :

1. **Mode de fonctionnement** : `-c` pour le chiffrement, `-d` pour le déchiffrement.
2. **Nom du fichier** : Le fichier contenant le message à traiter.
3. **Clé** : La clé à utiliser pour le chiffrement ou le déchiffrement.

#### Exemples de Commande

- Pour chiffrer un message avec César : 
  ```bash
  ./main -c message.txt 1
