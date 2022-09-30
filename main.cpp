//
// Created by ronal on 9/30/2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Execute.h"

using namespace std;
int main() {
    vector<int> vetor;
    int tamanho;
    Execute execute;
    Execute();
    cin >> tamanho;
    execute.InputVector(vetor, tamanho);
    execute.PrintVector(vetor); // Comentario. Deu certo!
    return 0;
}
