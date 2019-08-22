#include <stdafx.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include "encoding.h"
#include <Windows.h>

/**
 *从标准输入读取
 */
char * read(){
	char* s1;
	//printf("请输入待编码数据: \n");

	int c,i = 0;
	while ((c = getchar()) != EOF){
		s1[i++] = c;
	}
	return s1;
}

int main(int argc, _TCHAR* argv[]){
	char       *enc;
	char       *out;
	size_t      out_len;

	char* data = read();

	out_len = b64_decoded_size(data);
	out = (char*)malloc(out_len+1);

	if (!b64_decode(data,(unsigned char*)out,out_len)) {
		printf("Decode Failure\n");
		return 1;
	}else{
		out[out_len] = '\0';
		printf(out);
	}
	//free(enc);
	free(out);
}