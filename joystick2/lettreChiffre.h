static int espace[]={
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,0,0,0};

static int deuxPoints[]={
				0,0,1,0,0,
				0,1,1,1,0,
				0,0,1,0,0,
				0,0,0,0,0,
				0,0,0,0,0,
				0,0,1,0,0,
				0,1,1,1,0,
				0,0,1,0,0};			

static int A[]={1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1};

static int B[]={1,1,1,1,0,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,0,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,0};

static int C[]={1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,1};

static int D[]={1,1,1,1,0,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,0};

static int E[]={1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,1};

static int F[]={1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0};

static int G[]={1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1};

static int H[]={1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1,
				1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1};

static int I[]={1,1,1,1,1,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				1,1,1,1,1};

static int J[]={1,1,1,1,1,
				0,0,0,1,0,
				0,0,0,1,0,
				0,0,0,1,0,
				0,0,0,1,0,
				0,0,0,1,0,
				0,0,0,1,0,
				1,1,1,0,0};

static int K[]={1,0,0,0,1,
				1,0,0,1,0,
				1,0,1,0,0,
				1,1,0,0,0,
				1,1,0,0,0,
				1,0,1,0,0,
				1,0,0,1,0,
				1,0,0,0,1};

static int L[]={1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,1};

static int M[]={1,0,0,0,1,
				1,1,0,1,1,
				1,0,1,0,1,
				1,0,1,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1};

static int N[]={1,0,0,0,1,
				1,1,0,0,1,
				1,0,1,0,1,
				1,0,1,0,1,
				1,0,1,0,1,
				1,0,1,0,1,
				1,0,0,1,1,
				1,0,0,0,1};

static int O[]={0,1,1,1,0,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				0,1,1,1,0};

static int P[]={1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,0,0,0,0};

static int Q[]={1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,1,0,
				1,0,0,1,0,
				1,1,1,0,1};

static int R[]={1,1,1,1,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1,
				1,0,0,1,0,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1};

static int S[]={1,1,1,1,1,
				1,0,0,0,0,
				1,0,0,0,0,
				1,1,1,1,1,
				0,0,0,0,1,
				0,0,0,0,1,
				0,0,0,0,1,
				1,1,1,1,1};

static int T[]={1,1,1,1,1,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,0,1,0,0};

static int U[]={1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				1,1,1,1,1};

static int V[]={1,0,0,0,1,
				1,0,0,0,1,
				1,0,0,0,1,
				0,1,0,1,0,
				0,1,0,1,0,
				0,1,0,1,0,
				0,0,1,0,0,
				0,0,1,0,0};

static int W[]={1,0,0,0,1,
				1,0,0,0,1,
				1,0,1,0,1,
				1,0,1,0,1,
				1,1,0,1,1,
				1,1,0,1,1,
				1,1,0,1,1,
				1,0,0,0,1};

static int X[]={1,0,0,0,1,
				1,0,0,0,1,
				0,1,0,1,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,1,0,1,0,
				1,0,0,0,1,
				1,0,0,0,1};

static int Y[]={1,0,0,0,1,
				0,1,0,1,1,
				0,1,0,1,0,
				0,0,1,0,0,
				0,0,1,0,0,
				0,1,0,0,0,
				0,1,0,0,0,
				1,0,0,0,0};

static int Z[]={1,1,1,1,1,
				0,0,0,0,1,
				0,0,0,0,1,
				0,0,0,1,0,
				0,0,1,0,0,
				1,1,0,0,0,
				1,0,0,0,0,
				1,1,1,1,1};

static int zero[]={1,1,1,1,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,1,1,1,1};

static int un[]={0,0,0,0,1,
				 0,0,0,1,1,
				 0,0,1,0,1,
				 0,1,0,0,1,
				 1,0,0,0,1,
				 0,0,0,0,1,
				 0,0,0,0,1,
				 0,0,0,0,1}; /* 3 colonnes 8 lignes*/

static int deux[]={1,1,1,1,1,
				   0,0,0,0,1,
				   0,0,0,0,1,
				   1,1,1,1,1,
				   1,0,0,0,0,
				   1,0,0,0,0,
				   1,0,0,0,0,
				   1,1,1,1,1};

static int trois[]={1,1,1,1,1,
					0,0,0,0,1,
					0,0,0,0,1,
					0,1,1,1,1,
					0,0,0,0,1,
					0,0,0,0,1,
					0,0,0,0,1,
					1,1,1,1,1};

static int quatre[]={1,0,0,0,0,
					 1,0,0,0,0,
					 1,0,1,0,0,
					 1,1,1,1,1,
					 0,0,1,0,1,
					 0,0,0,0,1,
					 0,0,0,0,1,
					 0,0,0,0,1};

static int cinq[]={1,1,1,1,1,
				   1,0,0,0,0,
				   1,0,0,0,0,
				   1,1,1,1,1,
				   0,0,0,0,1,
				   0,0,0,0,1,
				   0,0,0,0,1,
				   1,1,1,1,1};

static int six[]={1,1,1,1,1,
				  1,0,0,0,0,
				  1,0,0,0,0,
				  1,0,0,0,0,
				  1,1,1,1,1,
				  1,0,0,0,1,
				  1,0,0,0,1,
				  1,1,1,1,1};

static int sept[]={1,1,1,1,1,
				   0,0,0,0,1,
				   0,0,0,1,1,
				   0,0,1,0,0,
				   0,1,0,0,0,
				   0,1,0,0,0,
				   0,1,0,0,0,
				   0,1,0,0,0};

static int huit[]={1,1,1,1,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,1,1,1,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,1,1,1,1};

static int neuf[]={1,1,1,1,1,
				   1,0,0,0,1,
				   1,0,0,0,1,
				   1,1,1,1,1,
				   0,0,0,0,1,
				   0,0,0,0,1,
				   0,0,0,0,1,
				   1,1,1,1,1};

