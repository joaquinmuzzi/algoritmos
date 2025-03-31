/*4. Validación de número positivo: Comprobar si un número ingresado es positivo, negativo o
cero.*/

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        System.out.println("INGRESAR NUMERO");
        int num = sc.nextInt();

        if (num > 0) {
            System.out.println("ES POSITIVO");
        } else if (num < 0) {
            System.out.println("ES NEGATIVO");
        } else {
            System.out.println("ES 0");
        }
	}
}
