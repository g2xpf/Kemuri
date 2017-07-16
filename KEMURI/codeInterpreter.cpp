#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main(){
    stack<char> s;
    queue<char> q;
    while(1){
        char input;
        scanf("%c", &input);
        if(input == '\n' || input == '\0' || input == EOF) break;
        q.push(input);
    }

    while(!q.empty()){
        char front = q.front();
        if(front == '^'){
            char c1 = s.top();
            s.pop();
            char c2 = s.top();
            s.pop();
            s.push(c1^c2);
        }else if(front == '~'){
            char c1 = s.top();
            s.pop();
            s.push(~c1);
        }else if(front == '"'){
            char c1 = s.top();
            s.pop();
            s.push(c1);
            s.push(c1);
        }else if(front == '\''){
            char c1 = s.top();
            s.pop();
            char c2 = s.top();
            s.pop();
            char c3 = s.top();
            s.pop();
            s.push(c1);
            s.push(c3);
            s.push(c2);
        }else if(front == '`'){
            s.push('!');
            s.push('d');
            s.push('l');
            s.push('r');
            s.push('o');
            s.push('w');
            s.push(' ');
            s.push(',');
            s.push('o');
            s.push('l');
            s.push('l');
            s.push('e');
            s.push('H');
        }else if(front == '|'){
            while(!s.empty()){
                printf("%c", s.top());
                s.pop();
            }
        }else{
            fprintf(stderr, "invalid character : %c", front);
            exit(1);
        }
        q.pop();
    }

    return 0;
}
