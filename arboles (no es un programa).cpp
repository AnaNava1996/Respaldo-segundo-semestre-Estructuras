//   un arbol consta de un conjunto finito de elementos, denominados nodos y un conjunto finito de lineas dirigidas, denominadas ramas reconectan los nodos

//   un arbol T es un conjunto finito de uno o mas nodos tales que:
//   1.Hay un nodo diseñado especialmente llamdado raiz.
//   2.los nodos restantes se dividen en m>=0 conjuntos distintos tales que T1,T2,T3,...Tm, en donde cáda uno de estos conjuntos es un árbol. A T1, T2....Tm se le deniomina subárboles de la raíz.


//El  nivel de un nodo es su distancia desde la raiz. Tambien se puede definir el nivel de un nodo como la longitud del camino que lo conecta  a la  raiz
//la altura de un arbol es el nivel de la hoja del camino mas largo desde la raíz más uno, o bien la longitud del camino más largo que conecta la raiz con la hoja

//Un arbol binario es una estructura recursiva, existe un nodo llamado raiz.
//cada nodo es raiz de su propio subarbol y tiene 0,1 o 2 hijos que son raices de arboles llamados subarbol izquierdo y derecho del nodo respectivamente.



// REcorrido de un arbol binario. es el hecho de ennunciar cada uno de los nodos a la vez e implica la visita de la raiz y el recorrido de sus subarboles izquierdo y derecho. 
// la unica diferencia es el orden en que se ejecutan las operaciones.


// Preorden
// 1. visitar la raiz                                                   +
// 2. recorrrer el subarbol izquierdo en preorden                     /  \      +AB
// 3. recorrer el subarbol derecho en preorden                       A    B

//Inorden
// 1. Recorrer el subarbol izqueirdo en orden                          +
// 2. visitar la raiz                                                /  \       A+B
// 3. recorrer el subarbol derecho en orden                         A    B

//Postorden
// 1. Recorrer el subarbol izquierdo en postorden.                      +
// 2. recorrer el subarbol derecho en postorden.                      /  \       AB+
// 3. visitar la raiz.                                               A    B




#include <iostream>



int main(int argc, char** argv) {
	return 0;
}
