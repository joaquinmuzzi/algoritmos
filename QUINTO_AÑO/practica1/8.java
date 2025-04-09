/* 2 Mostrar el mayor número de un array de 6 elementos. */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] array = new int[6];
        
        for(int i = 0; i < 6; i++) array[i] = i+1;

        int mayor = 0;

        for(int i = 0; i < 6; i++) mayor = i > mayor ? i : mayor;

        System.out.println(mayor);

        sc.close();
	}

}
