#include <stdio.h>

//统计词库文件filename中有多少单词
int word_cnt(char *filename)
{
}

//从文本文件里加载单词到数组里
int init_wordarray(char *filename, struct WORD *word, int nword)
{
}

//对结构体数组进行排序(冒泡,选择)
int sort_wordarray(struct WORD *word, int nword)
{
}

//在已排序数组里面二分查找key,找到返回单词地址,否则NULL
struct WORD *search_word(struct WORD *word, int nword, char *key)
{
}

//输出单词解释
int show_word(struct WORD *word)
{
}

//根据排序的结构体数组,创建二进制文件
int create_wordbin(struct WORD *word, int nword, char *binname)
{

}

//统计二进制文件里面有多少单词
int word_bin_cnt(char *binname)
{
}

//加载二进制文件单词, 到数组里
int init_wordarray_bin(char *filename, struct WORD *word, int nword)
{
}

//int init_wordarray_bin(char *filename, struct WORD **word, int nword);
//释放malloc申请的内存, 注意释放顺序
int free_word(struct WORD *word, int nword)
{
}
