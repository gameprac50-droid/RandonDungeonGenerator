# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// for passing Table parameters to function
struct area_type {
		int outcome[5];
		char *area;
		} ;


int main(){
	
	int i,n,z[2]={0,1};
	struct area_type A1,A2=
			{ {0,1,2,3,4},"Chamber"
			};
	
	A1.outcome[0] = 1;
	A1.outcome[1] = 2;
	
	n = strlen("Periodic Check");
	printf("n=%d\n",n);
	//A1.area = (char*)malloc(n*sizeof(char));
	
	//for (i=1;i<=n;i++){
	A1.area = "Periodic Check";
	
	printf("Area outcome 1 %d\nArea %s\n",A1.outcome[0],A1.area);
	
	printf("This begins the Random Dungeon Generator\n");
	
/*	This is how we'll encode in the Random Dungeon Generator

TABLE I. Periodic Check 
	Area Type | Code Action | Next Check | min - max | Compass
	passage	      l_n+1 = l_n + r*60'			I			1     2
	door		  compass		II			3     5 
	side passage  30'			I		    6     10
	passage turns 30'			IV		   11     13
	chamber       30'           V		   14	  16	*/


/*				
					for any TABLE
	Min - Max	|	Area Type	|	Next Check	| 	dir (qualitative) */



}
