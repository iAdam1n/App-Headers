/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Secret46_DocumentAttribute.h>

@class NSNumber;

@interface Secret46_DocumentAttribute_documentAttributeVideo : Secret46_DocumentAttribute {

	NSNumber* _duration;
	NSNumber* _w;
	NSNumber* _h;

}

@property (nonatomic,retain) NSNumber * duration;              //@synthesize duration=_duration - In the implementation block
@property (w,nonatomic,retain) NSNumber * w;                   //@synthesize w=_w - In the implementation block
@property (h,nonatomic,retain) NSNumber * h;                   //@synthesize h=_h - In the implementation block
-(id)init;
-(id)description;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)w;
-(NSNumber *)h;
-(void)setW:(NSNumber *)arg1 ;
-(void)setH:(NSNumber *)arg1 ;
@end
