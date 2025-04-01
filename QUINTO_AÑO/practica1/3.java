/* 3 Mostrar los numeros impares del 1 al N */

package holamundo;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("INGRESAR NUMERO");
    int n = sc.nextInt();

    for(int i = 1; i <= n; i += 2) {      
      System.out.print(i + "\t");
  	}
    sc.close();
  }
}
