# Mini Projeto 02 - Central de Comunicações Alienígenas

Realizado por: Daniel Pandolfo de Figueiredo e Gabriel Lemos de Oliveira

## Transformações

| Código | Função | O que faz |
|:---:|---|---|
| 1 | `inverter` | Inverte a ordem dos caracteres da mensagem. |
| 2 | `deslocar` | Desloca letras e dígitos `n` posições (cifra de César). Letras giram dentro do alfabeto e mantêm a caixa; dígitos giram entre 0 e 9. Os demais caracteres não mudam. |
| 3 | `trocarParesImpares` | Troca cada caractere de posição par com o seguinte (0↔1, 2↔3, ...). |
| 4 | `inverterCaixa` | Troca maiúsculas por minúsculas e vice-versa. |
| 5 | `rotacionar` | Rotaciona a mensagem `n` posições para a direita. |
| 6 | `trocarMetades` | Troca a primeira metade da mensagem com a segunda. Se o tamanho for ímpar, o caractere do meio permanece no lugar. |


```mermaid
flowchart TD
    A([Início]) --> B["Lê a mensagem"]
    B --> C["Lê o código da operação"]
    C --> D{"Código entre 1 e 6?"}
    D -- Não --> Z["Imprime a mensagem final"]
    Z --> FIM([Fim])

    D -- Sim --> S{"Qual operação?"}
    S -- 1 --> O1["inverter"]
    S -- 2 --> N2["Lê n"] --> O2["deslocar n posições"]
    S -- 3 --> O3["trocarParesImpares"]
    S -- 4 --> O4["inverterCaixa"]
    S -- 5 --> N5["Lê n"] --> O5["rotacionar n posições"]
    S -- 6 --> O6["trocarMetades"]

    O1 --> C
    O2 --> C
    O3 --> C
    O4 --> C
    O5 --> C
    O6 --> C
```
