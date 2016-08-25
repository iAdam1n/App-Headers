/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface GAD_GTMStringEncoding : NSObject {

	NSData* charMapData_;
	char* charMap_;
	int reverseCharMap_[128];
	int shift_;
	int mask_;
	BOOL doPad_;
	char paddingChar_;
	int padLen_;

}
+(id)rfc4648Base64WebsafeStringEncoding;
+(id)stringEncodingWithString:(id)arg1 ;
+(id)binaryStringEncoding;
+(id)hexStringEncoding;
+(id)rfc4648Base32StringEncoding;
+(id)rfc4648Base32HexStringEncoding;
+(id)crockfordBase32StringEncoding;
+(id)rfc4648Base64StringEncoding;
-(void)setDoPad:(BOOL)arg1 ;
-(id)encode:(id)arg1 ;
-(void)addDecodeSynonyms:(id)arg1 ;
-(void)setPaddingChar:(char)arg1 ;
-(id)decode:(id)arg1 ;
-(void)ignoreCharacters:(id)arg1 ;
-(BOOL)doPad;
-(id)stringByDecoding:(id)arg1 ;
-(id)encodeString:(id)arg1 ;
-(id)description;
-(id)initWithString:(id)arg1 ;
@end

