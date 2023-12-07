/*
 *  lab2exe_B.cpp
 *  ENSF 614 Lab 2 Exercise B
 */

int my_strlen(const char *s);
/*  Duplicates strlen from <cstring>, except return type is int.
 *  REQUIRES
 *     s points to the beginning of a string.
 *  PROMISES
 *     Returns the number of chars in the string, not including the
 *     terminating null.
 */

void my_strncat(char *dest, const char *source, int pos);
/*  Duplicates strncat from <cstring>, except return type is void.
 */

#include <iostream>
#include <cstring>
using namespace std;

int my_strlen(const char *s);
void my_strncat(char *dest, const char *source, int);
int  my_strcmp(const char *str1,const char *str2);
	
int main(void)
{
    char str1[7] = "banana";
    const char str2[] = "-tacit";
    const char* str3 = "-toe";
    
    /* point 1 */
    char str5[] = "ticket";
    char my_string[100]="";
    int bytes;
    int length;
    
    /* using strlen libarary function */
    length = (int) my_strlen(my_string);
    cout << "\nLine 1: my_string length is " << length;
  
    /* using sizeof operator */
    bytes = sizeof (my_string);
    cout << "\nLine 2: my_string size is " << bytes << " bytes.";
   
    /* using strcpy libarary function */
    strcpy(my_string, str1);
    cout << "\nLine 3: my_string contains: " << my_string;
   
    length = (int) my_strlen(my_string);
    cout << "\nLine 4: my_string length is " << length << ".";
   
    my_string[0] = '\0';
    cout << "\nLine 5: my_string contains:\"" << my_string << "\"";
  
    length = (int) my_strlen(my_string);
    cout << "\nLine 6: my_string length is " <<  length << ".";
   
    bytes = sizeof (my_string);
    cout << "\nLine 7: my_string size is still " << bytes << " bytes.";
 
    /* strncat append the first 3 characters of str5 to the end of my_string */
    my_strncat(my_string, str5, 3);
    cout << "\nLine 8: my_string contains:\"" << my_string << "\"";
  
    length = (int) my_strlen(my_string);
    cout << "\nLine 9: my_string length is " << length << ".";
   
    my_strncat(my_string, str2,  4);
    cout << "\nLine 10: my_string contains:\"" << my_string << "\"";
    
    /* strncat append ONLY up ot '\0' character from str3 -- not 6 characters */
    my_strncat(my_string, str3, 6);
    cout << "\nLine 11: my_string contains:\"" << my_string << "\"";
   
    length = (int) my_strlen(my_string);
    cout << "\nLine 12; my_string has " << length << " characters.";

    cout << "\n\nUsing strcmp - C library function: ";
    
    cout << "\n\"ABCD\" is less than \"ABCDE\" ... strcmp returns: " <<
    my_strcmp("ABCD", "ABCDE");

    cout << "\n\"ABCD\" is less than \"ABND\" ... strcmp returns: " <<
    my_strcmp("ABCD", "ABND");
    
    cout << "\n\"ABCD\" is equal than \"ABCD\" ... strcmp returns: " <<
    my_strcmp("ABCD", "ABCD");
 
    cout << "\n\"ABCD\" is less than \"ABCd\" ... strcmp returns: " <<
    my_strcmp("ABCD", "ABCd");

    cout << "\n\"Orange\" is greater than \"Apple\" ... strcmp returns: " <<
    my_strcmp("Orange", "Apple") << endl;
    return 0;
}

int my_strlen(const char *s){
	int count = 0; 
	while(true){
		if (s[count] == '\0'){
			break;
		}
		count += 1;
	}
	return count;
	
}
void my_strncat(char *dest, const char *source, int pos){
	
	/*
	int count = 0; 
	
	while(true){
		if (dest[count] == '\0'){
			
			break;
		}
		count += 1;
	}
	
	
	for(int i = 0; i < pos; i++){
		dest[count] = source[i];
		count += 1; 
	}	
	
	dest[count] = '\0';*/
	
	int count = 0;
	int count2 = 0;
	
	while(true){
		if (dest[count] == '\0'){
			break;
		}
		count += 1;
	}
	while(true){
		if(source[count2] == '0'){
			break;
		}
		count2 += 1;
	}

	while(count2>=0){
		dest[count] = source[count2];
		count += 1;
		count2 -= 1;
	}

	
}

int my_strcmp(const char *str1,const char *str2){
	int int1 = 0;
	int int2 = 0;
	int total = 0;
	int i = 0;
	while(true){
		
		if((str1[i]) == '\0' && (str2[i]) == '\0'){
			
			break;
		}
		else if((str1[i]) == (str2[i])){
			
			i += 1; 
		}
		else {
		
			break;
		}
		
	}
	int1 = int(str1[i]);
	int2 = int(str2[i]);
	total = int1 - int2;
	
	return total;
}

	
	