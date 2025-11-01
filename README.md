
# 🃏 Super Trunfo (em C)

## 👨‍💻 Autor
**Deyvison Alcantara da Silva**

---

## 🎯 Objetivo
Este projeto é a versão do desafio **Super Trunfo** em C.  
O programa cadastra duas cartas de cidades, calcula seus atributos e permite comparar **dois atributos diferentes** escolhidos pelo jogador.

---

## ⚙️ Funcionalidades
- Cadastro de duas cartas com:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (bilhões)
  - Pontos turísticos
- Cálculo automático de:
  - **Densidade demográfica** (População / Área)
  - **PIB per capita** (PIB / População)
- Menu interativo com `switch`
- Comparação de **dois atributos diferentes**
- Regra especial:
  - Para **Densidade Demográfica**, vence a menor.
- Uso de **operador ternário** para determinar o vencedor final.
- Tratamento de entradas inválidas.

---

## 🧮 Atributos disponíveis para comparação
| Código | Atributo              | Regra de Vitória         |
|:------:|:----------------------|:-------------------------|
| 1 | População | Maior vence |
| 2 | Área (km²) | Maior vence |
| 3 | PIB (bilhões) | Maior vence |
| 4 | Pontos Turísticos | Maior vence |
| 5 | Densidade Demográfica | **Menor vence** |
| 6 | PIB per Capita | Maior vence |

---

## 🚀 Como compilar e executar

### 1️⃣ No VS Code ou Codespace:
```bash
gcc CartasSuperTrunfo.c -o  CartasSuperTrunfo
