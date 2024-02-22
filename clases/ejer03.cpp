/* Crea clases para representar un mazo de cartas, cartas individuales y jugadores en un juego de cartas como el Poker o el Blackjack. Implementa métodos para barajar el mazo, repartir cartas a los jugadores y determinar el ganador. */
#include <iostream>
#include <ctime>
using namespace std;
class Cartas
{
private:
    int numCartas;
    int numJugadores;

public:
    Cartas(int _numCartas, int _numJugadores) : numCartas(_numCartas), numJugadores(_numJugadores) {}
    virtual void barajear()
    {
        }
};
int main()
{
    return 0;
}