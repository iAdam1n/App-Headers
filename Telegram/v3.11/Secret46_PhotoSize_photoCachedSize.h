/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Secret46_PhotoSize.h>

@class Secret46_FileLocation, NSNumber, NSData;

@interface Secret46_PhotoSize_photoCachedSize : Secret46_PhotoSize {

	Secret46_FileLocation* _location;
	NSNumber* _w;
	NSNumber* _h;
	NSData* _bytes;

}

@property (nonatomic,retain) Secret46_FileLocation * location;              //@synthesize location=_location - In the implementation block
@property (w,nonatomic,retain) NSNumber * w;                                //@synthesize w=_w - In the implementation block
@property (h,nonatomic,retain) NSNumber * h;                                //@synthesize h=_h - In the implementation block
@property (nonatomic,retain) NSData * bytes;                                //@synthesize bytes=_bytes - In the implementation block
-(void)setBytes:(NSData *)arg1 ;
-(id)init;
-(id)description;
-(NSData *)bytes;
-(Secret46_FileLocation *)location;
-(NSNumber *)w;
-(NSNumber *)h;
-(void)setW:(NSNumber *)arg1 ;
-(void)setH:(NSNumber *)arg1 ;
-(void)setLocation:(Secret46_FileLocation *)arg1 ;
@end

