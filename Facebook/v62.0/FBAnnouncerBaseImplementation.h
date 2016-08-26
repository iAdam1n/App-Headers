/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBAnnouncerBaseImplementation : NSObject {

	NSMutableArray* _subscriptions;
	BOOL _isAtomic;
	/*function pointer*/void* _executeWork;
	/*^block*/id _onFirstSubscriptionAdded;
	/*^block*/id _onLastSubscriptionRemoved;

}
-(void)addSubscription:(id)arg1 ;
-(void)removeSubscription:(id)arg1 ;
-(id)initAtomic:(BOOL)arg1 firstSubscriptionBlock:(/*^block*/id)arg2 lastSubscriptionBlock:(/*^block*/id)arg3 ;
-(void)enumerateSubscriptionsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
@end
