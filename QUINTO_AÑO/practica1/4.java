/* 4 Mostrar la tabla de multiplicar completa del 1 al 10 */

package holamundo;

public class main {

	public static void main(String[] args) {
    for(int i = 1; i <= 10; i++) {
      for(int j = 1; j <= 10; j++) {
        System.out.print(i*j + "\t");
      }        
      System.out.print("\n");
  	}
  }
}
