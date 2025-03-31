/*3. Autenticación de usuario: Pedir un nombre de usuario y contraseña, y verificar si
coinciden con un usuario y contraseña guardado.*/

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        String user = "Frodouwu";
        String pass = "Algoritmo";
        
        System.out.println("USUARIO: ");
        String input1 = sc.next();

        System.out.println("CONTRASEÑA: ");
        String input2 = sc.next();

        if (input1.equals(user) && input2.equals(pass)) {
            System.out.println("SON CORRECTOS");
        } else {
            System.out.println("SON INCORRECTOS");
        }
	}
}
