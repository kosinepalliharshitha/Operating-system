#include<stdio.h>
int main()
{
	int page_frames[max_page_frames];
	int page_refernce_seq[]={4,1,2,4,3,2,1,5};
	int num_page_frames=3;
	int num_page_refernce=sizeof(page_refernce_seq)/sizeof(page_refernce_seq[0]);
	int i,j,k,facult_count=0;
	bool found;
	for(i=0;i<num_page_frames;i++)
	{
		page_frames[i]=-1;
	}
	for(i=0;i<num_page_refernce;i++)
	{
		found=false;
		for(j=0;j<num_page_frames;j++)
		{
			if(page_frames[j]==page_refernce_seq[i])
			{
				found=true;
				break;
			}
		}
		if(!found)
		{
			page_frames[fault_count%num_page_frames]=page_refernce_seq[i];
			fault_count++;
		}
		printf("page_frames[k]:")
		for(k=0;k<num_page_frames;k++)
		{
			if(page_frames[k]==-1)
			{
				printf("-")
			}
			else
			{
				printf("%d",page_frames[k]);
			}
		}
		print("\n")
	}
	printf("number of page faults:%d")
}
