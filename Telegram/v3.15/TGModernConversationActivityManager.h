/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface TGModernConversationActivityManager : NSObject {

	NSMutableArray* _activityList;
	NSString* _previousActivityType;
	/*^block*/id _sendActivityUpdate;

}

@property (nonatomic,copy) id sendActivityUpdate;              //@synthesize sendActivityUpdate=_sendActivityUpdate - In the implementation block
+(id)activityManagerQueue;
-(void)setSendActivityUpdate:(id)arg1 ;
-(id)_topActivity;
-(id)_addActivityWithType:(id)arg1 priority:(long long)arg2 timeout:(double)arg3 ;
-(void)removeActivity:(id)arg1 ;
-(void)tickActivity:(id)arg1 ;
-(void)_activityUpdated;
-(id)addActivityWithType:(id)arg1 priority:(long long)arg2 ;
-(void)addActivityWithType:(id)arg1 priority:(long long)arg2 timeout:(double)arg3 ;
-(void)removeActivityWithType:(id)arg1 ;
-(id)sendActivityUpdate;
-(id)init;
@end
