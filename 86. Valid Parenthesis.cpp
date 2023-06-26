bool isValidParenthesis(string arr) {
  stack<char> s;

  for (int i = 0; i < arr.size(); i++) {
    char ch = arr[i];

    if (ch == '{' || ch == '(' || ch == '[') {
      s.push(ch);
    } else {
      if (!s.empty()) {

        char top = s.top();
        if ((top == '{' && ch == '}') || (top == '[' && ch == ']') ||
            (top == '(' && ch == ')')) {
          s.pop();
        }
        else{
            return false;
        }
      }
      else{
          return false;
      }
    }
  }

  if(s.empty()){
      return true;
  }
  else{    
    return false;
  }
}

