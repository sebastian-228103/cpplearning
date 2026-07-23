#include <iostream> //input/output stream, eso significa lol usa el cin, cout, cerr y clog

using namespace std; // namespace sirve para aliviar el codigo de la libreria que traigas y su prefijo 
/*
cabe recalcar que namespace no es exclusivo para elementos como std, deberian servir para todas las librerias pero con el peligro de que 
si ya definiste un elemento llamado "cout" y el namespace lo defines con std,  el sistema fallara en saber de donde viene lo cual probocara un error 
de compilacion, por eso fijate que elementos trae una libreria cantes de aplicar un namespace 
*/

int main(){
    /**este es int main, elemento obligatorio, en arduino se usa void loop()  y cosas asi pero aca no y esta linea es 
    obligatoria, es el punto de partida para el codigo, sin esto el sistema no arranca y si o si debe devolver un int, 
    el sistema es mas estricto con esto pero mas util, me da la opcion de cortar el programa cuando retorna 1 en alguna linea de 
    accion, si coloco un if y me retorna algo que no quiero, puedo retornar 1 como boton de panico y todo caiga, al menos sabre 
    que el codigo fallo ahi 

    pd: no es obligatorio poner "retunr 0;" al final, solo es para definir que esta bn y ya
    */
   cout << "hola mundo";
   //bueno esto es solo como un print y ya 
    cout << "---hola mundo 2" << endl; 
    // y esto es un print con salto de linea, lo siguiente que escriba se vera debajo en la terminal, si no esta, se vera junto a lo anterior  
    cout << "holi"; 
}
/*cosa que remarcar antes de terminar esto es que la indentacion de c++ usa ; y {} osea que terminas las lineas
 con ; y trabajas dentro de los {}, si usas espacios o tabs dentro del codigo no importa obvio si tiene logica, el sistema simplemente 
 ignora los espacios en blanco, obvio para que se vea ordenado, ideal que este todo en linea 
 */
