//Program To calculate electricity cost of Nepal 
#include<stdio.h>
int main()
{
	int N;
	printf("Enter your meter box type(5A or 15A or 30A or 60A)\n");
	printf("press 1 for 5A meter box\npress 2 for 15A meter box\npress 3 for 30A meter box\npress 4 for 60A meter box\n");
	scanf("%d",&N);
	switch(N)
	{
		case 1:
			printf("\nYou have 5A meter box ");
			int U;
			float C,Y;
			printf("\nEnter your units\t");
			scanf("%d",&U);
			if(U<=20)
			{
				C=30;
				printf("The electric charge for %d units is RS %f",U,C);
				Y=C;
		}
		if(U>=21 && U<=30 )
		{
				float C;
				C=50+(U-20)*6.50;
				printf("\nThe electric charge for %d units is RS %f",U,C);
				Y=C;
				
			}
			if(U>=31 && U<=50 )
			{
				float C;
				C=50+10*6.50+(U-30)*8;
				printf("\nThe electric charge for %d units is RS %f",U,C);
				Y=C;
				
			}
			if(U>=51 && U<=100 )
			{
				float C;
				C=75+10*6.50+20*8+(U-50)*9.5;
				printf("\nThe electric charge for %d units is RS %f",U,C);
				Y=C;
				
			}
			if(U>=101 && U<=250 )
			{
				float C;
				C=100+10*6.50+20*8+50*9.5+(U-100)*9.5;
				printf("\nThe electric charge for %d units is RS %f",U,C);
			Y=C; 	
			}
			if(U>250 )
	{	
				float C;
				C=150+10*6.50+20*8+50*9.5+150*9.5+(U-250)*11;
				printf("\nThe electric charge for %d units is RS %f",U,C);
				Y=C;
			}
			printf("\n After how many days are you going to pay?\t");
			int D;
			scanf("%d",&D);
			if(D<=7)
			{
				printf("\nCongatulations!You get 2 percent discount for early payment\n");
				Y=Y-(0.02*Y);
				printf("\nThe net payable amount is %f",Y);
			}
		
			if(D>=8 && D<=15)
			{
				printf("\nYou get no percent discount\n");
				Y=Y;
				printf("\nThe net payable amount is %f",Y);
			}
				if(D>=16 && D<=30)
			{
				printf("\n Sorry!You are penalized 5 percent for late payment\n");
				Y=Y+(0.05*Y);
				printf("The net payable amount is %f",Y);
				
			}
			
				if(D>=31 && D<=40)
				{
				printf("\n Sorry!You are penalized 10 percent for late payment\n");
				Y=Y+(0.10*Y);
				printf("The net payable amount is %f",Y);
				
			}
			
				if(D>=41 && D<=60)
				{
				printf("\n Sorry!You are penalized 25 percent for late payment\n");
				Y=Y+(0.25*Y);
				printf("The net payable amount is %f",Y);
				
			}
			
				if(D>61)
				{
				printf("\n Your connection may be cut down at any time. Pay as soon as possible\n");
				Y=Y+(0.25*Y);
				printf("\nThe net payable amount is %f",Y);
				
			}
			break;
			case 2:
			printf("You have 15A meter box ");
			int J;
			float K,L;
			printf("\nEnter your units\t");
			scanf("%d",&J);
			if(J<=20)
			{
				K=50+4*J;
				printf("The electric charge for %d units is RS %f",J,K);
				L=K;
		}
		if(J>=21 && J<=30 )
		{
				float K;
				K=75+20*8+(J-20)*6.5;
				printf("\nThe electric charge for %d units is RS %f",J,K);
				L=K;
				
			}
			if(J>=31 && J<=50 )
			{
				float K;
				K=75+20*4+10*6.5+(J-30)*8;
				printf("\nThe electric charge for %d units is RS %f",J,K);
				L=K;
				
			}
			if(J>=51 && J<=100 )
			{
				float K;
				K=100+20*4+10*6.50+20*8+(J-50)*9.5;
				printf("\nThe electric charge for %d units is RS %f",J,K);
				L=K;
				
			}
			if(J>=101 && J<=250 )
			{
				float K;
			K=125+20*4+10*6.5+20*8+50*9.5+(J-100)*9.5;
				printf("\nThe electric charge for %d units is RS %f",J,K);
			L=K; 	
			}
			if(J>250 )
	{	
				float K;
				K=175+20*4+10*6.50+20*8+50*9.5+150*9.5+(J-250)*11;
				printf("\nThe electric charge for %d units is RS %f",J,K);
				L=K;
			}
			printf("\n After how many days are you going to pay?\t");
			int M;
			scanf("%d",&M);
			if(M<=7)
			{
				printf("\nCongatulations!You get 2 percent discount for early payment\n");
				L=L-(0.02*L);
				printf("\nThe net payable amount is %f",L);
			}
		
			if(M>=8 && M<=15)
			{
				printf("\nYou get no percent discount\n");
				L=L;
				printf("\nThe net payable amount is %f",L);
			}
				if(M>=16 && M<=30)
			{
				printf("\n Sorry!You are penalized 5 percent for late payment\n");
				L=L+(0.05*L);
				printf("The net payable amount is %f",L);
				
			}
			
				if(M>=31 && M<=40)
				{
				printf("\n Sorry!You are penalized 10 percent for late payment\n");
				L=L+(0.10*L);
				printf("The net payable amount is %f",L);
				
			}
			
				if(M>=41 && M<=60)
				{
				printf("\n Sorry!You are penalized 25 percent for late payment\n");
				L=L+(0.25*L);
				printf("The net payable amount is %f",L);
				
			}
			
				if(M>61)
				{
				printf("\n Your connection may be cut down at any time. Pay as soon as possible\n");
				L=L+(0.25*L);
				printf("\nThe net payable amount is %f",L);
				
			}
			break;
			
			default:
				printf("Invalid Input.Please try again!");
}
}