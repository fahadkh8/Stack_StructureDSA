#include <iostream>
#include<graphics.h>
#include <stdlib.h>
using namespace std;
main(){
	char a[5][3]={"10","20","30","40","50"};
	initwindow(1100,1000,"Group A Stack");
	settextstyle(0,0,2);
    outtextxy(400,30,"Stack With Graphics");
    outtextxy(300,700,"BY Adeel Owais, Fahad Khan, Adeel Ahmed");
	rectangle(600,200,700,150);  //push  
	rectangle(600,300,700,250);  //pop		
	rectangle(600,400,750,350);  //top
	rectangle(600,500,700,450);  //reset 
	rectangle(200,150,300,250);  //50
	rectangle(200,250,300,350);  //40
	rectangle(200,350,300,450);	 //30 	
	rectangle(200,450,300,550);  //20
	rectangle(200,550,300,650);  //10 
	outtextxy(620,175,"PUSH");
	outtextxy(625,275,"POP");
	outtextxy(625,375,"Top");
	outtextxy(616,475,"Reset");
	int flag=0;
	long X,Y;
	POINT cursorPos;
	while(1) 
    {
    	
    GetCursorPos(&cursorPos);
		
	X=mousex();
    Y=mousey();
    //reset button
    if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>400 && Y<500 ){
    	flag = 0;
    	outtextxy(50,50,"                             ");
    	outtextxy(615,375,"Top=        "   );
    	outtextxy(230,600,"  ");
    	outtextxy(230,500,"  ");
    	outtextxy(230,400,"  ");
    	outtextxy(230,300,"  ");
    	outtextxy(230,200,"  ");
    	
    	
	}
    //pushing 10 into the stack
	if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200  && flag==0)  
		{  	
		outtextxy(50,50,"                             ");	
		outtextxy(230,600,a[0]);
		
		outtextxy(615,375,"Top= "   );
		outtextxy(675,375,a[flag]);
		flag=1;
		
	
	
	}	
	//pushing 20 into the stack
	else if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200  && flag==1)  
	 {
	 	outtextxy(230,500,a[1]);
		
		outtextxy(615,375,"Top= "   );
		outtextxy(675,375,a[flag]);
		flag=2;
		
	     
	}
	//pushing 30 into the stack
	else if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200  && flag==2)  
		{  		
		outtextxy(230,400,a[2]);
		
		outtextxy(615,375,"Top= "   );
		outtextxy(675,375,a[flag]);
		flag=3;
		
	
	}
	//pushing 40 into the stack
	
	else if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200  && flag==3)  
	 {
	 	outtextxy(230,300,a[3]);
		
		outtextxy(615,375,"Top= "   );
		outtextxy(675,375,a[flag]);
		flag=4;
		
	     
	}
	//pushing 50 into the stack
	else if(GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200  && flag==4)  
	 {
	 	outtextxy(230,200,a[4]);
		
		outtextxy(615,375,"Top=           "   );
		outtextxy(675,375,a[flag]);
		flag=5;
		
	    
	}
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>100 && Y <200 && flag == 5)
	{
		flag = 6;
	}
	//condition for stack underflow
	if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 0 )
	{
		outtextxy(50,50,"Stack Underflow");
		outtextxy(615,375,"Top          "   );
	}
	//condition for stack overflow
	if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>100 && Y <200 && flag == 6 )
	{
		outtextxy(50,50,"Stack Overflow");
	}
	//condition for when stack is empty and top = -1
	if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 0)
	{
		outtextxy(615,375,"Top=-1    "   );
	}
	//condition for popping 10
	if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 1)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,600,"  ");
		flag = 0;
		outtextxy(615,375,"Top=        "   );
		outtextxy(675,375,a[flag-1]);
	}
	
	//condition for popping 20
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 2)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,500,"  ");
		flag = 1;
		outtextxy(615,375,"Top=        "   );
		outtextxy(675,375,a[flag-1]);
	}
	//condition for popping 30 
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 3)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,400,"  ");
		flag = 2;
		outtextxy(615,375,"Top= "   );
		outtextxy(675,375,a[flag-1]);
	}
	//condition for popping 40
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 4)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,300,"  ");
		flag = 3;
		outtextxy(615,375,"Top=         "   );
		outtextxy(675,375,a[flag-1]);
	}
	//condition for popping 50
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X <800 && Y>250 && Y <300 && flag == 5)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,200,"  ");
		flag = 4;
		outtextxy(615,375,"Top=        "   );
		outtextxy(675,375,a[flag-1]);
	}
	//condition for popping when stack overflow
	else if (GetAsyncKeyState(VK_LBUTTON) && X>600 && X<800 && Y>250 && Y <300 && flag == 6)
	{
		outtextxy(50,50,"                             ");
		outtextxy(230,200,"  ");
		flag = 5;
		outtextxy(615,375,"Top=        "   );
		outtextxy(675,375,a[flag-2]);
	}
	 
	
	
	
	delay(100);
		
}
	getch();
	closegraph();
	}
