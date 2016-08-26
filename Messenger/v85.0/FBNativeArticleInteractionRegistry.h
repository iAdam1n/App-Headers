/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBNativeArticleInteractionRegistry : NSObject {

	NSMutableDictionary* _intentTargetDict;
	NSMutableDictionary* _stateTransitionDict;

}
-(BOOL)shouldTriggerIntentForGestureInDirection:(long long)arg1 atElementWithID:(id)arg2 ;
-(id)intentTargetForGestureInDirection:(long long)arg1 atElementWithID:(id)arg2 ;
-(id)_transitionPresentationAttributesByGestureForBlockWithID:(id)arg1 ;
-(void)addTransitionToPresentationAttributes:(id)arg1 forGestureInDirection:(long long)arg2 atBlockWithID:(id)arg3 ;
-(void)addIntentTarget:(id)arg1 forGestureInDirection:(long long)arg2 atElementWithID:(id)arg3 ;
-(BOOL)transitionExistsAtBlockWithID:(id)arg1 ;
-(void)addCollapsePanTransitionAtBlockWithID:(id)arg1 ;
-(void)addExpansionToggleTapTransitionAtBlockWithID:(id)arg1 ;
-(BOOL)shouldPerformTransitionForGestureInDirection:(long long)arg1 atBlockWithID:(id)arg2 ;
-(id)eligibleTransitionPresentationAttributesForGestureInDirection:(long long)arg1 atBlockWithID:(id)arg2 ;
-(id)init;
@end
