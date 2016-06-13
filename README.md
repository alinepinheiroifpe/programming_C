echo "# Rstudio" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/alinepinheiroifpe/Rstudio.git
git push -u origin master


library(LogisticDx)
data(bbdm)
dados=bbdm
attach(dados) # com o attach você pode chamar as colunas pelo nome
head(bbdm)
help(bbdm)
summary(bbdm)

dados

# filtar dados com subset
subset(dados)
subset(dados, MST=="widowed")

hist(AGLP, freq=FALSE, breaks=20)
hist(AGLP, freq=FALSE, breaks=20, col="blue")

library(MASS)

yy = hist(AGLP, freq=FALSE, breaks=20, col="blue")
plot(yy$mids,yy$density, pch=20, lwd=3 #vc guardou um histograma na variável yy e pediu pra ele plotar os pontos médios das barras versus a densidade empírica

     yy = hist(AGLP, freq=FALSE, breaks=20, col="blue")
     plot(yy$mids,yy$density, pch=20, lwd=3)
     
     #agora vamos estimar os parametros da distribuição normal
     # o pacote MASS uq estamos usando tem a função para estimação de verossimilhaça para algumas distribuições, e a normal é uma delas
# então vamos usar a função fitdistr da seguinte forma:
     #a estimação usada foi estimação por máxima verossimilhança
     f = fitdistr(AGLP, densfun = "normal")   
     # e agora rodando só o f, teremos uma média e um desvio padrão
f
#agora vamos desenhar a curva da densidade de uma normal com esses parâmetros. Basta fazer:
#dnorm é uma função pronta do R que recebe um valor x e os parametros e retorna a densidade naquele ponto
#lwd é a grossura da linha
#add=TRUE é pra ele colocar no ultimo gráfico
curve(dnorm(x,f$estimate[1],f$estimate[2]),col="red", lwd=3,add=TRUE)

hist(HIGD, freq=FALSE, breaks=20)


