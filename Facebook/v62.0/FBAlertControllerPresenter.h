/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerAlertPresenter.h>

@protocol FBComposerAlertPresentationListener;
@class UIViewController, FBComposerAlert, UIAlertController, FBModalViewCoordinator, NSString;

@interface FBAlertControllerPresenter : NSObject <FBComposerAlertPresenter> {

	id<FBComposerAlertPresentationListener> _presentationListener;
	UIViewController* _presentingViewController;
	FBComposerAlert* _currentlyPresentedAlert;
	UIAlertController* _currentlyPresentedAlertController;
	FBModalViewCoordinator* _modalViewCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlert:(id)arg1 actionListener:(id)arg2 ;
-(id)_alertActionForAlertButton:(id)arg1 actionStyle:(long long)arg2 actionListener:(id)arg3 ;
-(void)_alertWasDismissed;
-(id)initWithPresentationListener:(id)arg1 presentingViewController:(id)arg2 modalViewCoordinator:(id)arg3 ;
@end
