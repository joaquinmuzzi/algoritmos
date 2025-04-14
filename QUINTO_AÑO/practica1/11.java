/* 1 Ingresar una letra y mostrar si corresponde a una opción: A. Atacar, B. Bloquear, C. Correr. */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("INGRESAR LETRA");
		char letra = sc.nextInt();

		switch(letra) {
			case "A": 
				System.out.println("Atacar");
			break;
			case "B": 
				System.out.println("Bloquear");
			break;
			case "B": 
				System.out.println("Correr");
			break;
		}

		sc.close();
	}

}

