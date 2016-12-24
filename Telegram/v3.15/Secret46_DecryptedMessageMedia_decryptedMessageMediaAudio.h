/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Secret46_DecryptedMessageMedia.h>

@class NSNumber, NSString, NSData;

@interface Secret46_DecryptedMessageMedia_decryptedMessageMediaAudio : Secret46_DecryptedMessageMedia {

	NSNumber* _duration;
	NSString* _mimeType;
	NSNumber* _size;
	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,retain) NSNumber * duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSNumber * size;                  //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * iv;                      //@synthesize iv=_iv - In the implementation block
-(NSData *)iv;
-(void)setIv:(NSData *)arg1 ;
-(id)init;
-(NSNumber *)size;
-(id)description;
-(NSNumber *)duration;
-(NSData *)key;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(NSString *)mimeType;
-(void)setKey:(NSData *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
@end
