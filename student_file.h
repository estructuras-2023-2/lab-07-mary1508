vector<int> Torneo(vector<int> habilidades, int N, int K) {
    deque<int> cola(habilidades.begin(), habilidades.end());
    int ganador_victorias_consecutivas = 0;
    int ganador = cola.front();
    cola.pop_front();
