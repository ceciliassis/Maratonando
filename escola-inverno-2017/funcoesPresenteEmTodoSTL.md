#size
- no caso do vector, retorna o tamanho da estrutura, e nao, necessariamente, a quantidade de elementos.
    + caso o tamanho do vector seja informado antes, o espaço é alocado, e esse size retornado
        * se ja tiver o tamanho, dai nao se usa o pushback, e sim a repassagem por lugar, ex:
            ```c++
                vector<int> i(1000);
                i[ik] = 6;
            ```