# MiniCompiler
简陋的词法分析和语法分析，基本的抽象语法树框架

编译：
在./build下运行make后，输出程序到`./output/out`

运行：
源文件（test_in）是一段类c代码，
`./output/out < test_in > test_out`，
如果test_in符合语法，输出它的抽象语法树框架到test_out中，否则报错`error:syntax error`

接下来：
在AST_tree的框架上，引入llvm，实现代码生成。

