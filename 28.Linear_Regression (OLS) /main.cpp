#include<iostream>
using namespace std;
int main(void)
{
	int len, i;
	float x[100], y[100], SX=0, SXSq=0, SY=0, SXY=0, slope, Intercept;
	cout<<"Enter number of inputs len = ";
 	cin>>len;
	cout<<"Enter x and y values:"<< endl;
	for(i=1;i<=len;i++)
	{
		cout<<"x["<< i <<"] = ";
		cin>>x[i];
		cout<<"y["<< i <<"] = ";
		cin>>y[i];
	}
	 /* Slope  = ((n*sigma x*y ) - (sigma x*y ))/ ((n*sigma x*x ) - (sigma x*x )) */
	cout<<"\n Finding the sigma......"<< endl;
	for(i=1;i<=len;i++)
	{
		SX = SX + x[i];
		SXSq = SXSq + x[i]*x[i];
		SXY = SXY + x[i]*y[i];
		SY = SY + y[i];
	}
	cout<<"\n Sum of all X =  "<< SX ; 
	cout<<"\n Sum of all X^2 =  "<< SXSq;
	cout<<"\n Sum of all Y =  "<< SY;
	cout<<"\n Sum of all X*Y =  "<< SXY;
	cout<<"\n Finding the slope......";
	cout<<"\n Slope  = ((n* sum(x*y) ) - (sum(x*y))/ ((n*sum(x*x) ) - (sum(x*x))) ";
	slope= (len*SXY-SX*SY)/(len*SXSq-SX*SX);
	cout<<"\n Slope  =  "<< slope;
	cout<<"\n Finding the  Intercept......";
	cout<<"\n Intercept  = (sum(Y) - slope*sum(X)) / length of array; ";
	Intercept = (SY - slope*SX)/len;
	cout<<"\n Intercept  = " <<Intercept ;
	cout<<"\n Equation of best fit line is: y = "<< Intercept <<" + "<< slope<<"x";
	cout<<"\n Enter new value for prediction  = ";
	cin>>x[len+1];
	cout<<"\n Y  = "<< (slope*x[len+1])+Intercept;
	cout<<"\n";
	return 0;
}