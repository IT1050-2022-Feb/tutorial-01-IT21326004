/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int dis,rate1,rate2,tot,amount,re_dis;
	
	printf("Enter the distance the van has travelled(Km):");
	scanf("%d",&dis);
	
	rate1 = 50;
	rate2 = 40;
	
	if(dis <= 30)
	{
		tot = rate1 * dis;
	}
	else if(dis > 30)
	{
		amount = 30 * rate1;
		re_dis = dis - 30;
		tot = amount + re_dis * rate2;
	}
	
	printf("Your amount is %d",tot);
  
  return 0;
}
