#include<iostream>
#include<vector>

class Node;
    class Program;

    class Decl;
        class func_Decl;
        class var_Decl;

    class Stat;
        class expr_Stat;
        class if_Stat;
        class for_Stat;
        class while_Stat;
        class switch_Stat;
        class do_Stat;
        class continue_Stat;
        class break_Stat;
        class return_Stat;
        class var_decl_Stat;
        class stats_Stat;
        class Case;

    class Expr;
        class add_Expr;
        class addeq_Expr;
        class dadd_Expr;
        class sub_Expr;
        class subeq_Expr;
        class dsub_Expr;
        class mul_Expr;
        class muleq_Expr;
        class div_Expr;
        class diveq_Expr;
        class mod_Expr;
        class modeq_Expr;
        class and_Expr;
        class band_Expr;
        class bandeq_Expr;
        class or_Expr;
        class bor_Expr;
        class boreq_Expr;
        class xor_Expr;
        class bxor_Expr;
        class bxoreq_Expr;
        class bnot_Expr;
        class shl_Expr;
        class shleq_Expr;
        class shr_Expr;
        class shreq_Expr;
        class eq_Expr;
        class ge_Expr;
        class le_Expr;
        class lt_Expr;
        class gt_Expr;
        class neq_Expr;
        class not_Expr;
        class pos_Expr;
        class neg_Expr;
        class val_Expr;

    class Var;

    class Val;
        class intVal;
        class doubleVal;
        class stringVal;
        class charVal;
        class boolVal;
        
    class Type;

class Node
{
    private:
        /* data */
    public:
        Node(){};
        ~Node(){};
        virtual void print()=0; 
};

class Program : public Node
{
    public:
        std::vector<Decl*>* decls_;
        void print();
        Program(std::vector<Decl*>* decls):decls_(decls){}
};

class Decl : public Node
{
    public:
        Decl(){};
        ~Decl(){};
        virtual void print()=0; 
};

class func_Decl : public Decl
{
    public:
        Type* type_;
        std::string* name_;
        std::vector<Var*>* var_list_;
        std::vector<Stat*>* stats_;
        func_Decl(Type* type, std::string* name,
            std::vector<Var*>* var_list,
            std::vector<Stat*>* stats):
            type_(type),name_(name),
            var_list_(var_list),stats_(stats){
            }
        void print();
            
};

class var_Decl : public Decl
{
    public:
        Type* type_;
        std::string* name_;
        Expr* expr_;
        var_Decl(Type* type, std::string* name, Expr* expr):
            type_(type),name_(name),expr_(expr){}
        void print();
};

class Stat : public Node
{
    public:
        virtual void print()=0; 
};

class expr_Stat : public Stat
{
    public:
        Expr* expr_;
        expr_Stat(Expr* expr):expr_(expr){}
        void print();
};

class Expr : public Node
{
    public:
        virtual void print()=0;
};

class add_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        add_Expr( Expr* left, Expr* right):left_(left), right_(right){} 
        void print();
};

class addeq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        addeq_Expr( Expr* left, Expr* right):left_(left), right_(right){}   
        void print();
};

class dadd_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        dadd_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class sub_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        sub_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class subeq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        subeq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class dsub_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        dsub_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};


class mul_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        mul_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class muleq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        muleq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class div_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        div_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class diveq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        diveq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class mod_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        mod_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class modeq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        modeq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class and_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        and_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class band_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        band_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class bandeq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        bandeq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class or_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        or_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class bor_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        bor_Expr( Expr* left, Expr* right):left_(left), right_(right){}
       void print();
};

class boreq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        boreq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class xor_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        xor_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class bxor_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        bxor_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class bxoreq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        bxoreq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class bnot_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        bnot_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class shl_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        shl_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class shleq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        shleq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class shr_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        shr_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class shreq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        shreq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class eq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        eq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class ge_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        ge_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class le_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        le_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class lt_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        lt_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class gt_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        gt_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class neq_Expr : public Expr
{
    public:
        Expr* left_;
        Expr* right_;
        neq_Expr( Expr* left, Expr* right):left_(left), right_(right){}
        void print();
};

class not_Expr : public Expr
{
    public:
        Expr* expr_;
        not_Expr( Expr* expr ):expr_(expr){}
        void print();
};

class pos_Expr : public Expr
{
    public:
        Expr* expr_;
        pos_Expr( Expr* expr ):expr_(expr){}
        void print();
};

