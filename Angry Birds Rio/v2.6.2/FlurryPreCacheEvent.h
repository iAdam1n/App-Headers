/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FlurryPreCacheEvent : NSObject {

	BOOL _timed;
	NSString* _eventName;
	NSDictionary* _params;

}

@property (nonatomic,retain) NSString * eventName;               //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDictionary * params;              //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) BOOL timed;                         //@synthesize timed=_timed - In the implementation block
-(id)initWithEventName:(id)arg1 params:(id)arg2 timed:(BOOL)arg3 ;
-(void)setParams:(NSDictionary *)arg1 ;
-(void)setTimed:(BOOL)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(BOOL)timed;
-(NSDictionary *)params;
@end

