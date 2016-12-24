/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedMobilePageAdminPanelItemFieldsProtocol;
@class FBMemModelObject, FBAnalyticsInfo;

@interface FBHPPDetailedPagePanelItemCardContentComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedMobilePageAdminPanelItemFieldsProtocol> _item;
	CKTypedComponentAction<> _buttonTapAction;
	CKTypedComponentAction<> _cardTapAction;
	FBAnalyticsInfo* _analyticsInfo;

}
+(id)newWithItem:(id)arg1 contentBodyComponent:(id)arg2 options:(const FBHPPDetailedPagePanelItemCardContentComponentOptions*)arg3 analyticsInfo:(id)arg4 actionText:(id)arg5 buttonTapAction:(CKTypedComponentAction<>)arg6 cardTapAction:(CKTypedComponentAction<>)arg7 glyphName:(unsigned long long)arg8 badgeCount:(long long)arg9 toolbox:(id)arg10 ;
-(void)didTapItemCard:(id)arg1 ;
-(void)didTapItemButton:(id)arg1 ;
@end
