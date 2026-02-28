# 🃏 Super Trunfo: Países - Comparador de Cartas em C

Este projeto consiste em um simulador de lógica para o jogo **Super Trunfo**, desenvolvido em linguagem C. O programa permite o cadastro técnico de duas cartas (representando cidades ou estados) e realiza a comparação automática de diversos atributos socioeconômicos para determinar o vencedor de cada categoria.

---

## 📝 Descrição do Projeto

O objetivo principal deste software é processar dados de entrada, realizar cálculos métricos e aplicar lógica booleana para comparar o desempenho de duas localidades diferentes. O sistema calcula indicadores fundamentais e define uma pontuação total chamada **"Super Poder"**.

### ⚙️ Atributos Cadastrados
* **Estado (ID):** Identificador de A a H.
* **Código da Carta:** Ex: A01, B03.
* **Nome da Cidade:** Identificação textual da localidade.
* **População:** Número total de habitantes.
* **Área (km²):** Extensão territorial.
* **PIB:** Riqueza total em bilhões.
* **Pontos Turísticos:** Quantidade de atrações cadastradas.

---

## 📊 Lógica de Funcionamento

O programa não apenas armazena os dados, mas também gera novos indicadores através de cálculos internos:

1. **Densidade Populacional:** Calculada como $População / Área$. (Nesta categoria, o **menor** valor vence).
2. **PIB per Capita:** Calculado como $(PIB \times 1.000.000.000) / População$.
3. **Super Poder:** Uma métrica composta pela soma da População, Área, PIB, Pontos Turísticos, PIB per Capita e o inverso da Densidade Populacional.

### Exemplo de Saída da Comparação
Ao final, o programa exibe o resultado binário (**1** para vitória da Carta 1, **0** para derrota):
* **População:** Carta 1 venceu (1)
* **Densidade:** Carta 1 venceu (0)
* **Super Poder:** Carta 1 venceu (1)

---

## 🛠️ Conceitos Aplicados
* **Tipos de Dados:** Uso de `unsigned long int`, `float` e `char`.
* **Casting:** Conversão de tipos para precisão nos cálculos.
* **Entrada e Saída:** Manipulação de dados via `scanf` e `printf` com formatação específica.
* **Lógica Booleana:** Comparadores de maior/menor para definir vencedores sem a necessidade de estruturas condicionais complexas.
