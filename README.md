# Projeto: Análise de Complexidade em um Sistema de Cadastro

Este repositório contém o código-fonte de um sistema de cadastro de animais, desenvolvido em C, para o projeto da disciplina de **Análise e Complexidade de Algoritmo**.

O objetivo principal deste código não é ser uma aplicação final, mas sim servir como um objeto de estudo prático. Ele foi criado para ilustrar, de forma didática, os conceitos teóricos abordados no artigo "Análise e Complexidade de Algoritmo".

## O Propósito do Projeto

A análise de complexidade de algoritmos busca avaliar o desempenho de uma solução com base no número de operações realizadas e na memória utilizada, conforme o tamanho da entrada (n) cresce. Este projeto busca materializar essa teoria, analisando o desempenho de um algoritmo simples em diferentes cenários.

## Análise do Código e Relação com a Teoria

O sistema implementa duas funcionalidades principais que servem para ilustrar as notações assintóticas discutidas no trabalho.

### 1. Cadastro de Animais (Opção 1)

A operação de cadastrar um novo animal adiciona um registro ao final de um array. Como o programa mantém um contador `total` que aponta para a próxima posição livre, a inserção dos dados é direta.

* **Análise de Complexidade**: O número de operações para adicionar um novo animal é sempre o mesmo, não importando quantos já existam. A complexidade é **Constante — O(1)**, pois o tempo de execução é fixo e independe do tamanho da entrada.

### 2. Listagem de Animais (Opção 2)

Para listar os animais, o programa usa uma estrutura de repetição (`for`) que percorre todos os elementos já cadastrados.

* **Análise de Complexidade**: O número de operações é diretamente proporcional ao número de animais na lista (`total`). Se houver 10 animais, o laço executa 10 vezes; se houver 100, executa 100 vezes. Portanto, a complexidade é **Linear — O(n)**, pois o tempo de execução cresce proporcionalmente à entrada.

## Como Compilar e Executar

1.  Certifique-se de ter um compilador C (como o GCC) instalado.
2.  Salve o código em um arquivo chamado `cadastro.c`.
3.  Abra o terminal e compile o programa com o seguinte comando:
    ```sh
    gcc cadastro.c -o programa
    ```
4.  Execute o programa:
    ```sh
    ./programa
    ```

## Conclusão

Este exercício prático reforça a importância da escolha adequada de algoritmos para garantir soluções eficientes e escaláveis. Ao demonstrar visualmente a diferença de desempenho entre operações O(1) e O(n), o projeto conecta a teoria da análise de complexidade com a prática do desenvolvimento de software, um passo crucial para criar soluções otimizadas.
