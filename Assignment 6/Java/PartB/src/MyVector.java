 
import java.util.ArrayList;



public class MyVector<E extends Number & Comparable<E>>{
	
	private ArrayList<Item<E>> storageM;
	private Sorter<E> tempS;
	
	public MyVector(int n) {
        this.storageM = new ArrayList<Item<E>>(n);
    
    }
	

	
	public <T> void add(Item<E> value) {
		storageM.add(storageM.size(), (Item<E>) value);
		
		
	}
	
	public <T> void setSortStrategy(Sorter<E> s) {
		tempS = s;
	}
	
	
	public void performSort() {		

		tempS.sort(storageM);
		

	}
	
	public <T> void display() {
	
		for(Item<E> item: storageM) {
			System.out.println(item);
		}
		
		
		
	}	
	 
}
