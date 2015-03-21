#include<stdio.h>
#include<unistd.h>
struct Sched
{
        int arrv_tym;
        int priority;
        int svc_tym;
        int wait_tym;
        int status;
}s[5];
int Fcfs();
int SJf();
int Priority();
int Fcfs()
{
        int i,wait_tym=0,clock=s[0].arrv_tym;
        for(i=0;i<5;i++)
        {
                wait_tym=wait_tym+(clock-s[i].arrv_tym);
                clock=clock+s[i].svc_tym;
                s[i].status=1;
        }
        return wait_tym;
}
int Sjf()
{
        int i,wait_tym=0,n=4;
        int clock=s[0].svc_tym;
        int chosen=1,svc_tym=100;
        s[0].status=1;
        for(i=1;i<5;i++)
                s[i].status=0;
        printf("\nOrder is::\n Job Num:1");
        while(n>0)
        {
                for(i=1;i<5;i++)
                {
                        if((s[i].arrv_tym<=clock)&&(s[i].svc_tym<=svc_tym)&&(s[i].status==0))
                        {
                                chosen=i;
                                svc_tym=s[chosen].svc_tym;
                        }
                }
                printf("\n Job Num:%d ",(chosen+1));
                s[chosen].status=1;
                wait_tym=wait_tym+(clock-s[chosen].arrv_tym) ;
                clock=clock+s[chosen].svc_tym;
                svc_tym=100;
                n--;
        }
        return wait_tym;
}
int Priority()
{
        int i,wait_tym=0,n=4;
        int clock=s[0].svc_tym;
        int chosen=1,priority=100;
        s[0].status=1;
        for(i=1;i<5;i++)
                s[i].status=0;
        printf("\nOrder is::\n Job Num:1");
        while(n>0)
        {
        	for(i=1;i<5;i++)
        	{
        		if((s[i].arrv_tym<=clock)&&(s[i].status==0)&&(s[i].priority<=priority))
        		{
                        		chosen=i;
                        		priority=s[chosen].priority;
       		}
        	}
        	printf("\n Job Num:%d ",(chosen+1));
        	s[chosen].status=1;
        	wait_tym=wait_tym+(clock-s[chosen].arrv_tym) ;
        	clock=clock+s[chosen].svc_tym;
        	priority=100;
        	n--;
        }
        return wait_tym;
}
int main()
{
        int i,j,choice,tot_wait_tym;
        for(i=0;i<5;i++)
        {
                j=i+1;
                printf("\nArrv_tym for job %d::",j);
                scanf("%d",&s[i].arrv_tym);
                printf("\nSvc_tym for job %d::",j);
                scanf("%d",&s[i].svc_tym);
                s[i].status=0;
                printf("\npriority for job num %d :",j);
                scanf("%d",&s[i].priority);
        }
        printf("\nFCFS :: ");
        tot_wait_tym=Fcfs();
        printf("\nTotal wait tym in Fcfs Is : %d",tot_wait_tym);
        printf("\nAvg wait tym in Fcfs is : %d",(tot_wait_tym/5));
        printf("\nSJF ::");
        tot_wait_tym=Sjf();
        printf("\nTotal wait tym in SJF is : %d",tot_wait_tym);
        printf("\nAvg wait tym in SJF is : %d",(tot_wait_tym/5));
        printf("\nPRIORITY ::");
        tot_wait_tym=Priority();
        printf("\nTotal wait tym in priority is : %d",tot_wait_tym);
        printf("\nAvg wait tym in priority is : %d",(tot_wait_tym/5));
        printf("\nTotal wait tym is : %d",tot_wait_tym);
        printf("\nAvg wait tym is : %d",(tot_wait_tym/6));
        return 0;
}

