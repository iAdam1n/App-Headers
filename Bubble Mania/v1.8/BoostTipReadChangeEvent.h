/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@class NSString;

@interface BoostTipReadChangeEvent : ChangeEvent {

	int powerUpType;
	NSString* gameHashId;

}

@property (nonatomic,copy) NSString * gameHashId; 
@property (assign,nonatomic) int powerUpType; 
+(id)mutableDictionaryTypes;
+(void)load;
-(id)csv;
-(NSString *)gameHashId;
-(void)setGameHashId:(NSString *)arg1 ;
-(int)powerUpType;
-(void)setPowerUpType:(int)arg1 ;
-(void)dealloc;
@end

