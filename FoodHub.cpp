#include<iostream>
using namespace std;
 
int main()
{
int ch,it,mx,ind,my,jap,che,gre,th,fre,cost=0;
int a,b,c,d,e,f;
char chr='y';
 
       
	cout<<"|*--------------------------- WELCOME TO  FOODHUB -----------------------------*|"<<endl;
	cout<<"\n                     CHOOSE THE KIND OF FOOD YOU PREFER"<<endl;
	cout<<"\n \n 1. THE CHEESY ITALIAN  ";
	cout<<"\n 2. THE MOREISH MEXICIAN  ";
	cout<<"\n 3. THE INCREDIBLE INDIAN  ";
	cout<<"\n 4. THE MARVELOUS MALAYSIAN  ";
	cout<<"\n 5. THE LUSCIOUS JAPANESE  ";
	cout<<"\n 6. THE CASUAL CHINESE  ";
	cout<<"\n 7. THE GLORIUS GREEK  ";
	cout<<"\n 8. THE TRADITIONAL THAI  ";
	cout<<"\n 9. THE FLAVOROUS FRENCH "<<endl;
	cout<<"YOUR CHOICE : ";
	cin>>ch;
	
if(ch==1) cout<<"YOU HAVE CHOOSEN ITALIAN"<<endl;

else if(ch==2) cout<<"YOU HAVE CHOOSEN MEXICAN"<<endl;

else if(ch==3) cout<<"YOU HAVE CHOOSEN INDIAN"<<endl;

else if(ch==4) cout<<"YOU HAVE CHOOSEN MALAYSIAN"<<endl;

else if(ch==5) cout<<"YOU HAVE CHOOSEN JAPANESE"<<endl;

else if(ch==6) cout<<"YOU HAVE CHOOSEN CHINESE"<<endl;

else if(ch==7) cout<<"YOU HAVE CHOOSEN GREEK"<<endl;

else if(ch==8) cout<<"YOU HAVE CHOOSEN THAI"<<endl;

else if(ch==9) cout<<"YOU HAVE CHOOSEN FRENCH"<<endl;

else cout<<"\nOH NO !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;         		
	 switch(ch)
	{
	
		case 1:
			 cout<<"\n             |MENU|                 "<<endl;
			cout<<"\n1. CANELLIONI                  :$14";
			cout<<"\n2. GABBRIELLO RAVEOLI          :$12";
            cout<<"\n3. MANICOOTTI PARMIGIANO       :$10";
            cout<<"\n4. TORTELLINI                  :$04";
            cout<<"\n5. SPAGHATI SISCO              :$05";
			cout<<"\n6. CALAMARI                    :$08"<<endl;

            	cout<<"YOUR CHOICE : ";
            cin>>it;
     	switch(it)
             {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED CANELLIONI "<<endl;
             		cost+=14;
             		a=1;
             		break;
             	case 2:
             		cout<<"YOU HAVE ORDERED GABBRIELLO RAVEOLI "<<endl;
             		cost+=12;
             		b=1;
					break;
             	case 3:
             		cout<<"YOU HAVE ORDERED MANICOOTTI PARMIGIANO "<<endl;
                    cost+=10;
                    c=1;
					break;
             	case 4:
             		cout<<"YOU HAVE ORDERED TORTELLINI "<<endl;
                    cost+=4;
                    d=1;
					break; 	
			    case 5:
             		cout<<"YOU HAVE ORDERED SPAGHATI SISCO "<<endl;
             		cost+=5;
			    	e=1;
					break;
             	case 6:
             		cout<<"YOU HAVE ORDERED CALAMARI "<<endl;
             		cost+=8;
				    f=1;
					break;
	
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             }
             			while((chr=='y')||(chr=='Y'))
						 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             		
						while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID OPTION!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>it;
				 	switch(it)
             {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED CANELLIONI "<<endl;
             		cost+=14;
             		a=1;
             		break;
             	case 2:
             		cout<<"YOU HAVE ORDERED GABBRIELLO RAVEOLI "<<endl;
             		cost+=12;
             		b=1;
					break;
             	case 3:
             		cout<<"YOU HAVE ORDERED MANICOOTTI PARMIGIANO "<<endl;
                    cost+=10;
                    c=1;
					break;
             	case 4:
             		cout<<"YOU HAVE ORDERED TORTELLINI "<<endl;
                    cost+=4;
                    d=1;
					break; 	
			    case 5:
             		cout<<"YOU HAVE ORDERED SPAGHATI SISCO "<<endl;
             		cost+=5;
			    	e=1;
					break;
             	case 6:
             		cout<<"YOU HAVE ORDERED CALAMARI "<<endl;
             		cost+=8;
				    f=1;
					break;
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             }
             		
					 }
 else if(chr=='n'||chr=='N')
				
{
	
cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;

if(a==1)
{
	cout<<"YOU HAVE ORDERED CANELLIONI "<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED GABBRIELLO RAVEOLI "<<endl;
}
 if(c==1)
{	cout<<"YOU HAVE ORDERED MANICOOTTI PARMIGIANO "<<endl;
}
 if(d==1)
{ cout<<"YOU HAVE ORDERED TORTELLINI "<<endl;
}
if(e==1)
{ cout<<"YOU HAVE CHOOSEN SPAGHATI SISCO"<<endl;
}
 if(f==1)
{ cout<<"YOU HAVE ORDERED CALAMARI "<<endl;
}
 

cout<<"TOTAL COST :"<<"$"<<cost<<endl;
cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
 else{
 break;}}
			 
	
	break;               
		case 2:
			 cout<<"\n                |MENU|                 "<<endl;
			cout<<"\n1.  CHICKEN SOUP WITH TORTILLAS          :$10";
			cout<<"\n2.  ESTOFADO SOUP                        :$05";
			cout<<"\n3.  HOT SOUP WITH BEEF                   :$18";
			cout<<"\n4.  ALITAS DE POYO                       :$10";
            cout<<"\n5.  CHILLIES RESSENSOS                   :$18";
            cout<<"\n6.  STEAK IN MEXICIAN                    :$26"<<endl;
            
            
            cout<<"YOUR CHOICE : ";     
            cin>>mx;
             switch(mx)
             {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED CHICKEN SOUP WITH TORTILLAS  "<<endl;
             		cost+=10;
             		a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED ESTOFADO SOUP  "<<endl;
             		cost+=5;
             		b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED HOT SOUP WITH BEEF "<<endl;
             		cost+=18;
             		c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED ALITAS DE POYO "<<endl;
             		cost+=10;
             		d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED CHILLIES RESSENSOS "<<endl;
             			cost+=18;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED STEAK IN MEXICIAN  "<<endl;
             			cost+=26;
             			f=1;
             		break;
             	
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             		
					 		while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>mx;
			
					 switch(mx)
             {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED CHICKEN SOUP WITH TORTILLAS  "<<endl;
             		cost+=10;
             		a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED ESTOFADO SOUP  "<<endl;
             		cost+=5;
             		b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED HOT SOUP WITH BEEF "<<endl;
             		cost+=18;
             		c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED ALITAS DE POYO "<<endl;
             		cost+=10;
             		d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED CHILLIES RESSENSOS "<<endl;
             			cost+=18;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED STEAK IN MEXICIAN  "<<endl;
             			cost+=26;
             			f=1;
             		break;
             	
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
					 }
					 	 else if(chr=='n'||chr=='N')
					 {
					 		cout<<"\n\nHere's your Final Bill :"<<cost<<"$"<<endl;
if(a==1)
{
	cout<<"\nYOU HAVE ORDERED CHICKEN SOUP WITH TORTILLAS  "<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED ESTOFADO SOUP  "<<endl;
}
 if(c==1)
{		cout<<"YOU HAVE ORDERED HOT SOUP WITH BEEF "<<endl;
}
 if(d==1)
{cout<<"YOU HAVE ORDERED ALITAS DE POYO "<<endl;
}
if(e==1)
{	cout<<"YOU HAVE ORDERED CHILLIES RESSENSOS "<<endl;
}
 if(f==1)
{ 		cout<<"YOU HAVE ORDERED STEAK IN MEXICIAN  "<<endl;
}

cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 
					 else{
					 
					 break;}}

    break;
        case 3:
        	 cout<<"\n           |MENU|                 "<<endl;
        	cout<<"\n1. KARAHI PANEER          :$15";
        	cout<<"\n2. CHICKEN TIKKA          :$16";
        	cout<<"\n3. BUTTER CHICKEN         :$16";
        	cout<<"\n4. MALAI KOFTA            :$15";
        	cout<<"\n5. CHICKEN BIRYANI        :$13";
        	cout<<"\n6. DHAL MAKHNI            :$15"<<endl;
        	cout<<"YOUR CHOICE : ";
        	cin>>ind;
        	switch(ind)
        	 {
             	case 1:
             		cout<<"YOU HAVE ORDERED  KARAHI PANEER  "<<endl;
             			cost+=15;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED CHICKEN TIKKA  "<<endl;
             			cost+=16;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED BUTTER CHICKEN "<<endl;
             			cost+=16;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED MALAI KOFTA "<<endl;
             			cost+=15;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED CHICKEN BIRYANI "<<endl;
             			cost+=13;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED DHAL MAKHNI   "<<endl;
             				cost+=15;
             				f=1;
             		break;
             	
             default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             			while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
						 
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>ind;
				
				
					switch(ind)
        	 {
             	case 1:
             		cout<<"YOU HAVE ORDERED  KARAHI PANEER  "<<endl;
             			cost+=15;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED CHICKEN TIKKA  "<<endl;
             			cost+=16;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED BUTTER CHICKEN "<<endl;
             			cost+=16;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED MALAI KOFTA "<<endl;
             			cost+=15;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED CHICKEN BIRYANI "<<endl;
             			cost+=13;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED DHAL MAKHNI   "<<endl;
             				cost+=15;
             				f=1;
             		break;
             	
             default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					   }}
					   	 else if(chr=='n'||chr=='N')
					 {
cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;

if(a==1)
{
	cout<<"YOU HAVE ORDERED  KARAHI PANEER  "<<endl;
}
 if(b==1)
{ 		cout<<"YOU HAVE ORDERED CHICKEN TIKKA  "<<endl;
}
 if(c==1)
{		cout<<"YOU HAVE ORDERED BUTTER CHICKEN "<<endl;
}
 if(d==1)
{ 	cout<<"YOU HAVE ORDERED MALAI KOFTA "<<endl;
}
if(e==1)
{ cout<<"YOU HAVE ORDERED CHICKEN BIRYANI "<<endl;
}
 if(f==1)
{ 	cout<<"YOU HAVE ORDERED DHAL MAKHNI   "<<endl;
}

cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{
					 
					 break;}}
					 
        	
    break;
        case 4:
        	 cout<<"\n                  |MENU|                 "<<endl;
        	cout<<"\n1. RISOTTTO                               :$17";
        	cout<<"\n2. STUFFED TOFU                           :$11";
        	cout<<"\n3. CHICKEN BREAST                         :$15";
        	cout<<"\n4. HOT BEEF                               :$12";
        	cout<<"\n5. MURTABAK                               :$19";
        	cout<<"\n6. PUMPKIN IN COCONUT                     :$11"<<endl;
        		cout<<"YOUR CHOICE : ";
					cin>>my;
        	switch(my)
        	 {
             	case 1:
             		cout<<"YOU HAVE ORDERED  RISOTTTO  "<<endl;
             		cost+=17;
             		a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED STUFFED TOFU  "<<endl;
             		cost+=11;
             		b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED CHICKEN BREAST "<<endl;
             		cost+=15;
             		c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED HOT BEEF "<<endl;
             		cost+=12;
             		d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED MURTABAK "<<endl;
             			cost+=19;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED PUMPKIN IN COCONUT   "<<endl;
             			cost+=11;
             			f=1;
             		break;
             	
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             	
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             		
					 	while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>my;

					switch(my)
        	 {
             	case 1:
             		cout<<"YOU HAVE ORDERED  RISOTTTO  "<<endl;
             		cost+=17;
             		a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED STUFFED TOFU  "<<endl;
             		cost+=11;
             		b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED CHICKEN BREAST "<<endl;
             		cost+=15;
             		c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED HOT BEEF "<<endl;
             		cost+=12;
             		d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED MURTABAK "<<endl;
             			cost+=19;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED PUMPKIN IN COCONUT   "<<endl;
             			cost+=11;
             			f=1;
             		break;
             	
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					   }}
					   	 else if(chr=='n'||chr=='N')
					 {
cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;

if(a==1)
{
cout<<"YOU HAVE ORDERED  RISOTTTO  "<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED STUFFED TOFU  "<<endl;
}
 if(c==1)
{cout<<"YOU HAVE ORDERED CHICKEN BREAST "<<endl;
}
 if(d==1)
{cout<<"YOU HAVE ORDERED HOT BEEF "<<endl;
}
if(e==1)
{	cout<<"YOU HAVE ORDERED MURTABAK "<<endl;
}
 if(f==1)
{ 	cout<<"YOU HAVE ORDERED PUMPKIN IN COCONUT   "<<endl;
}


cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{
					 
					 break;}}
	break;
	    case 5:    	
	     cout<<"\n                    |MENU|                 "<<endl;
            cout<<"\n1. SHRIMPS IN BATTER              :$11";
			cout<<"\n2. NOODLE SOUP                    :$08";
			cout<<"\n3. GEDZA WITH PORK                :$11";
			cout<<"\n4. NIGIRI                         :$08";
			cout<<"\n5. SUSHI ROLL SET                 :$12";
			cout<<"\n6. CRISPY SACKS WITH SHRIMPS      :$08"<<endl;
				cout<<"YOUR CHOICE : ";
				cin>>jap;
        	switch(jap)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  SHRIMPS IN BATTER   "<<endl;
             			cost+=11;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED NOODLE SOUP  "<<endl;
             			cost+=8;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED GEDZA WITH PORK "<<endl;
             			cost+=11;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED NIGIRI "<<endl;
             			cost+=8;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED SUSHI ROLL SET "<<endl;
             				cost+=12;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED CRISPY SACKS WITH SHRIMPS   "<<endl;
             				cost+=8;
             				f=1;
             	
             		break;
             
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             		
					 	while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>jap;

						switch(jap)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  SHRIMPS IN BATTER   "<<endl;
             			cost+=11;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED NOODLE SOUP  "<<endl;
             			cost+=8;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED GEDZA WITH PORK "<<endl;
             			cost+=11;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED NIGIRI "<<endl;
             			cost+=8;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED SUSHI ROLL SET "<<endl;
             				cost+=12;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED CRISPY SACKS WITH SHRIMPS   "<<endl;
             				cost+=8;
             				f=1;
             		break;
             	
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					 }}
             			 else if(chr=='n'||chr=='N')
					 {
				cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;


if(a==1)
{
	cout<<"\nYOU HAVE ORDERED  SHRIMPS IN BATTER   "<<endl;
}
 if(b==1)
{ 		cout<<"YOU HAVE ORDERED NOODLE SOUP  "<<endl;
}
 if(c==1)
{		cout<<"YOU HAVE ORDERED GEDZA WITH PORK "<<endl;
}
 if(d==1)
{ 	cout<<"YOU HAVE ORDERED NIGIRI "<<endl;
}
if(e==1)
{ 	cout<<"YOU HAVE ORDERED SUSHI ROLL SET "<<endl;
}
 if(f==1)
{ cout<<"YOU HAVE ORDERED CRISPY SACKS WITH SHRIMPS   "<<endl;
}


cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
 else
 {
 break;
 }}
	break;
	   case 6:
	    	 cout<<"\n               |MENU|                 "<<endl;
		    cout<<"\n1. VEGETABLE MANCHURIAN             :$14";
		    cout<<"\n2. FRIED CHICKEN WINGS              :$09";
			cout<<"\n3. WONTON SOUP                      :$04";
			cout<<"\n4. SZECHUAN ROLL                    :$06";
			cout<<"\n5. SESAME TOFU                      :$04";
			cout<<"\n6. HAKKA NODDLES                    :$06"<<endl;
				cout<<"YOUR CHOICE : ";	cin>>che;
        	switch(che)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED VEGETABLE MANCHURIAN"<<endl;
             			cost+=14;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED FRIED CHICKEN WINGS  "<<endl;
             			cost+=9;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED WONTON SOUP "<<endl;
             			cost+=4;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED SZECHUAN ROLL"<<endl;
             			cost+=6;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED SESAME TOFU "<<endl;
             			cost+=4;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED HAKKA NODDLES"<<endl;
             			cost+=6;
             			f=1;
             break;
             			default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             
             
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				  {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             			while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>che;
				
				
				
				
				
					 switch(che)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED VEGETABLE MANCHURIAN"<<endl;
             			cost+=14;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED FRIED CHICKEN WINGS  "<<endl;
             			cost+=9;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED WONTON SOUP "<<endl;
             			cost+=4;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED SZECHUAN ROLL"<<endl;
             			cost+=6;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED SESAME TOFU "<<endl;
             			cost+=4;
             			e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED HAKKA NODDLES"<<endl;
             			cost+=6;
             			f=1;
             		break;
             	
             			default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
             
					   }}
					   	 else if(chr=='n'||chr=='N')
					 {
					   cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;


if(a==1)
{
	cout<<"\nYOU HAVE ORDERED VEGETABLE MANCHURIAN"<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED FRIED CHICKEN WINGS  "<<endl;
}
 if(c==1)
{		cout<<"YOU HAVE ORDERED WONTON SOUP "<<endl;
}
 if(d==1)
{ 	cout<<"YOU HAVE ORDERED SZECHUAN ROLL"<<endl;
}
if(e==1)
{ 	cout<<"YOU HAVE ORDERED SESAME TOFU "<<endl;
}
 if(f==1)
{ 	cout<<"YOU HAVE ORDERED HAKKA NODDLES"<<endl;
}
 
cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{
					 
					 break;}}
	break;
	
	    case 7:
	    	 cout<<"\n          |MENU|                 "<<endl;
		    cout<<"\n1. MOUSSAKA             :$07";
			cout<<"\n2. LOUKOUMADES          :$17";
			cout<<"\n3. SOUVLAKI             :$11";
			cout<<"\n4. STEFADO              :$06";
			cout<<"\n5. GALAMARI             :$19";
			cout<<"\n6. GYROSPITA            :$10"<<endl;
				cout<<"YOUR CHOICE : ";
					cin>>gre;
        	switch(gre)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  MOUSSAKA   "<<endl;
             			cost+=7;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED LOUKOUMADES  "<<endl;
             			cost+=17;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED SOUVLAKI "<<endl;
             			cost+=11;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED  STEFADO "<<endl;
             			cost+=6;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED GALAMARI  "<<endl;
             				cost+=19;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED GYROSPITA   "<<endl;
             				cost+=10;
             				f=1;
             		break;
             	
             
             default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             			while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>gre;
			
					 	switch(gre)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  MOUSSAKA   "<<endl;
             			cost+=7;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED LOUKOUMADES  "<<endl;
             			cost+=17;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED SOUVLAKI "<<endl;
             			cost+=11;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED  STEFADO "<<endl;
             			cost+=6;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED GALAMARI  "<<endl;
             				cost+=19;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED GYROSPITA   "<<endl;
             				cost+=10;
             				f=1;
             		break;
        
             
             default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					  }}
					  	 else if(chr=='n'||chr=='N')
					 {
					cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;


if(a==1)
{
cout<<"\nYOU HAVE ORDERED  MOUSSAKA   "<<endl;
}
 if(b==1)
{ cout<<"YOU HAVE ORDERED LOUKOUMADES  "<<endl;
}
 if(c==1)
{		cout<<"YOU HAVE ORDERED SOUVLAKI "<<endl;
}
 if(d==1)
{ cout<<"YOU HAVE ORDERED  STEFADO "<<endl;
}
if(e==1)
{ cout<<"YOU HAVE ORDERED GALAMARI  "<<endl;
}
 if(f==1)
{ 	cout<<"YOU HAVE ORDERED GYROSPITA   "<<endl;
}



cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{
					 
					 break;}}
					 	break;
	   case 8:
	   	 cout<<"\n                 |MENU|                 "<<endl;
	       cout<<"\n1. ETIAM                      :$20";
		   cout<<"\n2. CHICKEN MASSAMAN           :$13";
		   cout<<"\n3. TOM YUM KUNG               :$25";
		   cout<<"\n4. CHICKEN COCONUT SOUP       :$07";
		   cout<<"\n5. PAD THAI                   :$09";
		   cout<<"\n6. SOM TAM                    :$19"<<endl;
		   	cout<<"YOUR CHOICE : ";	cin>>th;
        	switch(th)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED ETIAM  "<<endl;
             			cost+=20;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED CHICKEN MASSAMAN   "<<endl;
             			cost+=13;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED TOM YUM KUNG "<<endl;
             			cost+=25;
             			c=1;
                    break;
                    
             	case 4:
             		cout<<"YOU HAVE ORDERED CHICKEN COCONUT SOUP "<<endl;
             			cost+=7;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED PAD THAI "<<endl;
             				cost+=9;
             				e=1;
             		break;
             	case 6:
             		
             			cout<<"YOU HAVE ORDERED SOM TAM   "<<endl;
             				cost+=19;
             				f=1;
             		break;
             	
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
			 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             			while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>th;
				switch(th)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED ETIAM  "<<endl;
             			cost+=20;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED CHICKEN MASSAMAN   "<<endl;
             			cost+=13;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED TOM YUM KUNG "<<endl;
             			cost+=25;
             			c=1;
                    break;
                    
             	case 4:
             		cout<<"YOU HAVE ORDERED CHICKEN COCONUT SOUP "<<endl;
             			cost+=7;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED PAD THAI "<<endl;
             				cost+=9;
             				e=1;
             		break;
             	case 6:
             		
             			cout<<"YOU HAVE ORDERED SOM TAM   "<<endl;
             				cost+=19;
             				f=1;
             		break;
             	
             		default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					   }}
					   	 else if(chr=='n'||chr=='N')
					 {
cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;

if(a==1)
{
cout<<"\nYOU HAVE ORDERED ETIAM  "<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED CHICKEN MASSAMAN   "<<endl;
}
 if(c==1)
{cout<<"YOU HAVE ORDERED TOM YUM KUNG "<<endl;
}
 if(d==1)
{ 	cout<<"YOU HAVE ORDERED CHICKEN COCONUT SOUP "<<endl;
}
if(e==1)
{ 	cout<<"YOU HAVE ORDERED PAD THAI "<<endl;
}
 if(f==1)
{ cout<<"YOU HAVE ORDERED SOM TAM   "<<endl;
}

cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{
					 
					 break;}}
	break;
	   case 9:        
	        cout<<"\n              |MENU|                 "<<endl;
		    cout<<"\n1. SHRIMP SCAMPI              :$19";
		   	cout<<"\n2. LIMONCELLO SNAPPER         :$20";
			cout<<"\n3. FRENCH FRIES               :$08";
			cout<<"\n4. BAJA NACHO                 :$20";
            cout<<"\n5. FISH TACOS                 :$14";
            cout<<"\n6. GNOCCHI                    :$15"<<endl;
            	cout<<"YOUR CHOICE : ";	cin>>fre;
        	switch(fre)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  SHRIMP SCAMPI  "<<endl;
             			cost+=19;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED LIMONCELLO SNAPPER  "<<endl;
             			cost+=20;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED FRENCH FRIES "<<endl;
             			cost+=8;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED BAJA NACHO  "<<endl;
             			cost+=20;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED FISH TACOS"<<endl;
             				cost+=14;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED GNOCCHI  "<<endl;
             				cost+=15;
             				f=1;
             		break;
             	
             
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
			 }
			 
			 	while((chr=='y')||(chr=='Y'))
				 {
					 
             		cout<<"YOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
             				while((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
             		{
             			 try {
					 	if ((chr!='y')&&(chr!='Y')&&(chr!='n')&&(chr!='N'))
					 	{
					 		throw chr;
						 }}
						 catch(char)
						 {
						 	cout<<"INVALID CHOICE!!!";
						 			 cout<<"\nYOU WANT TO ORDER MORE(Y/N)"<<endl;
             		cin>>chr;
						 }}
					 
					 if((chr=='y') || (chr=='Y'))
					 { cout<<"OKAY,SO CHOOSE AGAIN :) "<<endl;
					 	cout<<"YOUR CHOICE : ";
					 cin>>fre;
				
				
				
				
				
						switch(fre)
        	 {
             	case 1:
             		cout<<"\nYOU HAVE ORDERED  SHRIMP SCAMPI  "<<endl;
             			cost+=19;
             			a=1;
             	    break;
             	case 2:
             		cout<<"YOU HAVE ORDERED LIMONCELLO SNAPPER  "<<endl;
             			cost+=20;
             			b=1;
             		break;
             	case 3:
             		cout<<"YOU HAVE ORDERED FRENCH FRIES "<<endl;
             			cost+=8;
             			c=1;
                    break;
             	case 4:
             		cout<<"YOU HAVE ORDERED BAJA NACHO  "<<endl;
             			cost+=20;
             			d=1;
                    break; 	
			    case 5:
             			cout<<"YOU HAVE ORDERED FISH TACOS"<<endl;
             				cost+=14;
             				e=1;
             		break;
             	case 6:
             			cout<<"YOU HAVE ORDERED GNOCCHI  "<<endl;
             				cost+=15;
             				f=1; 
             		break;
             	
             	default :
             		cout<<"\nOOPS !! YOU HAVE CHOOSEN WRONG OPTION"<<endl;
             		break;
					   }}
					   	 else if(chr=='n'||chr=='N')
					 {
cout<<"\n\n---------------FINAL BILL-----------------\n"<<endl;

if(a==1)
{
		cout<<"\nYOU HAVE ORDERED  SHRIMP SCAMPI  "<<endl;
}
 if(b==1)
{ 	cout<<"YOU HAVE ORDERED LIMONCELLO SNAPPER  "<<endl;
}
 if(c==1)
{	cout<<"YOU HAVE ORDERED FRENCH FRIES "<<endl;
}
 if(d==1)
{ 	cout<<"YOU HAVE ORDERED BAJA NACHO  "<<endl;
}
if(e==1)
{ 	cout<<"YOU HAVE ORDERED FISH TACOS"<<endl;
}
 if(f==1)
{ 	cout<<"YOU HAVE ORDERED GNOCCHI  "<<endl;
}

cout<<"TOTAL COST :"<<"$"<<cost<<endl;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;

}
					 else{					 
					
					 break;}}
    	break;
    }
return 0;
}
