#include "words.hpp"
#include <locale>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>

std::string tolowerr(std::string data){
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
return(data);
}

std::map<std::string, int> count_words(std::string const &input) {
    std::map<std::string, int> result;
    std::map<std::string, int> result2;
    std::string s;
    std::string t;
    for (int i = 0; i <= input.length(); i++){
        if (isalpha(input[i])){
            s += tolower(input[i]);
            

        }else{
            if (s != ""){
                if(result.find(s) != result.end()) {
                result[s] += 1;
                s = "";
                }else{
                    
                    result[s] = 1;
                    
                    s = "";
                }
                        
            }

        }

    }


   
               
                std::map <std::string, int> :: iterator it = result.begin();
                s = "";
                for (int q = 0; it != result.end(); it++, q++) {  // выводим их
        std::cout << q << ") Ключ " << it->first << ", значение " << it->second << "\n";
            for (int i =0; i <= input.length(); i++){
                if (isalpha(input[i])){
                    s += input[i]; 
                }else{
                    if ((tolowerr(s) == it->first) & (tolowerr(s) != t)){
                      if(result2[s] != result[tolowerr(s)]){
                        result2[s] = result[tolowerr(s)];
                        t= tolowerr(s);
                      }
                    }
                        s="";
                }

            }


            

        


    }







return result2;
}
