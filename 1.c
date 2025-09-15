##include<stdio.h>
int main (){
	char a,b,c;
	int vowel=0;
	int consonant=0;
	printf("Enter any 3 alphabets\n");
	scanf("%c %c %c",&a,&b,&c);
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
		vowel++;
	} else{
		consonant++;
	}
	if (b=='a' || b=='e' || b=='i' || b=='o' || b=='u'){
		vowel++;
	} else{
		consonant++;
	}
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		vowel++;
	} else{
		consonant++;
	}
	printf("Number of vowels : %d \n",vowel);
	printf("Number of consonants : %d \n",consonant);
	return 0;

	
}

