/* 6 Pedir al usuario 15 numeros y devolver cuanto de esos numeros son pares y cuantos son impares */

package holamundo;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
        Scanner sc = new Sacnner(System.in);
        int pares = 0; 
        int impares = 0;

        for (int i = 0; i < 15; i++) {
            System.out.println("INGRESAR NUMERO");
            if sc.nextInt() % 2 == 0 pares++ else impares++; 
        }
        System.out.println("HAY " + pares + " PARES Y " + impares + " IMPARES");
        sc.close();
	}

}
