
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    stack<char> st;
    int count = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            count++; 
            st.push(' '); 
        }
    }

    cout << "So tu trong chuoi: " << count << endl;
    cout << "Chuoi dao nguoc: ";

    while (!st.empty()) {
        cout << st.top(); 
        st.pop(); 
    }

    return 0;
}
