/* 1 Comparar dos números: Solicitar dos números distintos y mostrar cual es el mayor, tener
en cuenta el caso de que sean iguales. */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        System.out.println("INGRESAR NÚMERO");
        int num1 = sc.nextInt();
        System.out.println("INGRESAR OTRO NÚMERO");
        int num2 = sc.nextInt();

        if (num1 > num2) {
            System.out.println(num1 + " es mayor que " + num2);
        } else if (num2 > num1 )
            System.out.println(num2 + " es mayor que " + num1);
        else {
            System.out.println("SON IGUALES");
        }
	}
}
