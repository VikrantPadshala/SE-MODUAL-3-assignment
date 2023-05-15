#include<stdio.h>
int main()
{      printf("Find the type of DATA\n");
	  char DATA;
	  printf("enter any alphabet to find weather it is Constant or Vowel\n");
	  scanf("%c",&DATA);//value from user
	  
	  switch(DATA)
	  {
	  	case 'A':
	  	printf("Entered DATA is vowel");
	  	break;
	  	
	    case 'E':
		printf("Entered DATA is vowel");  
		break;
		
		case 'I':
		printf("Entered DATA is vowel");
		break;
		
		case 'O':
		printf("Entered DATA is vowel");
		break;
		
		case 'U':
		printf("Entered DATA is vowel");
		break;
		
		case 'a':
	  	printf("Entered DATA is vowel");
	  	break;
	  	
	    case 'e':
		printf("Entered DATA is vowel");  
		break;
		
		case 'i':
		printf("Entered DATA is vowel");
		break;
		
		case 'o':
		printf("Entered DATA is vowel");
		break;
		
		case 'u':
		printf("Entered DATA is vowel");
		break;
		
		default:
		printf("Entered DATA is Consonent");	
			
	  }
	  return 0;
}
