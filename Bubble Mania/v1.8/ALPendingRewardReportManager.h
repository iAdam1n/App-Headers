/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSObject;

@interface ALPendingRewardReportManager : NSObject {

	NSMutableDictionary* pendingRewardParameters;
	NSObject* managerLock;
	NSMutableDictionary* pendingRewardResults;

}

@property (nonatomic,retain) NSMutableDictionary * pendingRewardParameters; 
@property (nonatomic,retain) NSMutableDictionary * pendingRewardResults; 
@property (retain) NSObject * managerLock; 
+(id)sharedManager;
-(void)saveRewardResult:(id)arg1 forAd:(id)arg2 ;
-(void)saveParameters:(id)arg1 forAd:(id)arg2 ;
-(id)removeSavedRewardResultForAd:(id)arg1 ;
-(id)removeSavedParametersForAd:(id)arg1 ;
-(void)setManagerLock:(NSObject *)arg1 ;
-(void)setPendingRewardParameters:(NSMutableDictionary *)arg1 ;
-(void)setPendingRewardResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingRewardParameters;
-(NSObject *)managerLock;
-(NSMutableDictionary *)pendingRewardResults;
-(id)init;
@end

