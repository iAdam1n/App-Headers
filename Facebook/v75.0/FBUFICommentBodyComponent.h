/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUFICommentBodyComponentState, FBTextWithEntitiesComponent, FBRichTextActionController;

@interface FBUFICommentBodyComponent : CKCompositeComponent {

	FBUFICommentBodyComponentState* _state;
	FBTextWithEntitiesComponent* _messageTextComponent;
	FBRichTextActionController* _actionController;
	CKTypedComponentAction<> _didTapSeeMoreAction;

}
+(id)newWithComment:(const FBUFICommentBodyComponentGraphQL*)arg1 style:(FBUFICommentBodyComponentStyle)arg2 toolbox:(id)arg3 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)didTapTruncationString:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
@end

