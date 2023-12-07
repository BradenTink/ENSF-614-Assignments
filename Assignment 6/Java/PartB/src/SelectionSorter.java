import java.util.ArrayList;

public class SelectionSorter <E extends Number & Comparable<E>>  implements Sorter<E> {

	@Override
	public void sort(ArrayList<Item<E>> arr) {
		// TODO Auto-generated method stub
		int n = arr.size();
		
		
        for (int i = 0; i < n-1; i++)
        {
            // Find the minimum element in unsorted array
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (arr.get(j).getItem().compareTo(arr.get(min_idx).getItem()) < 0 )
                    min_idx = j;
 
            // Swap the found minimum element with the first
            // element
            E temp = arr.get(min_idx).getItem();
            arr.get(min_idx).setItem(arr.get(i).getItem());
            arr.get(i).setItem(temp);
            
         
        }
		

	}
	

}
