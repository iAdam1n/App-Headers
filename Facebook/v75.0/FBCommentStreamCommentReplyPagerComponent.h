/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemComment;

@interface FBCommentStreamCommentReplyPagerComponent : CKCompositeComponent {

	FBMemComment* _comment;
	CKTypedComponentAction<> _pagerTappedAction;

}
+(id)newWithComment:(id)arg1 pagerCount:(unsigned long long)arg2 layoutDefinition:(id)arg3 pagerTappedAction:(CKTypedComponentAction<>)arg4 cellTapAction:(CKTypedComponentAction<>)arg5 dimmedTapAction:(CKTypedComponentAction<>)arg6 type:(unsigned long long)arg7 options:(FBProfileScrollingBehavior)arg8 useInlineReplyExpansionStyling:(BOOL)arg9 useNewPagerText:(BOOL)arg10 session:(id)arg11 ;
-(void)didTapPager:(id)arg1 ;
@end
