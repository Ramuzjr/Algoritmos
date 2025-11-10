int Factorial (int n){
	int f=-1;
	if (n>=0){
		f=1;
		for(int i=1; i<=n; i=i+1){
			f=f*i;
		}	
	}
	return f;
}

bool  EPrimo(int p){
	bool r=true;
	for(int i=2; i<p/2 && r; i=i+1){
		if (p%i==0){
			r=false;
		}
	}
	return r;
}
