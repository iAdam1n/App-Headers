/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
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

