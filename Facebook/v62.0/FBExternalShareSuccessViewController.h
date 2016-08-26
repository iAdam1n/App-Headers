/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBServiceHelperProtocol;
@class NSURL, UIView, FBUserSession;

@interface FBExternalShareSuccessViewController : UIViewController {

	id<FBServiceHelperProtocol> _serviceHelper;
	NSURL* _postURL;
	UIView* _popupView;
	FBUserSession* _session;

}
-(id)analyticsModule;
-(id)initWithSession:(id)arg1 serviceHelper:(id)arg2 postURL:(id)arg3 ;
-(id)_setUpTextViewWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 yOffset:(double)arg4 ;
-(id)_setUpButtonWithText:(id)arg1 xOffset:(long long)arg2 yOffset:(long long)arg3 primary:(BOOL)arg4 ;
-(void)_viewPost:(id)arg1 ;
-(void)_dismissPopup:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
