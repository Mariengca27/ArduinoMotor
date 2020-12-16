/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

/*Montagem física:
    1º Arduino Uno;
    2º Um motor Tower Pro TM - Micro Servo 9g
    3º Cabos no mínimo 5 
    4º Um capacitor eletrolítico de 100MicroFarad(para ajudar no controle do picos de corrente que podem dar no sistema direto com o arduino fazendo com que o mesmo reset).
    5º Matriz de contato. 
    
LIGAÇÃO FÍSICA:

      Arduino para o capacitor:
           GND - cabo amarelo para o negativo do capacitor
           5V - cabo preto para o positivo do capacitor 
           
 
      Motor Servo  - ligação
           Fio vermelho - positivo ligado no fio vermelho do motor e a outra ponta no positivo do capacitor. 
           Fio marrom - neutro ligado no cabo preto, e a outra ponta ligada no negativo do capacitor. 
           Fio laranja vai no cabo preto que está com a outra ponta no pino 9 - representa o controle vai direto para o motor no cabo laranja do motor. 
      
*/



//Exemplo pego do próprio arduino e modificado de acordo com a necessidade do problema:
      //  arquivo -> exemplos -> servo -> sweep(exemplo que faz o motor rodar de um lado para outro o tempo todo)

      
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // Onde contra a "velocidade"/delay de giro do motor para um lado.
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // Onde contra a "velocidade" de giro do motor para o outro lado.
  }
  }
