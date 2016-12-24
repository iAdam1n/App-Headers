/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBComposerAlertPresenter.h>

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
