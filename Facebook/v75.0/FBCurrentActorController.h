/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService;
@class BFTask, FBGraphQLConsistentLookasideCache;

@interface FBCurrentActorController : NSObject {

	BFTask* _task;
	id<FBGraphQLFragmentService> _graphQLFragmentService;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;

}

@property (retain) BFTask * task;                                                                         //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLFragmentService> graphQLFragmentService;                       //@synthesize graphQLFragmentService=_graphQLFragmentService - In the implementation block
@property (nonatomic,readonly) FBGraphQLConsistentLookasideCache * consistentLookasideCache;              //@synthesize consistentLookasideCache=_consistentLookasideCache - In the implementation block
-(FBGraphQLConsistentLookasideCache *)consistentLookasideCache;
-(id<FBGraphQLFragmentService>)graphQLFragmentService;
-(void)_actorDidUpdate:(id)arg1 ;
-(id)initWithGraphQLFragmentService:(id)arg1 consistentLookasideCache:(id)arg2 ;
-(id)getCurrentActor;
-(BFTask *)task;
-(void)setTask:(BFTask *)arg1 ;
@end
