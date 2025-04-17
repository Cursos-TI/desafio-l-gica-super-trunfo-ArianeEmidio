# Super Trunfo de Cidades – Projeto em C

Este projeto é uma simulação do clássico jogo **Super Trunfo**, utilizando cidades brasileiras como cartas. O jogo permite comparar atributos entre duas cidades e decidir qual vence com base na soma de dois atributos escolhidos.

## ✅ Funcionalidades

- Entrada de dados para duas cartas de cidades.
- Atributos disponíveis:
  - População
  - Área
  - PIB (em bilhões)
  - Número de Pontos Turísticos
  - Densidade Populacional
  - PIB per capita
  - **Ataque**
  - **Defesa**
  - **Recuo**
  - SuperPoder (cálculo especial)
- Menu interativo para seleção de dois atributos de comparação.
- Regras de comparação automáticas:
  - Para **Densidade Populacional**, o menor valor vence.
  - Para os demais, o maior valor vence.
- Escolha entre **entrada manual** ou **sorteio automático** de valores de Ataque, Defesa e Recuo.
- Uso de `srand(time(NULL))` para garantir aleatoriedade diferente a cada execução.

## 🧮 Fórmula do SuperPoder

```
SuperPoder = População + Área + PIB + Número de Pontos Turísticos + PIB per capita + (1 / Densidade Populacional) + Ataque + Defesa - Recuo
```

## 🧑‍💻 Como compilar

Você pode usar o compilador GCC:

```bash
gcc super_trunfo.c -o super_trunfo
```

## ▶️ Como executar

Após compilar, execute o programa:

```bash
./super_trunfo
```

## 📋 Exemplo de uso (menus)

### Entrada:

```
Digite o Estado da Primeira Carta (ex: SP):
SP
Digite o Código da Primeira Carta (ex: A01):
A01
Digite o Nome da Cidade da Primeira Carta:
São Paulo
...
Deseja inserir manualmente os valores de Ataque, Defesa e Recuo? (1 - Sim, 0 - Sortear aleatoriamente):
1
Digite o valor de Ataque (0 a 100):
90
Digite o valor de Defesa (0 a 100):
70
Digite o valor de Recuo (0 a 100):
20
```

### Menu de comparação:

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

### Saída:

```
***** RESULTADO DA COMPARAÇÃO *****
Cidade 1: São Paulo
Cidade 2: Belo Horizonte
Atributo 7 -> 8374289.25 vs 6403221.90
Atributo 9 -> 70.00 vs 55.00
Soma São Paulo: 8374359.25
Soma Belo Horizonte: 6403276.90
Vitória de São Paulo!
```

## 📁 Arquivos

- `super_trunfo.c` – código fonte do jogo
- `README.md` – este arquivo com instruções detalhadas


 ## 👩‍💻 Desenvolvido por
 Ariane B.Emidio Pereira – como parte do projeto da disciplina de Linguagem de Programação, da Faculdade de Ciencia da Computação.
