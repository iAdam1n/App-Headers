/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBComposerAlertPresenter.h>

@protocol FBComposerAlertPresentationListener;
@class FBComposerAlert, UIAlertView, NSString;

@interface FBSystemAlertPresenter : NSObject <UIAlertViewDelegate, FBComposerAlertPresenter> {

	id _currentActionListener;
	FBComposerAlert* _currentlyPresentedAlert;
	UIAlertView* _currentlyPresentedAlertView;
	id<FBComposerAlertPresentationListener> _presentationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlert:(id)arg1 actionListener:(id)arg2 ;
-(id)initWithPresentationListener:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
