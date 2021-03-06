/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Secret46_DecryptedMessageMedia.h>

@class NSData, NSNumber, NSString;

@interface Secret46_DecryptedMessageMedia_decryptedMessageMediaPhoto : Secret46_DecryptedMessageMedia {

	NSData* _thumb;
	NSNumber* _thumbW;
	NSNumber* _thumbH;
	NSNumber* _w;
	NSNumber* _h;
	NSNumber* _size;
	NSData* _key;
	NSData* _iv;
	NSString* _caption;

}

@property (nonatomic,retain) NSData * thumb;                  //@synthesize thumb=_thumb - In the implementation block
@property (nonatomic,retain) NSNumber * thumbW;               //@synthesize thumbW=_thumbW - In the implementation block
@property (nonatomic,retain) NSNumber * thumbH;               //@synthesize thumbH=_thumbH - In the implementation block
@property (w,nonatomic,retain) NSNumber * w;                  //@synthesize w=_w - In the implementation block
@property (h,nonatomic,retain) NSNumber * h;                  //@synthesize h=_h - In the implementation block
@property (nonatomic,retain) NSNumber * size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * iv;                     //@synthesize iv=_iv - In the implementation block
@property (nonatomic,retain) NSString * caption;              //@synthesize caption=_caption - In the implementation block
-(NSData *)iv;
-(NSNumber *)thumbW;
-(NSNumber *)thumbH;
-(void)setIv:(NSData *)arg1 ;
-(void)setThumbW:(NSNumber *)arg1 ;
-(void)setThumbH:(NSNumber *)arg1 ;
-(NSNumber *)size;
-(id)init;
-(id)description;
-(NSData *)key;
-(void)setSize:(NSNumber *)arg1 ;
-(NSData *)thumb;
-(void)setThumb:(NSData *)arg1 ;
-(NSNumber *)w;
-(NSNumber *)h;
-(void)setW:(NSNumber *)arg1 ;
-(void)setH:(NSNumber *)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
@end

