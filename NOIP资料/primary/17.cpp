
#include <iostream>    
using namespace std;  
int main( )  
{  
	double dSalary,dTax=0,dNetIncome=0;  //请欣符合匈牙利命名法的变量名
	double dValue;   //在模板基础上加一个变量，表示超出起征点的收入
	cout<<"请输入您本月的收入总额（元）：";  
	cin>>dSalary;  
	dValue=dSalary-3500;   //在起征点基础上考虑纳税 
	if(dValue<=0.0)  
		dTax=0.0;  
	else  
	{  
		if(dValue<=1500)
			dTax=dValue*0.03-0.0;   //直接根据税率和速算扣除数计算
		else if(dValue<=4500)
			dTax=dValue*0.10-105.0; 
		else if(dValue<=9000)
			dTax=dValue*0.20-555.0;  
		else if(dValue<=35000)
			dTax=dValue*0.25-1005.0; 
		else if(dValue<=55000) 
			dTax=dValue*0.30-2755.0;  
		else if(dValue<=80000)
			dTax=dValue*0.35-5505.0;  
		else 
			dTax=dValue*0.45-13505.0;  
	}  
	dNetIncome=dSalary-dTax;   //计算得到
	cout<<"您本月应缴个人所得税 "<<dTax<<" 元，税后收入是 "<<dNetIncome<<" 元。\n";  
	cout<<"依法纳税，共享繁荣。谢谢使用！\n";  
	return 0;  
} 

