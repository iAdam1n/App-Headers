/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface DDTTYLoggerColorProfile : NSObject {

	unsigned long long mask;
	long long context;
	unsigned char fg_r;
	unsigned char fg_g;
	unsigned char fg_b;
	unsigned char bg_r;
	unsigned char bg_g;
	unsigned char bg_b;
	unsigned long long fgCodeIndex;
	NSString* fgCodeRaw;
	unsigned long long bgCodeIndex;
	NSString* bgCodeRaw;
	char fgCode[24];
	unsigned long long fgCodeLen;
	char bgCode[24];
	unsigned long long bgCodeLen;
	char resetCode[8];
	unsigned long long resetCodeLen;

}
-(id)initWithForegroundColor:(UIColor*)arg1 backgroundColor:(UIColor*)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 ;
-(id)description;
@end
