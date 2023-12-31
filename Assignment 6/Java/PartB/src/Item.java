
/* ENSF 614 - Lab 6 Exercise C and D
 * M. Moussavi, October 2021
 * 
 */

class Item <E extends Number & Comparable<E>>{
	private E item;
	public Item(E value) {
		item = value;
	}
	
	public void setItem(E value){
		item = value;
	}
	
	public E getItem(){
		return item;
	}
	 @Override
    public String toString() {
        return item.toString(); // Convert the value to a string
    }
	
	public int compareTo(E item) {
		return item.compareTo(item);
		
	}
	 
}
