class Shady{
	
	//Instance Variables  (data or "State")
	String Lyrics;
	int beats;
	//Classes can contain
	
	//1. Data
	//2. Subroutines (methods)
	
	void rap() {
		System.out.println("Im beginning to feel like a RAP GOD");
	}
	
	void write() {
		System.out.println("I wrote till my wheels fell off");
	}
}


public class AppClass {
	public static void main(String[] args) {
	System.out.println("Slim Shady is Alive");
	
	Shady rap1 = new Shady();
	rap1.Lyrics = "Hi! My Name is . . ";
	rap1.beats = 130;
	
	System.out.println(rap1.Lyrics);
	rap1.rap();
	rap1.write();
	
	}

}
