/*
  单词接龙是一个与我们经常玩的成语接龙相类似的游戏，
  现在我们已知一组单词，且给定一个开头的字母，要求出以这个字母开头的最长的“龙”
  （每个单词都最多在“龙”中出现两次），
  在两个单词相连时，其重合部分合为一部分，
  例如beast和astonish，如果接成一条龙则变为beastonish，
  另外相邻的两部分不能存在包含关系，
  例如at和atide间不能相连。
  
  输出最长"龙" 的长度. 
*/ 




//0.0.0.0 我要先做什么.................
//三个小时   要     休息  休息........
// 

//-2 程序目的 
//-1 数据结构
	//词组,词组的长度,头和尾,
	//形成  数组
	//方便调用......(得到[我需要的]信息) 
//-0.5 设计程序步奏 
//0 输入 
//1 寻找
	//1.1 拿现在的"龙"与(第二位)与可能的"尾"(不能最后一位)比较,,,若可行则接上去(长度不不能缩短
	      //不能) (深搜.....回溯???) 
//2 合并
//3 计数
//4 输出 


struct longelement
{
	char string[10];
	int size;
	char tou;
	char wei;
} 

int n;
cin>>n;
for(int i=0;i<n;i++)
{
	//long element
}









