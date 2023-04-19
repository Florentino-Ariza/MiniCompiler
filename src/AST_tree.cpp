#include<iostream>
#include"AST_tree.hpp"

void Program::print()
{
    printf("Program{\n");
    for (auto it = decls_->begin(); it!=decls_->end(); it++)
    {
        (*it)->print();
    }
    printf("}\n");
}

void func_Decl::print(){
    printf("func_Decl{\n");
    type_->print();
    printf("Name:%s\n",name_->c_str());
    if(var_list_!=NULL)
        for (auto it = var_list_->begin(); it!=var_list_->end(); it++)
        {
            (*it)->print();
        }
    for (auto it = stats_->begin(); it!=stats_->end(); it++)
        {
            (*it)->print();
        }
    printf("}\n");
}

void var_Decl::print()
{
    printf("var_Decl{\n");
    type_->print();
    printf("Name:%s\n",name_->c_str());
    if(expr_)expr_->print();
    printf("}\n");
}

void expr_Stat::print()
{
    printf("expr_Stat{\n");
    expr_->print();
    printf("}\n");
}

void add_Expr::print(){
    printf("add_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  

void addeq_Expr::print()
{
    printf("addeq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}      
void dadd_Expr::print(){
    printf("dadd_Expr{\n");
    if(left_)left_->print();
    if(right_)right_->print();
    printf("}\n");
}  

void sub_Expr::print(){
    printf("sub_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void subeq_Expr::print(){
    printf("subeq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void dsub_Expr::print(){
    printf("dsub_Expr{\n");
    if(left_)left_->print();
    if(right_)right_->print();
    printf("}\n");
}  
void mul_Expr::print(){
    printf("mul_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void muleq_Expr::print(){
    printf("muleq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void div_Expr::print(){
    printf("div_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void diveq_Expr::print(){
    printf("diveq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void mod_Expr::print(){
    printf("mod_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void modeq_Expr::print(){
    printf("modeq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void and_Expr::print(){
    printf("and_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void band_Expr::print(){
    printf("band_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  

void bandeq_Expr::print(){
    printf("bandeq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void or_Expr::print(){
    printf("or_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void bor_Expr::print(){
    printf("bor_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void boreq_Expr::print(){
    printf("boreq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void xor_Expr::print(){
    printf("xor_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void bxor_Expr::print(){
    printf("bxor_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void bxoreq_Expr::print(){
    printf("bxoreq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void bnot_Expr::print(){
    printf("bnot_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void shl_Expr::print(){
    printf("shl_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void shleq_Expr::print(){
    printf("shleq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void shr_Expr::print(){
    printf("shr_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void shreq_Expr::print(){
    printf("shreq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void eq_Expr::print(){
    printf("eq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void ge_Expr::print(){
    printf("ge_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void le_Expr::print(){
    printf("le_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void lt_Expr::print(){
    printf("lt_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void gt_Expr::print(){
    printf("gt_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void neq_Expr::print(){
    printf("neq_Expr{\n");
    left_->print();
    right_->print();
    printf("}\n");
}  
void not_Expr::print(){
    printf("not_Expr{\n");
    expr_->print();
    printf("}\n");
}  
void pos_Expr::print(){
    printf("pos_Expr{\n");
    expr_->print();
    printf("}\n");
}  
void neg_Expr::print(){
    printf("neg_Expr{\n");
    expr_->print();
    printf("}\n");
}  
void val_Expr::print(){
    printf("val_Expr{\n");
    val_->print();
    printf("}\n");
} 
void var_Expr::print(){
    printf("var_Expr{");
    printf("Name:%s",name_->c_str());
    printf("}\n");
}  
void if_Stat::print(){
    printf("if_Stat{\n");
    expr_->print();
    iff_Stat_->print();
    if(else_Stat_)else_Stat_->print();
}
void for_Stat::print(){
    printf("for_Stat{\n");
    if(first_Expr_)first_Expr_->print();
    if(first_var_decl_)first_var_decl_->print();
    second_Expr_->print();
    third_Expr_->print();
    stat_->print();
    printf("}\n");
}
void while_Stat::print()
{
    printf("while_Stat{\n");
    expr_->print();
    stat_->print();
    printf("}\n");
}
void switch_Stat::print(){
    printf("switch_Stat{\n");
    expr_->print();
    if(case_list_!=NULL)
        for (auto it = case_list_->begin(); it!=case_list_->end(); it++)
        {
            (*it)->print();
        }
    printf("}\n");
}
void Case::print()
{
    printf("Case{\n");
    if(expr_)expr_->print();
    else printf("Default\n");
    if(stats_!=NULL)
        for (auto it = stats_->begin(); it!=stats_->end(); it++)
        {
            (*it)->print();
        }
    printf("}\n");
}
void do_Stat::print()
{
    printf("do_Stat{\n");
    expr_->print();
    stat_->print();
    printf("}\n");
}
void continue_Stat::print()
{
    printf("continue_Stat\n");
}
void break_Stat::print()
{
    printf("break_Stat\n");
}
void return_Stat::print()
{
    printf("return_Stat{\n");
    if(expr_)expr_->print();
    printf("}\n");
}
void var_decl_Stat::print()
{
    printf("var_decl_Stat{\n");
    if(var_decl_)var_decl_->print();
    printf("}\n");
}
void stats_Stat::print()
{
    printf("stats_Stat{\n");
    if(stats_!=NULL)
        for (auto it = stats_->begin(); it!=stats_->end(); it++)
        {
            (*it)->print();
        }
    printf("}\n");
}
void Var::print(){
    printf("Var{\n");
    type_->print();
    printf("Name:%s\n",name_->c_str());
    if(expr_)expr_->print();
    printf("}\n");
}
void Type::print()
{
    printf("Type:");
    switch (id_)
    {
        case 0: printf("Bool\n"); break;
        case 1: printf("Short\n"); break;
        case 2: printf("Int\n"); break;
        case 3: printf("Long\n"); break;
        case 4: printf("Char\n"); break;
        case 5: printf("Float\n"); break;
        case 6: printf("Double\n"); break;
        case 7: printf("Void\n"); break;
        default:printf("Unknown\n");
    }
}