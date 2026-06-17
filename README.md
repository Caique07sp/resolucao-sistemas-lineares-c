# 🔢 Resolução de Sistemas Lineares em C

Este projeto é um programa desenvolvido na linguagem C para resolver sistemas lineares de ordem 2x2 e 3x3 utilizando a Regra de Cramer.

Além de calcular as soluções, o programa realiza validação das entradas, impedindo que valores inválidos sejam inseridos pelo usuário.

---

## 🚀 Funcionalidades

- ✅ Resolução de sistemas lineares 2x2
- ✅ Resolução de sistemas lineares 3x3
- ✅ Cálculo utilizando a Regra de Cramer
- ✅ Validação de entradas numéricas
- ✅ Identificação de sistemas sem solução única (determinante igual a zero)
- ✅ Opção para resolver vários sistemas sem reiniciar o programa

---

## 🛠️ Tecnologias utilizadas

- Linguagem **C**
- Biblioteca padrão:
  - `stdio.h`

---

## 📋 Exemplo de uso

```
RESOLVEDOR DE SISTEMAS LINEARES

Digite a ordem do sistema (2 ou 3): 2

Sistema no formato:
a1x + b1y = c1
a2x + b2y = c2

Digite a1: 2
Digite b1: 1
Digite c1: 5
Digite a2: 1
Digite b2: -1
Digite c2: 1

RESULTADO FINAL

x = 2.00
y = 1.00
```

---

## 📐 Método utilizado

O programa utiliza a **Regra de Cramer**, um método matemático para resolver sistemas lineares através do cálculo de determinantes.

Para sistemas:

- **2x2**
- **3x3**

é calculado o determinante principal e, posteriormente, os determinantes de cada variável para encontrar seus respectivos valores.

---

## ▶️ Como executar

1. Abra o **Dev-C++**.
2. Crie um novo projeto ou um novo arquivo fonte (`.c`).
3. Copie e cole o código do programa no arquivo.
4. Salve o arquivo.
5. Clique em **Executar → Compilar e Executar** (ou pressione **F11**).
6. O programa será compilado e executado no terminal do Dev-C++.

---

## 📚 Objetivo

Este projeto foi desenvolvido com fins educacionais, visando praticar:

- Estruturas de repetição
- Estruturas condicionais
- Validação de entrada
- Manipulação de variáveis
- Cálculo de determinantes
- Implementação da Regra de Cramer na linguagem C

---

## 👨‍💻 Autor

**Caique Martins**

Desenvolvido como projeto de estudos em programação na linguagem C.