class neg_Expr : public Expr
{
    public:
        Expr* expr_;
        neg_Expr( Expr* expr ):expr_(expr){}
        void print();
};

class val_Expr : public Expr
{
    public:
        Val* val_;
        val_Expr( Val* val ):val_(val){}
        void print();
};

class var_Expr : public Expr
{
    public:
        std::string* name_;
        var_Expr( std::string* name ):name_(name){}
        void print();
};


class if_Stat : public Stat
{
    public:
        Expr* expr_;
        Stat* iff_Stat_;
        Stat* else_Stat_;
        if_Stat(Expr* expr, Stat* iff_Stat, Stat* else_Stat):
            expr_(expr),iff_Stat_(iff_Stat),else_Stat_(else_Stat){}
        void print();
};

class for_Stat : public Stat
{
    public:
        Expr* first_Expr_;
        Expr* second_Expr_;
        Expr* third_Expr_;
        var_Decl* first_var_decl_;
        Stat* stat_;
        for_Stat( Expr* first_Expr,
                Expr* second_Expr,
                Expr* third_Expr,
                var_Decl* first_var_decl,
                Stat* stat):
            first_Expr_(first_Expr),
            second_Expr_(second_Expr),
            third_Expr_(third_Expr),
            first_var_decl_(first_var_decl),
            stat_(stat){}
        void print();
};

class while_Stat : public Stat
{
    public:
        Expr* expr_;
        Stat* stat_;
        while_Stat(Expr* expr, Stat* stat):expr_(expr),stat_(stat){}
        void print();

};

class switch_Stat : public Stat
{
    public:
        Expr* expr_;
        std::vector<Case*>* case_list_;
        switch_Stat(Expr* expr, std::vector<Case*>* case_list):
            expr_(expr),case_list_(case_list){}
        void print();
};

class Case : public Node
{
    public:
        Expr* expr_;
        std::vector<Stat*>* stats_;
        Case(Expr* expr,  std::vector<Stat*>* stats):
            expr_(expr),stats_(stats){}
        void print();
};

class do_Stat : public Stat
{
    public:
        Expr* expr_;
        Stat* stat_;
        do_Stat(Expr* expr, Stat* stat):
            expr_(expr),stat_(stat){}
        void print();
};

class continue_Stat : public Stat
{
    public:
        void print();
};

class break_Stat : public Stat
{
    public:
        void print();
};

class return_Stat : public Stat
{
    public:
        Expr* expr_;
        return_Stat(Expr* expr): expr_(expr){}
        void print();
};

class var_decl_Stat : public Stat
{
    public:
        var_Decl* var_decl_;
        var_decl_Stat(var_Decl* var_decl):var_decl_(var_decl){}
        void print();
};

class stats_Stat : public Stat
{
    public: 
        std::vector<Stat*>* stats_;
        stats_Stat(std::vector<Stat*>* stats):stats_(stats){}
        void print();
};


class Var : public Node
{
    public:
        Type* type_;
        std::string* name_;
        Expr* expr_;
        Var(Type* type, std::string* name, Expr* expr):
            type_(type),name_(name),expr_(expr){}
        void print();
};

class Val : public Expr
{
    public:
        virtual void print()=0; 
};

class intVal : public Val
{
    public:
        int value_;
        intVal(int value):value_(value){}
        void print()
        {
            printf("int:%d\n",value_);
        }
};

class doubleVal : public Val
{
    public:
        double value_;
        doubleVal(double value):value_(value){}
        void print()
        {
            printf("double:%lf\n",value_);
        }
};

class stringVal : public Val
{
    public:
        std::string* value_;
        stringVal(std::string* value):value_(value){}
        void print()
        {
            printf("string:%s\n",value_->c_str());
        }
};

class charVal : public Val
{
    public:
        char value_;
        charVal(char value):value_(value){}
        void print()
        {
            printf("char:%c\n",value_);
        }
};

class boolVal : public Val
{
    public:
        bool value_;
        boolVal(bool value):value_(value){}
        void print()
        {
            if(value_)printf("bool:true\n");
            else printf("bool:false\n");
        }
};

class Type : public Node
{
    public:
        enum TypeID {
                _Bool,
                _Short,
                _Int,
                _Long,
                _Char,
                _Float,
                _Double,
                _Void
            };
        TypeID id_;
        Type(TypeID id):id_(id){
            
        }
        void print();
};
