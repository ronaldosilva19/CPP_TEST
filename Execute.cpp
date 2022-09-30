//
// Created by ronal on 9/30/2022.
//

#include "Execute.h"
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> Execute::InputVector(std::vector<int> &vetor, int tamanho) {
    int valor;
    while (tamanho > vetor.size()) {
        cin >> valor;
        vetor.push_back(valor);
    }
    return vetor;
}
void Execute::PrintVector(std::vector<int> &vetor) {
    sort(vetor.rbegin(), vetor.rend());
    for (auto item: vetor) {
        cout << item << " ";
    }
}