/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class FBReactionContext, FBMemPage, FBMemModelObject;

@interface FBReactionPYMLScrollEntityComponent : CKCompositeComponent {

	unsigned long long _index;
	FBReactionContext* _reactionContext;
	FBMemPage* _page;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	CKTypedComponentAction<> _didLikeAPageAction;

}
+(id)newWithReactionUnit:(id)arg1 singleAttachment:(id)arg2 index:(unsigned long long)arg3 didLikeAPageAction:(CKTypedComponentAction<>)arg4 reactionContext:(id)arg5 ;
-(void)didTapOnLikeButton:(id)arg1 currentPageLikeStatus:(id)arg2 ;
-(void)didTapOnPageCard:(id)arg1 ;
@end
