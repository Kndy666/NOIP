
#include <iostream>    
using namespace std;  
int main( )  
{  
	double dSalary,dTax=0,dNetIncome=0;  //���������������������ı�����
	double dValue;   //��ģ������ϼ�һ����������ʾ���������������
	cout<<"�����������µ������ܶԪ����";  
	cin>>dSalary;  
	dValue=dSalary-3500;   //������������Ͽ�����˰ 
	if(dValue<=0.0)  
		dTax=0.0;  
	else  
	{  
		if(dValue<=1500)
			dTax=dValue*0.03-0.0;   //ֱ�Ӹ���˰�ʺ�����۳�������
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
	dNetIncome=dSalary-dTax;   //����õ�
	cout<<"������Ӧ�ɸ�������˰ "<<dTax<<" Ԫ��˰�������� "<<dNetIncome<<" Ԫ��\n";  
	cout<<"������˰�������١�ллʹ�ã�\n";  
	return 0;  
} 

