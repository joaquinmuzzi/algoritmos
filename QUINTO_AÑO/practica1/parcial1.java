/* EJERCICIOS DE PARCIAL  */

package holamundo;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        String usuario = "Frodo";
        String contra = "Austran";

        for(int i = 5; i > 0; i--) {
            System.out.println("INGRESE USUARIO");
            String input1 = sc.next();
            System.out.println("INGRESE CONTRASEÑA");
            String input2 = sc.next();

            if(input1.equals(usuario) && input2.equals(contra)) {
                System.out.println("CORRECTO");
                break;
            } else if (input2.length() < 6) {
            	System.out.println("La contraseña tiene que tener al menos 6 caracteres");
            } else {
                System.out.println("NO TE CONOZCO");
            }
            System.out.println("Te quedan " + (i-1) + " intentos");
        }


		sc.close();
	}

}