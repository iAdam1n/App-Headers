/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/Tutorial.h>

@class NSArray;

@interface LevelTutorial : Tutorial {

	NSArray* levelStartSteps;
	NSArray* preGameSteps;

}

@property (nonatomic,retain) NSArray * preGameSteps; 
@property (nonatomic,retain) NSArray * levelStartSteps; 
+(id)mutableDictionaryTypes;
+(void)load;
-(NSArray *)levelStartSteps;
-(NSArray *)preGameSteps;
-(long long)numSteps;
-(void)setLevelStartSteps:(NSArray *)arg1 ;
-(void)setPreGameSteps:(NSArray *)arg1 ;
-(void)dealloc;
@end

