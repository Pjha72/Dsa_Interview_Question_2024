# STrings in C++

1. C-Style Strings
    ```
    int main(){
        char str[] = "gfg;
        cout<<str; //gfg
        cout<<sizeof(str); // 3

        char str[] = {'g','f','g'};
        cout<<str; //gfg
        return 0;
    }  
    ```
    a. Functions :
        1. strlen(str)
        2. strcmp(s1,s2);
        ```
        int main(){
            char s1[] = "abc";
            char s2[] = "bcd";
            int res = strcmp(s1,s2);
            if(res > 0){
                cout<<"Greater";
            }
            else if(res==0){
                cout<<"Same";
            }
            else{
                cout<<"Smaller";
            }
        }
        ```
        3. strcpy(s1,s2);
            <!-- Compilation error -->
            ```
            int main(){
                char str[5];
                str = "gfg";
                cout<<str;
                return 0;
            }
            ```

            <!-- To remove the Compilation error , Replace str to strcpy -->
            ```
            int main(){
                char str[5];
                str = "gfg";
                cout<<str;
                return 0;
            }
            ```
2. C++ String
    1. Richer Library
    2. supports operators like +,<,>,==,<=,>=, are possible
    3. Can assign a string later
    4. Donot have to warry about size.
    5. Can be converted to C-Style if needed.

    ```
    int main(){
        string str = "geeksforgeeks";
        cout<<str.length(); // 13
        str = str + "xyz";
        cout<<str<<" ";
        cout<<str.substr(1,3)<<" "; //eek
        cout<<str.find("eek")<<" "; // 1
        return 0;
    }
    ```

    ```
    int main(){
        string s1 = "abc";
        string s2 = "bcd";
        if(s1==s2){
            cout<<"Same";
        }
        else if(s1<s2){
            cout<<"Greater";
        }
        else{
            cout<<"Smaller";
        }
    }
    ```

    a. Reading Strings From Console
    ```
    int main(){
        string str;
        cout<<"Enter Your Name";
        <!-- cin>>str; -->
        getline(cin,str);
        cout<<"\n Your Name is "<<str;
        return 0;
    }
    ```
    b. Iterating Through a String
    ```
    int main(){
        string str = "geeksforgeeks";
        <!-- First way -->
        for(int i=0;i<str.length();i++){
            cout<<str[i];
        }
        cout<<endl;
        <!-- 2nd Way -->
        for (char x :str){
            cout<<x;
        }
    }
    ```

