/* 2 Verificación de edad: Escribir un programa que determine si una persona puede votar
(mayor de 16 años) si está obligado a votar (mayor de 18 años) o si no puede votar.*/

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        System.out.println("INGRESAR EDAD");
        int edad = sc.nextInt();

        if (edad > 16 && edad < 18) {
            System.out.println("PUEDE VOTAR PERO NO ES OBLIGATORIO");
        } else if (edad > 18) {
            System.out.println("ES OBLIGATORIO VOTAR");
        } else {
            System.out.println("ES MUY MENOR PARA VOTAR");
        }
	}
}
