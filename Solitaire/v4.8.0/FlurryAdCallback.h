/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface FlurryAdCallback : NSObject {

	NSString* _event;
	NSMutableArray* _actions;

}

@property (nonatomic,retain) NSString * event;                      //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableArray *)actions;
-(NSString *)event;
-(void)setEvent:(NSString *)arg1 ;
@end

