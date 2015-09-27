#include "texte.h"

using namespace std;

Texte::texte(){
  message = "ceci est un TP pour OpenClassroom";
}

string Texte::afficher() {
  return this->message;
}
