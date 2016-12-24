/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthCompositeTransition.h>

@class UIView;

@interface FBDBLUserChooserToUsernamePasswordTransition : FBAuthCompositeTransition {

	BOOL _transactionComplete;
	BOOL _headerComplete;
	BOOL _contentExitComplete;
	BOOL _contentEnterComplete;
	UIView* _userChooserHeader;
	UIView* _userPassHeader;
	UIView* _userChooserContent;
	UIView* _userPassContent;
	UIView* _userChooserFooter;
	UIView* _userPassFooter;
	double _userChooserOffScreenX;
	double _userChooserOnScreenX;
	double _userPassOffScreenX;
	double _userPassOnScreenX;

}
-(void)layoutCompositeView:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
@end
