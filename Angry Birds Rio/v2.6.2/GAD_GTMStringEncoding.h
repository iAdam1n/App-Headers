/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
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
