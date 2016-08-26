/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBEventAnalyticTrackerNode;

@interface FBEventAnalyticTracker : NSObject {

	FBEventAnalyticTrackerNode* _tail;

}

@property (nonatomic,retain) FBEventAnalyticTrackerNode * tail;              //@synthesize tail=_tail - In the implementation block
+(id)trackerWithRootContext:(id)arg1 ;
-(id)newTrackerByAppendingContext:(id)arg1 ;
-(id)getSessionIdForPosition:(long long)arg1 ;
-(long long)getSurfaceForPosition:(long long)arg1 ;
-(long long)getMechanismForPosition:(long long)arg1 ;
-(id)rawSurfaceForPosition:(long long)arg1 ;
-(id)getTrackingCodesForPosition:(long long)arg1 ;
-(id)rawMechanismForPosition:(long long)arg1 ;
-(id)initWithRootContext:(id)arg1 ;
-(id)_nodeForPosition:(long long)arg1 ;
-(id)_getSurfaceNode:(id)arg1 ;
-(id)_getTrackingCodesForNode:(id)arg1 ;
-(id)_getSessionIdForNode:(id)arg1 ;
-(id)_getReferringSurfaceNode:(id)arg1 ;
-(id)description;
-(FBEventAnalyticTrackerNode *)tail;
-(void)setTail:(FBEventAnalyticTrackerNode *)arg1 ;
@end
