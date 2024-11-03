#include <stdio.h>
int main()
{
    int til, pin, menu, balans = 1000000, som, qoldiq, pul, otkazma, gaz, svet, suv, karta,min=3000,tel,tsom;

    printf("1. Uzbek\n2. Engilish\nTilni tanlang: / Choose language: ");

    scanf("%d", &til);

    if (til == 1)
    {
        printf("Pinkodni kiriting: ");
        scanf("%d", &pin);

        if (pin == 1111)
        {
            printf("1. Balansni tekshirish\n2. Naxt pul olish\n3. Pul o'tkazmasi\nMenuni tanlang: ");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("Sizning balansingiz: %d\n", balans);
            }
            if (menu == 2)
            {
                printf("Minimal pul yechish miqdori: %d\n so'm",min);
				printf("Qancha mablag' kerak: \n");
                printf("Ixtiyoriy summani tanlang: \n");
                printf("1. 50000\n2. 100000\n3. 200000\n4. 300000\n5. 400000\n6. 500000\n");
                scanf("%d", &som);
                if (som >= balans)
            	{
                	printf("Mablag' yetarli emas!");
            	}
            	else if(som>=min&&som<balans){
            		qoldiq = balans - som;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
                	printf("Qoldiq: %d\n",qoldiq);
				}
				if (som == 1)
            	{
                	qoldiq = balans - 50000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
                	printf("Qoldiq: %d\n",qoldiq);
            	}
            	if (som == 2)
           		{
                	qoldiq = balans - 100000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
                	printf("Qoldiq: %d\n",qoldiq);
            	}
            	if (som == 3)
            	{
                	qoldiq = balans - 200000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
                	printf("Qoldiq: %d\n",qoldiq);
            	}
            	if (som == 4)
            	{
                	qoldiq = balans - 300000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
               		printf("Pul  muvafaqiyatli yechildi!\n");
               		printf("Qoldiq: %d\n",qoldiq);              		
            	}
            	if (som == 5)
            	{
                	qoldiq = balans - 400000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
               		printf("Pul  muvafaqiyatli yechildi!\n");
               		printf("Qoldiq: %d\n",qoldiq);
            	}
            	if (som == 6)
           		{
                	qoldiq = balans - 500000;
                	printf("Amaliyot bajarilmoqda iltimos kuting !\n");
               		printf("Pul  muvafaqiyatli yechildi!\n");
               		printf("Qoldiq: %d\n",qoldiq);
            	}else if(som>6&&som<min){
            		printf("Noto'gri amal!\n");
				}
                
            }
            
            
            if (menu == 3)
            {
               	printf("Komunal to'lovlar qarz miqdoriga avtomotik yechiladi!\n");
				printf("1. Gaz\n2. Svet\n3. Suv\n4.Kartaga pul o'tkazmasi\n5. Uyali aloqa\n");
                scanf("%d", &otkazma);
                         
            	if (otkazma == 1)
            	{
                	printf("Gaz raqamingizni kiriting: ");
                	scanf("%d", &gaz);
                	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
            	}
           		else if (otkazma == 2)
            	{
                	printf("Svet raqamingizni kiriting: ");
                	scanf("%d", &svet);
                	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
            	}
            	else if (otkazma == 3)
            	{
                	printf("Suv raqamingizni kiriting : ");
                	scanf("%d", &suv);
                	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
            	}
            	else if (otkazma == 4)
           		{
                	printf("Karta raqamini kiriting: \n");
                	scanf("%d", &karta);
                	printf("Pul miqdorini kiriting: \n");
                	scanf("%d",&pul);
                	qoldiq=balans-pul;
                	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                	printf("Pul  muvafaqiyatli yechildi!\n");
                	printf("Qoldiq: %d\n",qoldiq);
            	}
            	else if(otkazma==5)
				{
					printf("Telefon raqamingizni kiriting: \n");
					scanf("%d",&tel);
					printf("Pul miqdorini kiriting: \n");
					scanf("%d",&tsom);
					qoldiq=balans-tsom;
					printf("Pul muvaffaqiyatli o'tkazildi!\n");
					printf("Qoldiq: %d\n",qoldiq);
				}
        	}
        }
        else
        {
            printf("Pinkod xato! Qayta kiriting: \n");
            scanf("%d", &pin);
            if (pin == 1111)
            {
                printf("1. Balansni tekshirish\n2. Naxt pul olish\n3. Pul o'tkazmasi\nMenuni tanlang: ");
                scanf("%d", &menu);
                if (menu == 1)
                {
                	printf("Sizning balansingiz: %d\n", balans);
                }
                else if (menu == 2)
            	{
                	printf("Minimal pul yechish miqdori: %d\n so'm",min);
					printf("Qancha mablag' kerak: \n");
                	printf("ixtiyoriy pul tanlang: \n");
                	printf("1. 50000\n2. 100000\n3. 200000\n4. 300000\n5. 400000\n6. 500000\n");
                	scanf("%d", &som);
                	if (som >= balans)
            		{
                		printf("Mablag' yetarli emas!");
            		}
            		else if(som>=min&&som<balans){
            			qoldiq = balans - som;
                		printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("Pul  muvafaqiyatli yechildi!\n");
                		printf("Qoldiq: %d\n",qoldiq);
					}
					else if (som == 1)
            		{
                		qoldiq = balans - 50000;
                		printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("Pul  muvafaqiyatli yechildi!\n");
                		printf("Qoldiq: %d\n",qoldiq);
            		}
            		else if (som == 2)
           			{
                		qoldiq = balans - 100000;
                		printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("Pul  muvafaqiyatli yechildi!\n");
                		printf("Qoldiq: %d\n",qoldiq);
            		}
            		else if (som == 3)
            		{
                		qoldiq = balans - 200000;
                		printf("Amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("Pul  muvafaqiyatli yechildi!\n");
                		printf("Qoldiq: %d\n",qoldiq);
            		}
            		else if (som == 4)
            		{
                		qoldiq = balans - 300000;
                		printf("Amaliyot bajarilmoqda iltimos kuting !\n");
               			printf("Pul  muvafaqiyatli yechildi!\n");
               			printf("Qoldiq: %d\n",qoldiq);              		
            		}
            		else if (som == 5)
            		{
                		qoldiq = balans - 400000;
                		printf("amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("pul  muvafaqiyatli yechildi\n");
                		printf("Qoldiq: %d\n",qoldiq);
            		}
            		else if (som == 6)
           			{
                		qoldiq = balans - 500000;
                		printf("amaliyot bajarilmoqda iltimos kuting !\n");
                		printf("pul  muvafaqiyatli yechildi\n");
                		printf("Qoldiq: %d\n",qoldiq);
            		}else if(som>6&&som<min)
					{
            			printf("Noto'gri amal!\n");
					}
                
            	}
                else if (menu == 3)
                	{
                    	printf("Komunal to'lovlar qarz miqdoriga avtomotik yechiladi!\n");
						printf("1. Gaz\n2. Svet\n3. Suv\n4.Kartaga pul otkazmasi\n5. Uyali aloqa\n");
                    	scanf("%d", &otkazma);
                
                	if (otkazma == 1)
                	{
                    	printf("Gaz raqamingizni kiriting: ");
                    	scanf("%d", &gaz);
                    	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                    	printf("Pul  muvafaqiyatli yechildi!\n");
                	}
                	else if (otkazma == 2)
                	{
                    	printf("Svet raqamingizni kiriting: ");
                    	scanf("%d", &svet);
                    	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                    	printf("Pul  muvafaqiyatli yechildi!\n");
                	}
                	else if (otkazma == 3)
                	{
                    	printf("Suv raqamingizni kiriting: ");
                    	scanf("%d", &suv);
                    	printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                    	printf("Pul  muvafaqiyatli yechildi!\n");
                	}
                	else if (otkazma == 4)
                	{
                    	printf("Karta raqamini kiriting: ");
                    	scanf("%d", &karta);
                   		printf("Pul miqdorini kiriting: \n");
                		scanf("%d",&pul);
                		qoldiq=balans-pul;
                		printf("\nAmaliyot bajarilmoqda iltimos kuting !\n");
                		printf("Pul  muvafaqiyatli yechildi!\n");
                		printf("Qoldiq: %d\n",qoldiq);
               		}
                	else if(otkazma==5)
					{
						printf("Telefon raqamingizni kiriting: \n");
						scanf("%d",&tel);
						printf("Pul miqdorini kiriting: \n");
						scanf("%d",&tsom);
						qoldiq=balans-tsom;
						printf("Pul muvafaqiyatli o'tkazildi!\n");
						printf("Qoldiq: %d\n",qoldiq);
					}
				}
            }
        }
    }
    else if(til==2){
    	printf("Enter pincode: ");
        scanf("%d", &pin);

        if (pin == 1111)
        {
            printf("1. Balance check\n2. Cash withdraw\n3. Money transfer\nChoose menu: ");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("Your balance: %d\n", balans);
            }
            if (menu == 2)
            {
                printf("Amount of minimum cash withdraw: %d\n sums",min);
				printf("How much money do you want: \n");
                printf("Choose your amount: \n");
                printf("1. 50000\n2. 100000\n3. 200000\n4. 300000\n5. 400000\n6. 500000\n");
                scanf("%d", &som);
                if (som >= balans)
            	{
                	printf("Lackness of balance!\n");
            	}
            	else if(som>=min&&som<balans){
            		qoldiq = balans - som;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
				}
				if (som == 1)
            	{
                	qoldiq = balans - 50000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 2)
           		{
                	qoldiq = balans - 100000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 3)
            	{
                	qoldiq = balans - 200000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 4)
            	{
                	qoldiq = balans - 300000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);              		
            	}
            	if (som == 5)
            	{
                	qoldiq = balans - 400000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 6)
           		{
                	qoldiq = balans - 500000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}else if(som>6&&som<min){
            		printf("Command not found!\n");
				}
                
            }
            
            
            if (menu == 3)
            {
               	printf("Taxes are withdrawed automatically according to your tax debt!\n");
				printf("1. Gas\n2. Electrecity\n3. Water\n4.Card to card money transfer\n5.Communication\n");
                scanf("%d", &otkazma);
                         
            	if (otkazma == 1)
            	{
                	printf("Enter gas number: ");
                	scanf("%d", &gaz);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
           		else if (otkazma == 2)
            	{
                	printf("Enter electrecity number: ");
                	scanf("%d", &svet);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
            	else if (otkazma == 3)
            	{
                	printf("Enter water number: ");
                	scanf("%d", &suv);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
            	else if (otkazma == 4)
           		{
                	printf("Enter card number: \n");
                	scanf("%d", &karta);
                	printf("Enter the money amount: \n");
                	scanf("%d",&pul);
                	qoldiq=balans-pul;
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	else if(otkazma==5)
				{
					printf("Enter phone number: \n");
					scanf("%d",&tel);
					printf("Enter the money amount: \n");
					scanf("%d",&tsom);
					qoldiq=balans-tsom;
					printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
				}
        	}
        }
        else
        {
        printf("Error in pincode. Enter the pincode again: ");
        scanf("%d", &pin);

        if (pin == 1111)
        {
            printf("1. Balance check\n2. Cash withdraw\n3. Money transfer\nChoose menu: ");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("Your balance: %d\n", balans);
            }
            if (menu == 2)
            {
                printf("Amount of minimum cash withdraw: %d\n sums",min);
				printf("How much money do you want: \n");
                printf("Choose your amount: \n");
                printf("1. 50000\n2. 100000\n3. 200000\n4. 300000\n5. 400000\n6. 500000\n");
                scanf("%d", &som);
                if (som >= balans)
            	{
                	printf("Lackness of balance!\n");
            	}
            	else if(som>=min&&som<balans){
            		qoldiq = balans - som;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
				}
				if (som == 1)
            	{
                	qoldiq = balans - 50000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 2)
           		{
                	qoldiq = balans - 100000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 3)
            	{
                	qoldiq = balans - 200000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 4)
            	{
                	qoldiq = balans - 300000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);              		
            	}
            	if (som == 5)
            	{
                	qoldiq = balans - 400000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	if (som == 6)
           		{
                	qoldiq = balans - 500000;
                	printf("Operation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}else if(som>6&&som<min){
            		printf("Command not found!\n");
				}
                
            }
            
            
            if (menu == 3)
            {
               	printf("Taxes are withdrawed automatically according to your tax debt!\n");
				printf("1. Gas\n2. Electrecity\n3. Water\n4.Card to card money transfer\n5.Communication\n");
                scanf("%d", &otkazma);
                         
            	if (otkazma == 1)
            	{
                	printf("Enter gas number: ");
                	scanf("%d", &gaz);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
           		else if (otkazma == 2)
            	{
                	printf("Enter electrecity number: ");
                	scanf("%d", &svet);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
            	else if (otkazma == 3)
            	{
                	printf("Enter water number: ");
                	scanf("%d", &suv);
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
            	}
            	else if (otkazma == 4)
           		{
                	printf("Enter card number: \n");
                	scanf("%d", &karta);
                	printf("Enter the money amount: \n");
                	scanf("%d",&pul);
                	qoldiq=balans-pul;
                	printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
            	}
            	else if(otkazma==5)
				{
					printf("Enter phone number: \n");
					scanf("%d",&tel);
					printf("Enter the money amount: \n");
					scanf("%d",&tsom);
					qoldiq=balans-tsom;
					printf("\nOperation in progress, please wait!\n");
                	printf("Money successfully withdrawed!\n");
                	printf("Balance: %d\n",qoldiq);
				}
        	}
        }
    	
	}
}

    return 0;
}
