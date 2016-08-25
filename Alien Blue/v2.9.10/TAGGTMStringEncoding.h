/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TAGGTMStringEncoding : NSObject {

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
-(id)encodeString:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithString:(id)arg1 ;
@end

