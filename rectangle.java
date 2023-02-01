package rectangle;
import java.util.Scanner;

public class shape {

	public static void draw(int a, int b) {
	    System.out.println("Give any symbol.");
	    Scanner s = new Scanner(System.in);
	    String symbol = s.next();
	    for(int i=0; i<a; i++)
	    {
	    	System.out.println("");
	        for(int j=0; j<b; j++)
	        System.out.print(symbol);
	    }
	    s.close();
	}
	public static void main(String[] args) {
	int check=0;
	while(check==0) {
			System.out.println("Input side(s) of rectangle/square.");
	        Scanner a_side = new Scanner(System.in);
	        int a = a_side.nextInt();
	        Scanner b_side = new Scanner(System.in);
	    	int b = b_side.nextInt();
	        if(a>1&&b>1) 
	        {
	        check=1;
	        draw(a,b);
	        }
	        else
	        System.out.println("Invalid parameters. Side(s) cannot be smaller than 1.");
		}
	}

}
