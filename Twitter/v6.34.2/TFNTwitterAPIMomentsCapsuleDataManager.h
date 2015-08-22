/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentsCapsuleDataManager.h>

@protocol TFNTwitterMomentCapsuleFetcher, TFNTwitterMomentSubscriber, TFNTwitterMomentCapsulePivotListFetcher;
@class TFNTwitterAccount, TFNTwitterMomentCapsule, NSPointerArray, NSString;

@interface TFNTwitterAPIMomentsCapsuleDataManager : NSObject <TFNTwitterMomentsCapsuleDataManager> {

	BOOL _shouldFetchPivotList;
	TFNTwitterAccount* _account;
	id<TFNTwitterMomentCapsuleFetcher> _capsuleFetcher;
	TFNTwitterMomentCapsule* _capsule;
	id<TFNTwitterMomentCapsuleFetcher> _hydrateCapsuleFetcher;
	id<TFNTwitterMomentSubscriber> _subscriber;
	NSPointerArray* _capsuleListeners;
	id<TFNTwitterMomentCapsulePivotListFetcher> _pivotListFetcher;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentCapsuleFetcher> capsuleFetcher;                         //@synthesize capsuleFetcher=_capsuleFetcher - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentCapsule * capsule;                                         //@synthesize capsule=_capsule - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentCapsuleFetcher> hydrateCapsuleFetcher;                  //@synthesize hydrateCapsuleFetcher=_hydrateCapsuleFetcher - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentSubscriber> subscriber;                                 //@synthesize subscriber=_subscriber - In the implementation block
@property (nonatomic,retain) NSPointerArray * capsuleListeners;                                         //@synthesize capsuleListeners=_capsuleListeners - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentCapsulePivotListFetcher> pivotListFetcher;              //@synthesize pivotListFetcher=_pivotListFetcher - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchPivotList;                                                 //@synthesize shouldFetchPivotList=_shouldFetchPivotList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCapsuleListener:(id)arg1 ;
-(TFNTwitterMomentCapsule *)capsule;
-(void)updateMomentSubscription;
-(id)initWithCapsule:(id)arg1 account:(id)arg2 ;
-(void)setCapsule:(TFNTwitterMomentCapsule *)arg1 ;
-(id)initWithCapsuleFetcher:(id)arg1 account:(id)arg2 ;
-(void)fetchCapsulePivotList;
-(void)removeCapsuleListener:(id)arg1 ;
-(void)fetchCapsule;
-(void)hydrateMomentCapsule;
-(NSPointerArray *)capsuleListeners;
-(void)setCapsuleListeners:(NSPointerArray *)arg1 ;
-(id<TFNTwitterMomentCapsuleFetcher>)capsuleFetcher;
-(void)setHydrateCapsuleFetcher:(id<TFNTwitterMomentCapsuleFetcher>)arg1 ;
-(BOOL)shouldFetchPivotList;
-(id<TFNTwitterMomentCapsuleFetcher>)hydrateCapsuleFetcher;
-(void)mutateMoment:(id)arg1 subscribed:(BOOL)arg2 ;
-(void)_handleSubscriptionResponseWithSuccess:(BOOL)arg1 error:(id)arg2 moment:(id)arg3 originalState:(BOOL)arg4 ;
-(id<TFNTwitterMomentCapsulePivotListFetcher>)pivotListFetcher;
-(void)setShouldFetchPivotList:(BOOL)arg1 ;
-(void)setPivotListFetcher:(id<TFNTwitterMomentCapsulePivotListFetcher>)arg1 ;
-(void)setCapsuleFetcher:(id<TFNTwitterMomentCapsuleFetcher>)arg1 ;
-(id)initWithCapsuleID:(id)arg1 account:(id)arg2 ;
-(id<TFNTwitterMomentSubscriber>)subscriber;
-(id)init;
-(void)setSubscriber:(id<TFNTwitterMomentSubscriber>)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
