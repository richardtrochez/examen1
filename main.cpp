#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
    float acumulado;
while(!mi_cola.empty()){
   while (!mi_pila.empty())
   {

    acumulado+=mi_pila.front():
    mi_pila.pop();

   }

    acumulado+=mi_cola.front();
    mi_cola.pop();

}
return acumulado;

}
//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
  //vector


    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
    return -1;
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;

    agenda["Lolo"]=98923212;
    agenda["Lola"]=98923212;
    agenda["Rufo"]=93212322;
    agenda["Punpun"]=99321273;
    agenda["Ponpon"]=92133243;

    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
double aux;
set<double>::iterator i=mi_set.begin();
while (!mi_set.end()){

  if (mi_set.begin()>aux)
    {
    return aux;
  mi_set.erase()
    }
}
return mi_set.begin();
}



int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
