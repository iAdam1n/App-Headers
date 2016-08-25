/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@class NSMutableArray;

@interface StartLevelChangeEvent : ChangeEvent {

	BOOL playedForFree;
	int islandNumber;
	NSMutableArray* items;
	long long levelNumber;

}

@property (assign,nonatomic) int islandNumber; 
@property (assign,nonatomic) long long levelNumber; 
@property (nonatomic,retain) NSMutableArray * items; 
@property (assign,nonatomic) BOOL playedForFree; 
+(id)mutableDictionaryTypes;
+(void)load;
-(void)setIslandNumber:(int)arg1 ;
-(void)setLevelNumber:(long long)arg1 ;
-(void)setPlayedForFree:(BOOL)arg1 ;
-(int)islandNumber;
-(long long)levelNumber;
-(BOOL)playedForFree;
-(id)csv;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
@end

