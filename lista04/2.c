#include <stdio.h>
#include <math.h>

typedef struct tempo {
	int min;
	int seg;
	int dec;
} tempo;

float transf_para_seg(tempo a)
{
	float segs = 0;
	segs = a.dec;
	segs /= 100;
	segs += (a.min * 60);
	segs += a.seg;
	return segs;	
}

tempo desfaz_transf(float seg)
{
	tempo dif;

	dif.min = seg/60;
	seg -= dif.min*60;

	dif.seg = seg;


	seg *= 100;
	dif.dec = (int)seg%10;
	for (int i = 0; i<2; i++) {
		dif.dec += (int)seg%10*(10*i);
		seg /= 10;
	}

	return dif;
}


tempo variacao_tempo (tempo a, tempo b)
{
	
	float segs1 = (transf_para_seg(a));
	float segs2 = (transf_para_seg(b));
	return desfaz_transf(fabs(segs1 - segs2));
}

int main ()
{
	tempo time1;
	tempo time2;
	scanf("%dm %ds %d", &(time1.min), &(time1.seg), &(time1.dec));
	scanf("%dm %ds %d", &(time2.min), &(time2.seg), &(time2.dec));
	tempo time3 = (variacao_tempo(time1, time2));
	printf("%dm %ds %d\n", time3.min, time3.seg, time3.dec);
}
