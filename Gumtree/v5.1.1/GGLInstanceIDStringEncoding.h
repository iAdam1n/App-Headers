/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface GGLInstanceIDStringEncoding : NSObject {

	NSData* charMapData_;
	char* charMap_;
	int reverseCharMap_[128];
	int shift_;
	int mask_;
	BOOL doPad_;
	char paddingChar_;
	int padLen_;

}
+(id)stringEncodingWithString:(id)arg1 ;
+(id)rfc4648Base64WebsafeStringEncoding;
-(void)setPaddingChar:(char)arg1 ;
-(void)setDoPad:(BOOL)arg1 ;
-(BOOL)doPad;
-(id)encode:(id)arg1 ;
-(id)decode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithString:(id)arg1 ;
@end
