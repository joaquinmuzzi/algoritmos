/* 1 Motrar todos los numeros del 1 al N (ingresado por usuario) */

package holamundo;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("INGRESAR NUMERO");
    int n = sc.nextInt();

    for(int i = 1; i <= n; i++) {      
      System.out.println(i);
  	}
  }
}
