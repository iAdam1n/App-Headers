/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
+(id)stringEncodingWithString:(id)arg1 ;
+(id)binaryStringEncoding;
+(id)hexStringEncoding;
+(id)rfc4648Base32StringEncoding;
+(id)rfc4648Base32HexStringEncoding;
+(id)crockfordBase32StringEncoding;
+(id)rfc4648Base64StringEncoding;
+(id)rfc4648Base64WebsafeStringEncoding;
-(void)addDecodeSynonyms:(id)arg1 ;
-(void)setPaddingChar:(char)arg1 ;
-(void)setDoPad:(BOOL)arg1 ;
-(id)encode:(id)arg1 ;
-(id)decode:(id)arg1 ;
-(void)ignoreCharacters:(id)arg1 ;
-(BOOL)doPad;
-(id)stringByDecoding:(id)arg1 ;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(id)encodeString:(id)arg1 ;
@end
