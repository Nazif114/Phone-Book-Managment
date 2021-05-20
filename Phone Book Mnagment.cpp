#include<iostream>
using namespace std;
int c=0;
int option();
void Sort(string st[],string n[])
{   int i,j;
    for(i=0;i<100-1;i++)
    {
        for(j=i+1;j<100;j++)
        {
            if(st[i]>st[j])
            {

                    swap(st[i],st[j]);
                    swap(n[i],n[j]);

            }
        }
    }
}
int main()
{
    string name[200];
    string num[200];
    int i,ck=0;


    ck=option();

    cout<< "\n";
    do
    {
        //for add number
        if(ck==1)
        {
            cout<<"\t\t Enter Name: ";
            cin>>name[c];
            cout<<"\t\t Enter 11 Digit Number: ";
            cin>>num[c];
            c++;

        }
        //for contact list
        else if(ck==2)
        {
            Sort(name,num);

            int n=0;
            for(i=0; i<100; i++)
            {
                if(name[i]!="\0")
                {
                    printf("Name :  ");
                    cout<<name[i]<<endl;
                    printf("Number :  ");
                    cout<<num[i]<<endl;
                    n++;
                }
            }
            if(n==0)
            {
                cout<<"\t\t\t\tContact List is Empty\n";
                cout<<"\n";
                cout<<"\n";
            }
        }
        //for search contact
        else if(ck==3)
        {
            int n=0;
            string srch;
            cout<<"\t\t\t Enter name for searching : ";
            cin>>srch;
            for(int i=0; i<100; i++)
            {
                if(srch==name[i])
                {
                    printf("Name :  ");
                    cout<<name[i]<<endl;
                    printf("Number :  ");
                    cout<<num[i]<<endl;
                    n++;

                }

            }
            if(n==0)
            {
                {
                    cout<<"\t\t\t Contact Not Found";
                    cout<<"\n";
                    cout<<"\n";
                }
            }
        }
        //for modify contact
        else if(ck==4)
        {
            int n=0;
            string temp1,temp2,temp3;
            cout<<"\t\t\t Enter name that u want to modify : ";
            cin>>temp1;
            for(int i=0; i<100; i++)
            {
                if(temp1==name[i])
                {
                    cout<<"\t\t\t Enter new name : ";
                    cin>>temp2;
                    cout<<"\t\t\t Enter new number :";
                    cin>>temp3;
                    name[i]=temp2;
                    num[i]=temp3;
                    cout<<"\t\t\t modified";
                    n++;
                }

            }
            if(n==0)
            {
                {
                    cout<<"\t\t\t Contact Not Found";
                    cout<<"\n";
                    cout<<"\n";
                }
            }
        }
        //for delete contact
        else if(ck==5)
        {
            int n=0;
            string dlt;
            cout<<"\t\t\t Enter name for Delete : ";
            cin>>dlt;
            for(int i=0; i<100; i++)
            {
                if(dlt ==name[i])
                {

                    printf("Name :  ");
                    cout<<name[i]<<endl;
                    printf("Number :  ");
                    cout<<num[i]<<endl;
                    name[i]="\0";
                    num[i]="\0";
                    cout<<"\t\t\t Deleted\n";
                    cout<<"\n";
                    n++;
                }

            }
            if(n==0)
            {
                {
                    cout<<"\t\t\t Contact Not Found";
                    cout<<"\n";
                    cout<<"\n";
                }
            }
        }
        ck=option();
    }

    while(ck!=6);
}
int option()
{
    cout<<"\t==============================================\n";
    cout<<"\t===================PHONE BOOK=================\n";
    cout<<"\t\t\t 1.Add Contact\n";
    cout<<"\t\t\t 2.Show Contact List\n";
    cout<<"\t\t\t 3.Search Record\n";
    cout<<"\t\t\t 4.Modify Contact\n";
    cout<<"\t\t\t 5.Delete Contact\n";
    cout<<"\t\t\t 6.Exit\n";
    cout<<"\t==============================================\n";
    cout<<"\t==============================================\n";
    cout<<"\t\t ENTER YOUR CHOICE :";

    int a;
    cin>>a;
    system("cls");
    return a;
}

