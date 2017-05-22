#include <string>
using namespace std;
bool checkReverseEqual(string s1, string s2) {
    // write code here
    int len = s1.length();
    if(len == s2.length() && len > 0)
    {
    	string s1s1 = s1 + s1;
    	return s1s1.find(s2)!=-1;
	}
	return false;
}
int main(void)
{
	string s1="bwdyorsngiayocsksyybigrvqxtvhmfyyhmbhhlcenxalcpodllikancwwqbdfrfpcjftfknrekmvdkugdljtlrjcwlwwmswucgebmmsovdezsqtuohnnjjeqyhsnyumngxlgulsiclfrtzzynawgraqctkhrjluykmfujhrwgcgybhaulhmskstwjvgfmofxeuflkkqajialclnlzggccqwdgpkiiobpzgnipliekufylogjrarvxdwslnkwczfltveebzcrjcttxpizhsweeogsixegkwhfwtmtngqjhgkwduahgyyjxihuyxlsksfzpzikdnqvsgyzisnmqgdymkglbtuhjpxhbeybiewrvbdabprqzpvsvdejahfqsnvoijyypmmhpcpbjsukftobgnzxbdltfdfwjk";
	string s2="yypmmhpcpbjsukftobgnzxbdltfdfwjDbwdyorsngiayocsksyybigrvqxtvhmfyyhmbhhlcenxalcpodllikancwwqbdfrfpcjftfknrekmvdkugdljtlrjcwlwwmswucgebmmsovdezsqtuohnnjjeqyhsnyumngxlgulsiclfrtzzynawgraqctkhrjluykmfujhrwgcgybhaulhmskstwjvgfmofxeuflkkqajialclnlzggccqwdgpkiiobpzgnipliekufylogjrarvxdwslnkwczfltveebzcrjcttxpizhsweeogsixegkwhfwtmtngqjhgkwduahgyyjxihuyxlsksfzpzikdnqvsgyzisnmqgdymkglbtuhjpxhbeybiewrvbdabprqzpvsvdejahfqsnvoij";
	printf("%d",checkReverseEqual(s1,s2));
	return 0;
}
