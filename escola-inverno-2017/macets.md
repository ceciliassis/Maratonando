#template
```c++
#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f //infinito
#define LINF 0x3f3f3f3f3f3f3f3fLL
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
```

#reference
cplusplus reference - containers (todas as estruturas da STL)

#map
- tomar cuidado ao acessar o map com `[]`, porque dessa forma a chave é inserida no map e depois retornada. Se for necessario verificar, é interessante usar as funções: `count(value)` ou `find{value)`
- inserção no map também pode ser feita igual a um pair: `map.insert(make_pair(key, value))`

#string
- conversao string para char: `string.c_str()`

#recomendações
- nunca usar long float

#pilha
- `stack<T>`
- não tem como percorrer
- inserir valor: `s.push(T)`
- retorna o top: `s.top()`;
- retira, sem retornar o top: `s.pop()`;
- tamanho: `s.size()`
- vazia: `s.empty()`

#fila
- `queue<T>`
- retorna a frente: `q.front()`
- retira, sem retornar o top: `q.pop()`;
- tamanho: `q.size()`
- vazia: `q.empty()`
- se tentar tirar ao e a fila estiver vazia, **RTE**