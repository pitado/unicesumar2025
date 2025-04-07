## Atividade 4 - Padrão de Projeto *Singleton*
***
### Descrição
Nesta atividade, é esperado que vocês implementem o padrão de projeto *Singleton* nos seus projetos da Escola de T.I. Essa implementação consiste em um *Log Manager*, isso é, um módulo que permite salvar logs do sistema (acesse [esse link](https://aws.amazon.com/pt/what-is/log-files/) para entender melhor o que são logs e qual a sua função).

Assim, seguindo o exemplo que foi passando em sala, realize as seguintes tarefas:

1. Crie uma classe chamada *"LogManager.java*. Essa é a classe na qual o padrão *Singleton* deve ser aplicado;
2. A lista de logs deve ser *persistida em memória*, portanto, uma variável to tipo *List<String>* pode ser útil
    + *Escolher onde essa lista vai ser guardada faz parte do exercício*;
3. Utilize alguma função do seu projeto para testar o *LogManager*
    + Por exemplo, registre uma mensagem de log para cada cliente cadastrado.
4. [PONTO EXTRA] Considerando a importância dos logs, seria interessante se TODAS as classes do sistemas pudessem fornecer seus próprios logs. Como desafio e valendo e valendo um 0.5pts extra, implemente uma solução para que cada classe possa forncer uma mensagem de log. Um único *LogManager* deve ser dever ser capaz de gerenciar todas as classes. Evite a utilização de *herança*.
***
### Entrega
Faça o upload do projeto através do form https://forms.gle/jkALAe22rhDadFWB8 até as 19:00 do dia 14/04/2025 (Segunda-Feira). Adicione um arquivo "*Readme*" ao zip do projeto, explicando como o LogManager foi implementado.

