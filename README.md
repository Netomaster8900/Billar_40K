# Billar 40K
Esta es la Demo oficial de demostración de capacidades de la versión 1.2 de AGW, la cual implementa más de 5 efectos procedurales reutilizables, pesando exactamente 40 KB (KiB) o 40960 Bytes

# Características
Este programa está diseñado para ser compilado bajo la librería AGW en versión 1.2 en adelante, no se garantiza el tamaño del archivo resultante, debido a que depende de optimizaciones del compilador extremas y poco recomendables

El CPU objetivo para el cual se garantiza rendimiento máximo es cualquier AMD Athlon X2, cualquier procesador de una generación anterior a este, o de una serie o características inferiores podrían mostrar un rendimiento inferior, y en la mayoría de los casos, nada disfrutable

Este videojuego de billar es, en su conceptualización, "completo", lo que quiere decir que es poco probable salirse de las reglas del mismo, al mismo tiempo que implementa un billar bola 8, y está pensado para jugarse entre 2 jugadores, y incluye 2 secretos para encontrar

Se recuerda que la versión 1.2 de AGW corre puramente sobre CPU, por lo que para mantener un rendimiento estable sobre el procesador objetivo(el mínimo absoluto) es imprescindible no mantener ningún otro proceso activo

AGW 1.2 es compatible desde Windows XP en adelante, tanto para x86 como para AMD64

## Como se juega
Billar 40K tiene una disposición especial de botones para procurar coherencia y facilidad de manejo, a continuación la tabla de controles:
|Técla|Acción|
|-----|--------|
|A|Gira el cursor de forma antihoraria|
|S|Aumenta el radio del cursor|
|Z|Disminulle el radio del cursor|
|X|Gira el cursor de forma horaria|
|J|Disminuye la fuerza de tiro|
|K|Realiza el tiro|
|L|Aumenta la fuerza de tiro|

Las acciones y teclas para el menú se especifican en la parte superior o inferior de la ventana

## Configuración
A pesar de solo medir 40 KiB, el apartado de ajustes es extremadamente extenso, contando con 8 ajustes diferentes:

<img width="906" height="542" alt="image" src="https://github.com/user-attachments/assets/06897702-c617-4057-a4cb-95d52bd90173" />

las cuales son extremadamente útiles para simular cualquier tipo de mesa uniforme, el juego cuenta con 3 opciones de tipo de mesa, 7, 8 y 9 pies, los cuales corresponden a los estándares de mesas de billar comunes

## Aspecto
Una de las partes más importantes de este simulador de billar es su estética interna, que, aunque no muy avanzada, es bastante comprensible:

<img width="906" height="543" alt="image" src="https://github.com/user-attachments/assets/ecbc4e47-30c8-40f5-935f-f7afc9f7e84e" />
<img width="906" height="542" alt="image" src="https://github.com/user-attachments/assets/09c3cfec-29bc-4f15-9c6e-23eba045c5dc" />
<img width="906" height="542" alt="image" src="https://github.com/user-attachments/assets/2abc2652-1926-47d0-b770-b6249a90fbf7" />

## Efectos y trucos
Como se mencionó en un párrafo anterior, este programa tiene varios trucos reutilizables, tanto técnicos como visuales, algunos son comunes, y algunos otros son técnicas propietarias, pero de uso libre, a continuación un sumario de los trucos utilizados, mediante numero de línea para la investigación individual:

|Efecto|Posición|
|-|-|
|Sol cinematográfico por CPU|Línea 450|
|Tablero de iluminación Manhattan|Línea 319 y 931|
|Fondo de iluminación tenue|Línea 221|
|Truco óptico de multiplicación de rendimiento x9|Líneas 230-231 y 570-577|
