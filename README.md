Este projeto é uma simulação do jogo **Super Trunfo** com cidades brasileiras. O jogador informa os dados de duas cidades e compara **dois atributos à escolha** para ver qual cidade vence.

## 🛠️ Compilação

Para compilar o programa (em Linux, macOS ou WSL):

```bash
gcc supertrunfo.c -o supertrunfo
```

No Windows (usando o Code::Blocks, Dev C++ ou MinGW), apenas compile o arquivo normalmente.

## ▶️ Execução

Para rodar o programa via terminal:

```bash
./supertrunfo
```

## 🧾 Atributos disponíveis para comparação

Durante o jogo, você escolherá **dois atributos** para comparar. Os disponíveis são:

1. População  
2. Área  
3. PIB (em bilhões)  
4. Número de Pontos Turísticos  
5. Densidade Populacional (menor valor vence!)  
6. PIB per capita  
7. Super Poder *(atributo especial calculado automaticamente)*

## 💡 Exemplo de uso

```
Digite o Estado da Primeira Carta (ex: SP):
SP
Digite o Código da Primeira Carta (ex: A01):
A01
Digite o Nome da Cidade da Primeira Carta:
São Paulo
Digite a População da Primeira Carta:
12300000
Digite a Área da Primeira Carta:
1521
Digite o PIB da Primeira Carta (em bilhões):
700
Digite o Número de Pontos Turísticos da Primeira Carta:
25

...

--- Escolha o primeiro atributo para comparar ---
1 - População
2 - Área
3 - PIB
...
Escolha: 1

--- Escolha o segundo atributo (diferente do primeiro) ---
2 - Área
3 - PIB
...
Escolha: 6

***** RESULTADO DA COMPARAÇÃO *****
Cidade 1: São Paulo
Cidade 2: Belo Horizonte
Atributo População -> 12300000 vs 2500000
Atributo PIB per capita -> 56910.57 vs 48200.43
Vitória de São Paulo!
```

---

## 📌 Observações

- A densidade populacional é tratada de forma inversa (menor valor vence).
- O programa pode ser expandido para rodadas múltiplas ou torneios entre cidades!

---

## 👩‍💻 Desenvolvido por
Ariane B.Emidio Pereira – como parte do projeto da disciplina de Linguagem de Programação, da Faculdade de Ciencia da Computação.
