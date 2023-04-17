Algoritmo "semnome"
//Rafael Giordano Matesco, Davi Baruel Lara, Rafael Sant'Ana de Andrade Osses 1HID
Var

a: inteiro
b: real
c: inteiro
d: inteiro
diasemana: inteiro
x: inteiro
y: inteiro

Inicio
x <- 4
y <- 100

escreval("digite o dia em que você nasceu abaixo:")
leia(d)

escreval("digite o ano em que você nasceu abaixo")
leia(a)

escreval("digite o mês em que você nasceu abaixo:")
leia(c)

se((c = 1) ou (c = 10)) entao
                c <- 0
        senao
            se((c = 2) ou (c = 3) ou (c = 11)) entao
            c <- 3
                senao
                     se((c = 4) ou (c = 7)) entao
                     c <- 6
                          senao
								       se((c = 9) ou (c = 12)) entao
                               c <- 5
                                   senao
                                        se(c = 5) entao
                                         c <- 1
                                           senao
                                                se(c = 6) entao
                                                c <- 4
                                                   senao
                                                        se(c = 8) entao
                                                        c <- 2
                                        fimse
                                    fimse
                                fimse
                            fimse
                        fimse
                    fimse
                fimse

se((a % x = 0) e (a % y <> 0)) entao
           escreval(a," é um ano bissexto")
     senao
           escreval(a," não é um ano bissexto")
        fimse
d <- d - 1
a <- a - 1900
b <- a/4
DiaSemana <- (a+b+c+d)%7

          se(DiaSemana = 0) entao
            escreval("voce nasceu em uma segunda feira!")

          senao
           se(DiaSemana = 1) entao
             escreval("voce nasceu em uma terca feira!")

           senao
            se(DiaSemana = 2) entao
              escreval("voce nasceu em uma quarta feira!")

            senao
             se(DiaSemana = 3) entao
               escreval("voce nasceu em uma quinta feira!")

             senao
              se(DiaSemana = 4) entao
                escreval("voce nasceu em uma sexta feira!")

              senao
               se(DiaSemana = 5) entao
                 escreval("voce nasceu em um sabado!")

               senao
                se(DiaSemana = 6) entao
                   escreval("voce nasceu em um domingo!")
                  fimse
                  fimse
                  fimse
                  fimse
                  fimse
                  fimse
                  fimse
 escreval("")
 escreval("feito por Rafael Giordano Matesco, Davi Baruel Lara, Rafael Sant'Ana de Andrade Osses")
Fimalgoritmo
