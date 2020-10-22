
class Programmer{
	public float Quality(int logic, int smartness, int intellect, int math) {
		float quality;
		quality = (logic*5 + smartness*6 + intellect*2 + math*3)/16;
		return quality;
	}
	
	public void Program(){
		System.out.println("Okay! I am Programming now");
	}
}
public class Human {
	public static void main(String[] args) {
		Programmer me = new Programmer();
		float myquality;
		myquality = me.Quality(90, 99, 32, 70);
		System.out.println("My Quality is: "+myquality);
		me.Program();
	}
}