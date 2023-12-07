/**
* ThreeColumnTable_Observer.java
* ENSF 614 Fall 2023 LAB 6 - EXERCISE D
* @authors Braden Tink and Christian Valdez
* Submitted On: Nov 11, 2023
*/

import java.util.ArrayList;

/**
 * ThreeColumnTable_Observer implements observer 
* @authors Braden Tink and Christian Valdez
 * Class has one class variable of type subject 
 *
 */
public class ThreeColumnTable_Observer implements Observer {
	Subject table;
	
	/**
	 * Constructor take in one argument of type subject which sets
	 * the local subject variable 
	 * @param tbl
	 */
	public ThreeColumnTable_Observer(Subject tbl) {
		// TODO Auto-generated constructor stub
		this.table = tbl;
		table.register(this);
	}

	
	/**
	 * Update function takes in a data array 
	 * Function then calls display passing in the data object 
	 */
	@Override
	public void update(ArrayList<Double> data) {
		// TODO Auto-generated method stub
		this.display(data);
	}
	
	
	/**
	 * Display function takes in one argument being the data array
	 * Then displays the data of that array 
	 * @param data
	 */
	public void display(ArrayList<Double> data) {
		System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
		int size = data.size();
		
		for(int i = 0; i < size;i++){
			
			
			if((i % 3) == 0 && i != 0) {
				System.out.print("\n");
			}
			System.out.print(data.get(i) + " ");
		}
		System.out.println();
		
	}

	
}