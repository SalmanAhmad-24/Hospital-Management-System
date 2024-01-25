#include <iostream>
using namespace std;

void insert_diseases(string temp, string *&diseases, int &d_size)
{
    string *newarr = new string[d_size + 1];
    for (int i = 0; i < d_size; i++)
    {
        newarr[i] = diseases[i];
    }
    d_size++;
    newarr[d_size - 1] = temp;
    diseases = newarr;
}
void insert_patients(string temp, string *&patients, int &p_size)
{
    string *newarr = new string[p_size + 1];
    for (int i = 0; i < p_size; i++)
    {
        newarr[i] = patients[i];
    }
    p_size++;
    newarr[p_size - 1] = temp;
    patients = newarr;
}
void insert_dates(string temp, string *&dates, int &dt_size)
{
    string *newarr = new string[dt_size + 1];
    for (int i = 0; i < dt_size; i++)
    {
        newarr[i] = dates[i];
    }
    dt_size++;
    newarr[dt_size - 1] = temp;
    dates = newarr;
}
void insert_wards(string temp, string *&wards, int &w_size)
{
    string *newarr = new string[w_size + 1];
    for (int i = 0; i < w_size; i++)
    {
        newarr[i] = wards[i];
    }
    w_size++;
    newarr[w_size - 1] = temp;
    wards = newarr;
}
void print(string *&patients, string *&diseases, string *&dates, string *&wards, int &p_size)
{   
    for (int i = 0; i < p_size; i++)
    {
        cout << "Details of " << i + 1 << " patient " << endl;
        cout << "Name :" << patients[i] << endl;
        cout << "Disease :" << diseases[i] << endl;
        cout << "Month :" << dates[i] << endl;
        cout << "Ward :" << wards[i] << endl;
        cout << "*******-------------*********" << endl;
    }
}
    void delete_name(string *&patients, int &p_size)
    {
        string del;
        cout << "Enter the Name of patient to be deleted " << endl;
        cin >> del;
        for (int i = 0; i < p_size; i++)
        {

            if (patients[i] == del)
            {
                for (int j = i; j < p_size - 1; j++)
                {
                    patients[j] = patients[j + 1];
                }
                p_size=p_size-1;
                break;
            }
        }

    }
     void delete_disease(string *&diseases, int &d_size)
    {
        string del;
        cout << "Enter the disease of the patient  to be deleted " << endl;
        cin >> del;
        for (int i = 0; i < d_size; i++)
        {

            if (diseases[i] == del)
            {
                for (int j = i; j < d_size - 1; j++)
                {
                    diseases[j] = diseases[j + 1];
                }
                 d_size=d_size-1;

                break;
            }
        }

    }
     void delete_date(string *&dates, int &dt_size)
    {
        string del;
        cout << "Enter the date of the patient to be deleted " << endl;
        cin >> del;
        for (int i = 0; i < dt_size; i++)
        {

            if (dates[i] == del)
            {
                for (int j = i; j < dt_size - 1; j++)
                {
                    dates[j] = dates[j + 1];
                }
                dt_size=dt_size-1;

                break;
            }
        }

    }
     void delete_ward(string *&wards, int &w_size)
    {
        string del;
        cout << "Enter the ward of the patient to be deleted " << endl;
        cin >> del;
        for (int i = 0; i < w_size; i++)
        {

            if (wards[i] == del)
            {
                for (int j = i; j < w_size - 1; j++)
                {
                    wards[j] = wards[j + 1];
                }
                w_size=w_size-1;

                break;
            }
        }

    }


int main()
{
    
    cout<<"\n\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t@@ ___________________________________________________  @@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                                           	 |@@\n";
cout<<"\t\t@@|                 WELCOME TO  HOSPITAL                  |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                 MANAGEMENT SYSTEM MAYAR|       |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|                                                   |@@\n";
cout<<"\t\t@@|___________________________________________________|@@\n";
cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\t\t\t\t";
    string *patients = new string;
    string *diseases = new string;
    string *dates = new string;
    string *wards = new string;

    int p_size = 0;
    int d_size = 0;
    int dt_size = 0;
    int w_size = 0;
    int choice;
    string name, disease, ward, date;

    int iterator = 1;
    while (iterator)
    {   cout<<"\nEnter 1 for insertion of patients record "<<endl;
        cout<<"Enter 2 for deletion of patients record  "<<endl;
        cout<<"Enter 3 for showing the record of patients "<<endl;
        cout<<"Enter 4 to exit the Management system "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "Enter name of the patient " << endl;
            cin >> name;
            insert_patients(name, patients, p_size);
            cout << "Enter disease of the patient " << endl;
            cin >> disease;
            insert_diseases(disease, diseases, d_size);
            cout << "Enter entry date of patient " << endl;
            cin >> date;
            insert_dates(date, dates, dt_size);
            cout << "Enter ward in which you want to admit the patient " << endl;
            cin >> ward;
            insert_wards(ward, wards, w_size);
            break;
        case 2:
           delete_name(patients,p_size);
           delete_disease(diseases,d_size);
           delete_date(dates,dt_size);
           delete_ward(wards,w_size);
           cout<<"Data Deleted Successfully "<<endl;
            break;
        case 3:
            print(patients, diseases, dates, wards, p_size);
            break;
        case 4:
           iterator=0;
           break;
        }
    }

}