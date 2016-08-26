/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionCoordinating.h>

@protocol MNCompositeViewModelLoading, MNViewModelUpdateBackfeeding, OS_dispatch_queue;
@class NSString, MNViewModelSubscriptionAttributes, NSDictionary, MNViewModelCache, NSObject, MNCompositeViewModelSubscriptionStore;

@interface MNCompositeViewModelSubscriptionCoordinator : NSObject <MNViewModelSubscriptionCoordinating> {

	NSString* _kind;
	MNViewModelSubscriptionAttributes* _attributes;
	NSDictionary* _kindToChildCoordinatorMap;
	/*^block*/id _childKeyMapper;
	id<MNCompositeViewModelLoading> _loader;
	id<MNViewModelUpdateBackfeeding> _backfeeder;
	MNViewModelCache* _cache;
	NSObject*<OS_dispatch_queue> _queue;
	MNCompositeViewModelSubscriptionStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelSubscription:(id)arg1 ;
-(id)_conciseDescription;
-(void)_startSubscriptionsInChildCoordinatorsForParentSubscriptionIfNecessary:(id)arg1 ;
-(void)_notifySubscribersWithSubscriptionIds:(id)arg1 ofViewModelElement:(id)arg2 fromCache:(BOOL)arg3 ;
-(void)startSubscription:(id)arg1 forSubscriptionId:(id)arg2 ;
-(void)_cancelSubscriptionsInChildCoordinatorsForParentSubscriptionIfNecessary:(id)arg1 ;
-(void)_cancelSubscriptionInAnyChildCoordinatorIfNecessary:(id)arg1 ;
-(id)_childSubscriptionKeyForKind:(id)arg1 parentKey:(id)arg2 ;
-(void)_handleSubscriptionUpdate:(id)arg1 forChildElementKey:(id)arg2 parentElementKey:(id)arg3 ;
-(void)_handleNewChildViewModel:(id)arg1 forChildElementKey:(id)arg2 parentElementKey:(id)arg3 ;
-(void)_handleError:(id)arg1 forChildElementKey:(id)arg2 parentElementKey:(id)arg3 ;
-(void)_handleLongOperationStatus:(unsigned long long)arg1 forChildElementKey:(id)arg2 parentElementKey:(id)arg3 ;
-(BOOL)_areAllCriticalChildElementsPresentForParentViewModelElementKey:(id)arg1 ;
-(void)_handleLoadedCompositeViewModel:(id)arg1 forKey:(id)arg2 ;
-(void)_notifySubscribersWithSubscriptionIds:(id)arg1 ofError:(id)arg2 ;
-(void)_notifySubscriberWithSubscriptionIds:(id)arg1 ofLongOperationStatus:(unsigned long long)arg2 ;
-(id)_subscriptionIdToSubscriptionMap:(id)arg1 ;
-(id)_subscriptionsForSubscriptionIds:(id)arg1 ;
-(void)cancelAllSubscriptions;
-(id)initWithKind:(id)arg1 importance:(long long)arg2 childCoordinators:(id)arg3 childKeyMapper:(/*^block*/id)arg4 loader:(id)arg5 backfeeder:(id)arg6 cache:(id)arg7 queue:(id)arg8 ;
-(id)_childElementKeysForParentViewModelElementKey:(id)arg1 ;
-(NSString *)description;
-(id)attributes;
-(id)kind;
-(id)queue;
@end
