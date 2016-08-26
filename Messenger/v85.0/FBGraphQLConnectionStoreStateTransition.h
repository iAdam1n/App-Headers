/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLConnectionStoreState;

@interface FBGraphQLConnectionStoreStateTransition : NSObject {

	/*^block*/id _announcerBlock;
	FBGraphQLConnectionStoreState* _targetState;

}

@property (nonatomic,readonly) FBGraphQLConnectionStoreState * targetState;              //@synthesize targetState=_targetState - In the implementation block
+(id)stateTransitionsByFilteringState:(id)arg1 withEdgesPredicate:(/*^block*/id)arg2 deletionReason:(id)arg3 ;
+(id)transitionByDeletingChunksAtIndexes:(id)arg1 fromState:(id)arg2 ;
+(id)transitionByDeletingEdgesAtIndexPaths:(id)arg1 fromState:(id)arg2 deletionReason:(id)arg3 ;
-(id)initWithTargetState:(id)arg1 announcerBlock:(/*^block*/id)arg2 ;
-(void)announceTransitionUsingAnnouncer:(id)arg1 onBehalfOfStore:(id)arg2 fromOldState:(id)arg3 ;
-(FBGraphQLConnectionStoreState *)targetState;
@end
