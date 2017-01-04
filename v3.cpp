#include <iostream>
using namespace std;

int mapping (int n, int k, int a1, int b1, int c1, int d1, int e1, int f1)
{
	switch (k)
	{
		case 1: n=a1; break;
		case 2: n=b1; break;
		case 3: n=c1; break;
		case 4: n=d1; break;
		case 5: n=e1; break;
		case 6: n=f1; break;
	}
	
	return n;
}

float fja (int i, float a, float b)
{
	float n; 
	switch (i)
			{
				case 0: n=a+b; break;
				case 1: n=a-b; break;
				case 2: n=b-a; break;
				case 3: n=a*b; break;
				case 4: n=a/b; break;
				case 5: n=b/a; break;
			}
	return n;
}

void prevod (int i)
{
	cout<<" ";
	switch (i)
			{
				case 0: cout<<"a+b"; break;
				case 1: cout<<"a-b"; break;
				case 2: cout<<"b-a"; break;
				case 3: cout<<"a*b"; break;
				case 4: cout<<"a/b"; break;
				case 5: cout<<"b/a"; break;
				case 6: cout<<"N/A"; break;
			}
	cout<<" ";
}

main()
{
	cout<<"Hello World"<<endl;
	float a, b, c, d, e, f, t, n, n2, n3, n4, n5;
	int i00, i0=0, i=6, i2=6, i3=6, i4=6, i5=6, k=123455, k1, k2, k3, k4, k5, k6, a1, b1, c1, d1, e1, f1;
	
	cin>>t>>a>>b>>c>>d>>e>>f;
	a1=a;
	b1=b;
	c1=c;
	d1=d;
	e1=e;
	f1=f;
	
	
	for (i0=0; i0<720; i0++) 
	{	
		
		
		do{
			k++;
			k1=k/100000;
			k2=k/10000%10;
			k3=k/1000%10;
			k4=k/100%10;
			k5=k/10%10;
			k6=k%10;
		} while(k1>6 || k2>6 || k3>6 || k4>6 || k5>6 || k6>6 || k1==0 || k2==0 || k3==0 || k4==0 || k5==0 || k6==0 || k1==k2 || k1==k3 || k1==k4 || k1==k5 || k1==k6 || k2==k3 || k2==k4 || k2==k5 || k2==k6 || k3==k4 || k3==k5 || k3==k6 || k4==k5 || k4==k6 || k5==k6);

		
		a=mapping(a, k1, a1, b1, c1, d1, e1, f1);
		b=mapping(b, k2, a1, b1, c1, d1, e1, f1);
		c=mapping(c, k3, a1, b1, c1, d1, e1, f1);
		d=mapping(d, k4, a1, b1, c1, d1, e1, f1);
		e=mapping(e, k5, a1, b1, c1, d1, e1, f1);
		f=mapping(f, k6, a1, b1, c1, d1, e1, f1);
		
		//--------------------------------------------------------------------------
		
		i00=1;
		
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout1;
							
			for(i2=0; i2<6; i2++)
			{
				n2=fja(i2, n, c);
				
				if(n2==t) goto cout1;
				
				for(i3=0; i3<6; i3++)
				{
					n3=fja(i3, n2, d);
					
					if(n3==t) goto cout1;
								
					for(i4=0; i4<6; i4++)
					{
						n4=fja(i4, n3, e);
						
						if(n4==t) goto cout1;

						for(i5=0; i5<6; i5++)
						{
							n5=fja(i5, n4, f);
							
							if(n5==t) goto cout1;
						}
					}
				}
			}
		}
		
		goto start2;
		
		// cout1 - cout6, jer ce svih 6 metoda imati verovatno blago drugaciji output, ili da vodim sve na kraj, cim nadjem jedno resenje za kombinaciju 000-720
		cout1: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		//--------------------------------------------------------------------------	
		
		start2:
		
		i00=2;
			
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout2;
							
			for(i2=0; i2<6; i2++)
			{
				n2=fja(i2, n, c);
				
				if(n2==t) goto cout2;
				
				for(i3=0; i3<6; i3++)
				{
					n3=fja(i3, n2, d);
					
					if(n3==t) goto cout2;
								
					for(i5=0; i5<6; i5++)
					{
						n5=fja(i5, e, f);
						
						for(i4=0; i4<6; i4++)
						{
							n4=fja(i4, n3, n5);
							
							if(n4==t) goto cout2;	
						}
					}
				}
			}
		}
		
		goto start3;
		
		cout2: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		
		//--------------------------------------------------------------------------	
		
		start3: 
		
		i00=3;
		
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout3;
							
			for(i2=0; i2<6; i2++)
			{
				n2=fja(i2, n, c);
				
				if(n2==t) goto cout3;
				
				for(i4=0; i4<6; i4++)
				{
					n4=fja(i4, d, e);	
								
					for(i5=0; i5<6; i5++)
					{
						n5=fja(i5, n4, f);
						
						for(i3=0; i3<6; i3++)
						{
							n3=fja(i3, n2, n5);
							
							if(n3==t) goto cout3;	
						}
					}
				}
			}
		}
		
		goto start4;
		
		cout3: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		
		//--------------------------------------------------------------------------	
		
		start4: 
		
		i00=4;
			
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout4;
							
			for(i2=0; i2<6; i2++)
			{
				n2=fja(i2, n, c);
				
				if(n2==t) goto cout4;
				
				for(i4=0; i4<6; i4++)
				{
					n4=fja(i4, d, e);
								
					for(i3=0; i3<6; i3++)
					{
						n3=fja(i3, n2, n4); 
						
						if(n3==t) goto cout4;	
						
						for(i5=0; i5<6; i5++)
						{
							n5=fja(i5, n3, f);
							
							if(n5==t) goto cout4;	
						}
					}
				}
			}
		}
		
		goto start5;
		
		cout4: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		
		//--------------------------------------------------------------------------	
		
		start5: 
		
		i00=5;
		
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout5;
							
			for(i3=0; i3<6; i3++)
			{
				n3=fja(i3, c, d);
				
				for(i2=0; i2<6; i2++)
				{
					n2=fja(i2, n, n3);
					
					if(n2==t) goto cout5;
								
					for(i4=0; i4<6; i4++)
					{
						n4=fja(i4, n2, e);
						
						if(n4==t) goto cout5;

						for(i5=0; i5<6; i5++)
						{
							n5=fja(i5, n4, f);
							
							if(n5==t) goto cout5;
						}
					}
				}
			}
		}
		
		goto start6;
		
		cout5: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		
		//--------------------------------------------------------------------------	
		
		start6: 
		
		i00=6;
		
		for(i=0; i<6; i++)
		{
			n=fja(i, a, b);
			
			if(n==t) goto cout6;
							
			for(i3=0; i3<6; i3++)
			{
				n3=fja(i3, c, d);
				
				for(i5=0; i5<6; i5++)
				{
					n5=fja(i5, e, f);
								
					for(i2=0; i2<6; i2++)
					{
						n2=fja(i2, n, n3);
						
						if(n2==t) goto cout6;

						for(i4=0; i4<6; i4++)
						{
							n4=fja(i4, n2, n5);
							
							if(n4==t) goto cout6;
						}
					}
				}
			}
		}
		
		goto end;
		
		cout6: 
			cout<<i00<<" | "<<i0<<" | "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" | ";
			prevod(i);
			prevod(i2);
			prevod(i3); 
			prevod(i4); 
			prevod(i5);
			cout<<endl;
		
		//--------------------------------------------------------------------------	
		
		end:
			
		1;
	}
}
