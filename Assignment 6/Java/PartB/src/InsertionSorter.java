import java.util.ArrayList;

public class InsertionSorter  <E extends Number & Comparable<E>>  implements Sorter<E> {


	@Override
	public void sort(ArrayList<Item<E>> arr) {
		// TODO Auto-generated method stub
		int n = arr.size();
		
		for(int i = 1; i < n; ++i) {
			E key = arr.get(i).getItem();
			int j = i - 1;
			
			while(j >= 0 && (arr.get(j).getItem().compareTo(key)) > 0) {
				arr.get(j+1).setItem(arr.get(j).getItem());
				j = j - 1;
				
			}
			arr.get(j+1).setItem(key);
			
		}
	}
	
}
