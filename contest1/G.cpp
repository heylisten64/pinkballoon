#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k, min, max;
    cin >> n >> k;

    max = n / 2 + 1;

    if (n == 1)
        min = 1;
    else if (n < k)
        min = 2;
    else
    {
        min = n / k + 1;
        if (n % k > 1)
            min++;
    }

    cout << max << " " << min << endl;

    return 0;
}

// basicamente o problema da questao eh o numero minimo
// nessa logica, se o n for igual a 1, o minimo tambem eh 1
// se o n for menor que o k, podemos distribuir entre os k competidores pra que minimamente soh precise de uma vitoria a mais que eles, dando 2
// agora se o n for maior ou igual, precisamos calcular
// dividimos o numero de vitorias pelo numero de competidores
//  o campeao tem que se destacar, entao adicionamos 1
// checamos o resto pra tratar se necessario... se o resto for zero nao precisa mais tratar, o problema ja foi solucionado
// se o resto for 1, equivale ao 1 que adicionamos para diferenciar o campeao
// se for maior que 1, precisamos adicionar +1 ao campeao para diferencia-lo quanto a esse restante de partida
