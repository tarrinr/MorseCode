#include "translate.h"

void translate(String input) {

	for (int i = 0; i < input.length(); i++) {

		letter(input[i]);

	}
}

void letter(char letter) {

	switch (letter) {

	case 'A': case'a': dot(); dash(); break;
	case 'B': case'b': dash(); dot(); dot(); dot(); break;
	case 'C': case'c': dash(); dot(); dash(); dot(); break;
	case 'D': case'd': dash(); dot(); dot(); break;
	case 'E': case'e': dot(); break;
	case 'F': case'f': dot(); dot(); dash(); dot(); break;
	case 'G': case'g': dash(); dash(); dot(); break;
	case 'H': case'h': dot(); dot(); dot(); dot(); break;
	case 'I': case'i': dot(); dot(); break;
	case 'J': case'j': dot(); dash(); dash(); dash(); break;
	case 'K': case'k': dash(); dot(); dash(); break;
	case 'L': case'l': dot(); dash(); dot(); dot(); break;
	case 'M': case'm': dash(); dash(); break;
	case 'N': case'n': dash(); dot(); break;
	case 'O': case'o': dash(); dash(); dash(); break;
	case 'P': case'p': dot(); dash(); dash(); dot(); break;
	case 'Q': case'q': dash(); dash(); dot(); dash(); break;
	case 'R': case'r': dot(); dash(); dot(); break;
	case 'S': case's': dot(); dot(); dot(); break;
	case 'T': case't': dash(); break;
	case 'U': case'u': dot(); dot(); dash(); break;
	case 'V': case'v': dot(); dot(); dot(); dash(); break;
	case 'W': case'w': dot(); dash(); dash(); break;
	case 'X': case'x': dash(); dot(); dot(); dash(); break;
	case 'Y': case'y': dash(); dot(); dash(); dash(); break;
	case 'Z': case'z': dash(); dash(); dot(); dot(); break;
	case ' ': space(); break;

	}

	digitalWrite(LED, LOW);
	delay(2 * DUR);

}

void dot() {

	digitalWrite(LED, HIGH);
	delay(DUR);
	digitalWrite(LED, LOW);
	delay(DUR);

}

void dash() {

	digitalWrite(LED, HIGH);
	delay(3 * DUR);
	digitalWrite(LED, LOW);
	delay(DUR);

}

void space() {

	delay(4 * DUR);

}