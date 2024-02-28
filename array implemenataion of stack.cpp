#include<iostream.h>#include<conio.h>#include<stdlib.h>
//usingnamespacestd;classstack
{
int stk[5];int top;public:
stack()
{
top=-1;
}
voidpush(intx)
{
if(top>4)
{
cout<<"stackoverflow";return;
}
stk[++top]=x;
cout<<"inserted"<<x;
}
 

voidpop()
{
if(top<0)
{
cout<<"stackunderflow";return;
}
cout<<"deleted"<<stk[top--];
}
voiddisplay()
{
if(top<0)
{
cout<<"stackempty";return;
}
for(int i=top;i>=0;i--)cout<<stk[i]<<"";
}
};

main()
{
Clrscr();int ch;stack st;while(1)
{
cout<<"\n1.push2.pop3.display4.exit\nEnterurchoice";cin>>ch;switch(ch)
{
case1:cout<<"entertheelement";cin>>ch;
st.push(ch);break;
case2:st.pop();break;case3:st.display();break;case4:exit(0);
}
}
return(0);
}

