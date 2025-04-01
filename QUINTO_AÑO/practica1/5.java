/* 5 Mostrar el factorial de un numero  */

package holamundo;
import java.util.Scanner;

public class main {

	public static void main(String[] args) {
        Scanner sc = new Sacnner(System.in);

        System.out.println("INGRESAR NUMERO");
        int num = sc.nextInt();
        int res = 1;
        for(int i = 1; i <= num; i++) {
            res *= i;
        }
        System.out.println(res);
        sc.close();
	}

}
