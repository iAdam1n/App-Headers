/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBNativeArticleInteractionRegistry : NSObject {

	NSMutableDictionary* _intentTargetDict;
	NSMutableDictionary* _stateTransitionDict;

}
-(BOOL)shouldTriggerIntentForGestureInDirection:(long long)arg1 atElementWithID:(id)arg2 ;
-(BOOL)shouldPerformTransitionForGestureInDirection:(long long)arg1 atBlockWithID:(id)arg2 ;
-(id)intentTargetForGestureInDirection:(long long)arg1 atElementWithID:(id)arg2 ;
-(id)_transitionPresentationAttributesByGestureForBlockWithID:(id)arg1 ;
-(id)eligibleTransitionPresentationAttributesForGestureInDirection:(long long)arg1 atBlockWithID:(id)arg2 ;
-(void)addTransitionToPresentationAttributes:(id)arg1 forGestureInDirection:(long long)arg2 atBlockWithID:(id)arg3 ;
-(void)addIntentTarget:(id)arg1 forGestureInDirection:(long long)arg2 atElementWithID:(id)arg3 ;
-(BOOL)transitionExistsAtBlockWithID:(id)arg1 ;
-(void)addCollapsePanTransitionAtBlockWithID:(id)arg1 ;
-(void)addExpansionToggleTapTransitionAtBlockWithID:(id)arg1 ;
-(id)init;
@end
