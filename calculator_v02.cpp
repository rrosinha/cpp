#include "std_lib_facilities.h"

// Token class.
class Token
{
    public:
        char kind;
        double value;

        // Constructors
        Token(char k): kind{k}, value{0.0} {}
        Token(char k, double v): kind{k}, value{v} {}
}; //end with a semicolon

Token get_token()    // read a token from cin
{
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
        //not yet   case ';':    // for "print"
        //not yet   case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token('8', val);   // let '8' represent "a number"
    }
    default:
        error("Bad token");
        return 1;
    }
}

// Toke_stream class.
class Token_stream
{
    public:
        Token get();
        void putback(Token t);
    private:
        bool full{false};
        Token buffer{0};
};

void Token_stream::putback(Token t)
{
    buffer = t;
    full = true;
}

Token Token_stream::get() 
{
    if(full)
    {
        full = false;
        return buffer;
    }
    char ch;
    cin >> ch;

    switch(ch)
    {
        case ';': // for print
        case 'q': // for quit
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token{ch};
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);
            double val;
            cin >> val;
            return Token('8', val);
        }
        default:
            error("Bad token");
    }
}

Token_stream ts;

double expression();

double primary()
{
    Token t = get_token();
    switch(t.kind)
    {
        case '(':
        {
            double d = expression();
            t = get_token();
            if(t.kind != ')') error("')' expected");
            return d;
        }
        case '8':
            return t.value;
        default:
            error("primary expected");
    }
}

//
double term()
{
    double left = primary();
    Token t = get_token();
    while(true)
    {
        switch(t.kind)
        {
            case '*':
                left *= primary();
                t = get_token();
                break;
            case '/':
                {
                    double d = primary();
                    if(d == 0 ) error("divide by sero");
                    left /= d;
                    t = get_token();
                    break;
                }
            default:
                return left;
        }
    }
}

// 
double expression()
{
    double left = term();
    Token t = get_token();
    while(true)
    {
        switch(t.kind)
        {
            case '+':
                left += term();
                t = get_token();
                break;
            case '-':
                left -= term();
                t = get_token();
                break;
            default:
                return left;
        }
    }
}

int main()
{
    try
    {
        while(cin)
        {
            cout << expression << '\n';
        }
        return 0;
    }
    catch (exception& e)
    {
        cerr << e.what() << '\n';
        return 1;
    }
    catch(...)
    {
        cerr << "exception \n";
        return 2;
    }
    
        
    
}