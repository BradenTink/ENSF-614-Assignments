import java.util.ArrayList;

public class BubbleSorter <E extends Number & Comparable<E>> implements Sorter<E>{
	



	@Override
	public void sort(ArrayList<Item<E>> arr) {
		// TODO Auto-generated method stub
		int n = arr.size();
        boolean swapped;
		//arr.get(0).getItem().compareTo(arr.get(1).getItem());
		
		
		
		for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - 1 - i; j++) {
            
                if (arr.get(j).getItem().compareTo((arr.get(j+1).getItem())) > 0) {
                    // Swap array[j] and array[j+1]
                    E temp = arr.get(j).getItem();
                    arr.get(j).setItem(arr.get(j+1).getItem());
                    arr.get(j+1).setItem(temp);
                    
                    swapped = true;
                }
            }
            if (!swapped) {
                // If no two elements were swapped in the inner loop, the array is already sorted.
                break;
            }
        }
		
		
	}

	

}
