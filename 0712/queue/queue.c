
static int f = 0, r = 0, sz = 512; 	/*f入队, r出队, sz队列的大小*/
static int queue[512];					/*队列的存储空间*/
void enqueue(int item)			/*环形队列,当数组游标到达sz后,游标变为0*/
{
	f %= sz;
	queue[f++] = item;
}
int dequeue(void)
{
	r %= sz;
	return queue[r++];
}
int is_empty(void)
{
	return f == r;
}
int is_full(void)
{
	return (r+1)%sz == f;
}
