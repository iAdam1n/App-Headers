/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBProfileIntroCardSelfItemsComponentToolbox;
@class FBMemTimelineContextListItem, FBMemPerson;

@interface FBProfileIntroCardSelfItemsComponent : CKCompositeComponent {

	FBMemTimelineContextListItem* _newContextItem;
	id<FBProfileIntroCardSelfItemsComponentToolbox> _toolbox;
	FBMemPerson* _targetPerson;

}
+(id)newWithTitle:(id)arg1 targetPerson:(id)arg2 contextListItem:(id)arg3 shouldShowBottomLine:(BOOL)arg4 textColor:(id)arg5 toolbox:(id)arg6 ;
@end
