    #include <iostream>
    #include <set>

    using namespace std;

    int main()
    {
        set <int> menina_a;
        set <int> menina_b;
        int n, m;
        while(cin>>n>>m&&n&&m)
        {
            for(int i=0; i<n; i++)
            {
                int a;
                cin>>a;
                menina_a.insert(a);
            }
            for(int i=0; i<m; i++)
            {
                int a;
                cin>>a;
                menina_b.insert(a);
            }
            int dif_a =0, dif_b = 0;
            for(set <int> :: iterator it = menina_a.begin(); it!=menina_a.end(); ++it)
            {
                if(menina_b.find(*it)==menina_b.end())
                {
                    dif_a++;
                }
            }
            for(set <int> :: iterator it = menina_b.begin(); it!=menina_b.end(); ++it)
            {
                if(menina_a.find(*it)==menina_a.end())
                {
                    dif_b++;
                }
            }
            cout<<dif_a*(dif_a<=dif_b) + dif_b*(dif_b<dif_a)<<endl;
            menina_a.clear();
            menina_b.clear();
        }
    }
