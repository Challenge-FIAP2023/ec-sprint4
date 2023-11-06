# Smart Trash

## Integrantes do grupo
- Victor Marcondes Nuzzi | RM 98209 | 1ESA
- Henri de Oliveira Lopes | RM 98347 | 1ESA

## Arquitetura Proposta

A arquitetura proposta para a solução IoT da Lixeira Inteligente envolve três componentes principais:

1. **Dispositivo IoT (Arduino):** O dispositivo IoT é composto por um Arduino equipado com um sensor ultrassônico (HC-SR04), um servo motor, e um LED indicador. Ele é responsável por medir a distância dos objetos na lixeira, controlar a tampa da lixeira e transmitir os dados em formato JSON para um possível back-end.

2. **Back-end:** O back-end é responsável por receber os dados enviados pelo dispositivo IoT, armazená-los em um banco de dados e disponibilizá-los para acesso posterior. Isso permite a análise dos dados coletados ao longo do tempo.

3. **Front-end:** O front-end é uma interface de usuário que pode ser acessada por meio de um aplicativo da web ou móvel. Ele permite que os usuários monitorem o status da lixeira, como níveis de alerta de enchimento da lixeira.

## Recursos Necessários

### Dispositivo IoT (Arduino)

- Arduino Uno ou equivalente
- Sensor ultrassônico HC-SR04
- Servo motor
- LED indicador
- Cabos e jumpers para conexões
- Computador com a IDE do Arduino instalada
- Bibliotecas necessárias (ArduinoJson e Servo) instaladas na IDE do Arduino

### Back-end

- Servidor web ou plataforma de nuvem para hospedar o back-end
- Linguagem de programação para desenvolvimento do back-end
- API para receber os dados enviados pelo dispositivo IoT

### Front-end

- Plataforma para desenvolvimento de interfaces de usuário
- Conhecimento em HTML, CSS e JavaScript para criar a interface
- API para consultar os dados do back-end
- Recursos gráficos para representar visualmente os dados da lixeira

## Instruções de Uso

### Configuração do Dispositivo IoT

1. Conecte o sensor ultrassônico HC-SR04 e o servo motor ao Arduino conforme indicado no código fornecido.
2. Instale as bibliotecas ArduinoJson e Servo na IDE do Arduino, se ainda não estiverem instaladas.
3. Carregue o código do Arduino fornecido no dispositivo IoT.

### Execução do Dispositivo IoT

1. O dispositivo IoT começará a medir a distância e enviará dados JSON pela porta serial (9600 bps).
2. Os dados incluem a distância medida e um indicador de status com base na distância.
3. Se a distância for inferior a 30 cm, a tampa da lixeira será aberta automaticamente.
4. Os LEDs indicadores podem ser usados para mostrar o status da lixeira.

### Configuração do Back-end

1. Configure um servidor web ou plataforma de nuvem para hospedar o back-end.
2. Desenvolva uma API para receber os dados enviados pelo dispositivo IoT.
3. Implemente a lógica para processar e armazenar os dados em um banco de dados.

### Configuração do Front-end

1. Desenvolva uma interface de usuário (web ou móvel) para monitorar o status da lixeira.
2. Utilize uma API para consultar os dados do back-end.
3. Implemente recursos gráficos para representar visualmente os dados da lixeira.

## Integração com Aplicativo e Site

### Aplicativo Móvel
 1. O aplicativo móvel permite aos usuários monitorar o status da lixeira em tempo real.
 2. Os usuários podem receber notificações quando a lixeira está cheia.
 3. O aplicativo também fornece informações sobre as lixeiras próximas à localização do usuário.
 4. Os dados coletados pelo dispositivo IoT são transmitidos para o aplicativo por meio de uma API.
 5. Os usuários podem configurar suas preferências, como níveis de alerta de enchimento da lixeira.

### Site
 1. O site oferece uma interface web para os usuários acessarem as informações da lixeira.
 2. Os usuários podem visualizar o histórico de uso da lixeira e acompanhar as mudanças ao longo do tempo.
 3. O site utiliza uma API para consultar os dados do back-end e exibi-los aos usuários.
 4. Recursos gráficos são utilizados para representar visualmente os dados da lixeira, como gráficos e mapas interativos.
