### TP1
### Primeira tarefa da disciplina de Técnicas de Programação da Universidade de Brasília.

# Bouncing Ball
O programa simula o movimento de uma bola de massa **m**, em um ambiente com gravidade **g** e delimitado por uma caixa de coordenadas **xmin, xmax, ymin, ymax**.
Para essa parte do projeto, utilizaremos **apenas** a biblioteca _ball.h_, que contém a declaração das funções e variáveis que serão utilizadas pelos arquivos _ball.cpp_, que contém o método construtor que define valores iniciais às variáveis e a definição das funções declaradas em _ball.h_, e o arquivo _test-ball.cpp_, que contém a função main do programa, dando início ao movimento da bola e printando os resultados a cada intervalo de tempo definido por **dt**.
-------------

## Bibliotecas:
* O programa inclui a biblioteca <iostream>, facilitando o input e output de dados, e a biblioteca particular Ball.h, com a declaração da classe Ball.

## Métodos:
* **Ball():** Método construtor do programa. Como dito acima, define valores iniciais às variáveis que serão utilizadas no programa, como os limites da caixa que contém a bola (xmin, xmax, ymin, ymax), a velocidade da bola em x e y (vx, vy), aceleração da gravidade (g) e a massa da bola (m).
* **display():** Imprime no console (ou onde você preferir) a posição da bola no instante atual, definido por **dt**, cujo valor será definido na função main do programa.
 * exemplo: "0.2 -0.893" | (x,y)
* **step(dt):** contém a fórmula que define o movimento da bola em função do tempo, de acordo com a om o método de Euler(dado um vetor gravidade g, pertente aos reais, x(t) a posição da bola em um instante t, e v(t) a velocidade da bola, sua posição instantânea pode ser definida por:
 x(t + dt) = x(t) + v(t)dt +(1/2)g*dt²,
 v(t + dt) = v(t) + g*dt
 A função step(dt) contém também os condicionais que definem, de acordo com a posição da bola, se foi atingido o limite da caixa ou não, alterando a direção da bola.

------------

## test-ball.cpp
* O arquivo contém a função main do programa, que define um intervalo de tempo dt, que será o intervalo entre cada cálculo da posição da bola.
* A implementação dos métodos get e set nas variáveis x e y permitem definir na main a posição inicial da bola, desde que obedeça aos limites da caixa.
* A main contém um loop de 0 a 100 que chama o método step(dt), atualizando a posição da bola e o método display(), que printa no console as coordenadas da bola no instante dt. Os resultados são impressos separados por espaço e quebra de linha (x y \n).
* posteriormente foi implementado um novo método run, declarado no arquivo Ball.h e definido no arquivo ball.cpp, que substitui o loop da função main, mas apresenta o mesmo funcionamento. As duas alternativas estão presentes no programa, identificados por comentário;

------------

## Resultados:
	Ao compilar o programa, obtemos o seguinte resultado no terminal(reduzido para amostra):
0.01 -0.00877778
0.02 -0.0284444
0.03 -0.059
0.04 -0.100444
0.05 -0.152778
0.06 -0.216
0.07 -0.290111
0.08 -0.375111
0.09 -0.471
0.1 -0.577778
0.11 -0.695444
0.12 -0.824
0.13 -0.824
0.14 -0.695444
0.15 -0.577778
0.16 -0.471
0.17 -0.375111
0.18 -0.290111
0.19 -0.216
0.2 -0.152778
0.21 -0.100444
0.22 -0.059
0.23 -0.0284444
0.24 -0.00877778
0.25 -8.1532e-17
0.26 -0.00211111
0.27 -0.0151111

## podemos formatar a saída para csv, separando os argumentos por vírgula e importar em um programa de plotting, obtendo o seguinte resultado, para 100 instantes com posição inicial (0,0):
![Image of Plot](TP1/b16-lab/ball_position.PNG)