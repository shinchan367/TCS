string solve(string input){
    string answer;
    for(int i=0;i<input.size();i++){
        if(input[i] != '(' && input[i] != ')')
            answer.push_back(input[i]);
    }
    return answer;
}
