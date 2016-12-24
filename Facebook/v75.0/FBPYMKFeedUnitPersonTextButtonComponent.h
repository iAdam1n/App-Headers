/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class NSString, FBMemPerson, FBFeedToolbox, FBAnalyticsInfo;

@interface FBPYMKFeedUnitPersonTextButtonComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	NSString* _unitCacheId;
	FBMemPerson* _person;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;
	CKTypedComponentAction<> _addFriendAction;
	CKTypedComponentAction<> _xoutAction;

}
+(id)newWithPerson:(id)arg1 socialContextText:(id)arg2 tracking:(id)arg3 unitCacheId:(id)arg4 addFriendAction:(CKTypedComponentAction<>)arg5 xoutAction:(CKTypedComponentAction<>)arg6 toolbox:(id)arg7 ;
-(void)becameFullyVisible;
-(void)didTapCardBackground;
-(void)didTapAddFriend:(id)arg1 person:(id)arg2 ;
-(void)didTapCancelRequestButton;
-(void)didTapXout:(id)arg1 person:(id)arg2 ;
@end
