
public class AppArray {
	public static void main(String[] args) {
		int val = 7;
		int[] vals;
		vals = new int[4];
		vals[0] = 10;
		vals[1] = 20;
		vals[2] = 30;
		System.out.println(vals[2]);
		
		for(int i = 0; i< vals.length ; i++)
		{
			System.out.println(vals[i]);
		}
	}
}
