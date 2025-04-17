
# Super Trunfo de Cidades - Projeto em Linguagem C

Este projeto é uma versão do jogo Super Trunfo, onde cada carta representa uma cidade brasileira com diversos atributos que podem ser comparados entre duas cartas.

## 🔧 Compilação e Execução

Para compilar o programa, utilize um compilador C como `gcc`. No terminal, execute:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```


## 🧩 Atributos das Cartas

Cada carta representa uma cidade e possui os seguintes atributos:

1. População
2. Área
3. PIB (em bilhões)
4. Número de Pontos Turísticos
5. Densidade Populacional
6. PIB per capita
7. Super Poder (soma ponderada de todos os atributos)
8. Ataque
9. Defesa
10. Recuo

## 📊 Cálculo de Atributos Derivados

- **Densidade Populacional**: População / Área
- **PIB per capita**: (PIB × 1.000.000.000) / População
- **Super Poder**: Soma ponderada dos atributos, incluindo inverso da densidade.

## 🎲 Modo Aleatório ou Manual

Durante a entrada dos atributos **Ataque**, **Defesa** e **Recuo**, o jogador pode escolher entre:

- Inserir os valores manualmente
- Sortear automaticamente valores entre 0 e 100 com uso de `srand(time(NULL))` e `rand()`

## 📌 Menu de Comparação

O jogador escolhe dois atributos diferentes para comparar entre as duas cartas. O vencedor será aquele com a maior soma dos dois atributos (exceto para Densidade Populacional, onde o menor valor vence).

### Exemplo de Menu:

```
--- Escolha o primeiro atributo para comparar ---
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional (menor vence)
6 - PIB per capita
7 - Super Poder
8 - Ataque
9 - Defesa
10 - Recuo
```

O segundo menu será dinâmico, excluindo o atributo escolhido anteriormente.

## 🏆 Resultado da Rodada

Após a escolha e soma dos atributos, será exibido:

- Nome das cidades
- Valores dos atributos comparados
- Resultado final (vitória ou empate)

## ✨ Exemplo de Saída

```
Cidade 1: Belo Horizonte
Cidade 2: São Paulo
Atributo 1 (População) -> 2500000 vs 12000000
Atributo 2 (PIB) -> 120.50 vs 520.30
Soma Belo Horizonte: 1225000.50
Soma São Paulo: 1252030.30
Vitória de São Paulo!
```

---

 ## 👩‍💻 Desenvolvido por
 Ariane B. Emidio Pereira – como parte do projeto da disciplina de Linguagem de Programação, da Faculdade de Ciencia da Computação.
