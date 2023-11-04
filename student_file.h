#ifndef student_file_h
#define student_file_h

#include <vector>
#include <deque>

vector<int> Torneo(vector<int> habilidades, int N, int K) {
    deque<int> cola(habilidades.begin(), habilidades.end());
    int ganador_victorias_consecutivas = 0;
    int ganador = cola.front();
    cola.pop_front();

    for (int juego = 1; juego < K; ++juego) {
        int oponente = cola.front();
        cola.pop_front();

        if (ganador < oponente) {
            swap(ganador, oponente);
            ganador_victorias_consecutivas = 0;
        }

        ganador_victorias_consecutivas++;
        cola.push_back(oponente);
        
        if (ganador_victorias_consecutivas == N) {
            cola.push_back(ganador);
            ganador_victorias_consecutivas = 0;
            ganador = cola.front();
            cola.pop_front();
        }
    }
        int oponenteK = cola.front();
        cola.pop_front();
        vector<int> resultado;
        if (ganador > oponenteK) {
            resultado.push_back(oponenteK);
            resultado.push_back(ganador);
        } else {
            resultado.push_back(ganador);
            resultado.push_back(oponenteK);
      }

      return resultado;
  }

  #endif
