/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@interface FBOverflowingSegmentedComponent : CKComponent {

	CKTypedComponentAction<> _didSelectItemAction;

}
+(id)newWithItems:(id)arg1 maxBeforeOverflow:(unsigned long long)arg2 selectedIndex:(unsigned long long)arg3 size:(const CKComponentSize*)arg4 didSelectItemAction:(CKTypedComponentAction<>)arg5 options:(FBOverflowingSegmentedComponentOptions)arg6 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
