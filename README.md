# Ft_printf - Le 101 (école 42)

## Objectifs
• Vous devez recoder la fonction printf de la librairie C.

• Votre fonction s’appelera ft_printf et sera prototypée de la même façon que printf.

• Vous ne ferez pas la gestion de buffer présente dans la fonction printf de la librairie C.

• Vous devez gérer les conversions suivantes : sSpdDioOuUxXcC

• Vous devez gérer le %%

• Vous devez gérer les flags #0-+ et espace

• Vous devez gérer la taille minimum du champ

• Vous devez gérer la précision

• Vous devez gérer les flags hh h l ll j z

## Fonctions autorisées
◦ write
◦ malloc
◦ free
◦ exit
◦ les fonctions du man 3 stdarg

## Bonus réalisés

• Gestion des couleurs : {color}text{eoc}<br/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
colors : white, blue, yellow, green, black, grey, cyan

• Gestion de flags supplémentaires<br/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  %b : binaire<br/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  %f : floats<br/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  %n : nombre de caractères déjà écrits stocké dans le int* passé en paramètre

## Utilisation

#### Télécharger et compiler ft_printf
```
git clone https://github.com/Alhuin/ft_printf.git ~/Ft_printf
cd ~/Ft_printf
make
```
#### Inclure à votre projet
```
#include "~/Ft_printf/ft_printf/libftprintf.h"
```
#### Compilation & exécution
```
gcc -o project file1 file2 file3 -L. lftprintf
./project
```

## Licence
Ce projet a été produit sous licence MIT - voir le fichier LICENSE.md pour plus d'informations.
