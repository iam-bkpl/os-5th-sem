#include<stdio.h>
void main()
{
        int bt[20], p[20], wt[20], tat[20], i,j,n, total=0, totalT=0, pos, temp;
        float avg_wt, avg_tat;

        printf("\nEnter number of process(maximum 20):");
        scanf("%d", &n);

        printf("\nEnter Burst Time\n");
        for(i=0; i<n;i++)
        {
                printf("P[%d]",i+1);
                scanf("%d", &bt[i]);
                p[i]=i+1;
        }
        for(i=0; i<n ; i++)
        {
                pos=i;
                for(j=i+1; j<n ; j++)
                {
                        if(bt[j] < bt[pos])
                                pos = j;
                }
                temp = bt[i];
                bt[i] = bt[pos];
                bt[pos] = temp;

                temp = p[i];
                p[i] = p[pos];
                p[pos] = temp;
        }
        wt[0]=0;
        for(i=1; i<n ;i++)
        {
                wt[i]=0;
                for(j=0;j<i;j++)
                        wt[i] += bt[j];

                total += wt[i];
        }

        avg_wt = (float)total/n;
        printf("\nProcess\t\t Burst Time \t Waiting Time \t Turnaround Time");
        for(i=0;i<n;i++)
        {
                tat[i]=bt[i]+wt[i];

                totalT += tat[i];
                printf("\n\tp%d\t\t %d\t\t %d\t\t %d\t\t",p[i],bt[i],wt[i],tat[i]);
        }
        avg_tat = (float)totalT/n;
        printf("\n\nAverage Waiting Time = %f", avg_wt);
        printf("\nAverage Turnaround Time = %f\t",avg_tat);
}
