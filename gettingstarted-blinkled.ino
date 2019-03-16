// ------------
// Blink an LED
// ------------

/*-------------

This program will blink an led on and off every second.
It blinks the D7 LED on your Particle device. If you have an LED wired to D0, it will blink that LED as well.

-------------*/



int led1 = D6; // Instead of writing D0 over and over again, we'll write led1

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2


void setup() {


	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

void led_on(int delay_time)
{
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(delay_time);
}

void led_off(int delay_time)
{
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(delay_time);
}

void morse_dash()
{
    led_on(1500);
    led_off(500);
}

void morse_dot()
{
    led_on(500);
    led_off(500);
}

void loop() {
    //letter E .
	morse_dot();
	led_off(1000);
	
	//letter D - . .
	morse_dash();
	morse_dot();
	morse_dot();
	led_off(1000);
	
	//letter R . - .
    morse_dot();
    morse_dash();
    morse_dot();
	led_off(1000);
	
	//letter I . .
    morse_dot();
    morse_dot();
	led_off(1000);
	
	//letter C - . - .
	morse_dash();
	morse_dot();
	morse_dash();
	morse_dot();
	led_off(1000);

}
