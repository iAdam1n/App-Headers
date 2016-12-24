/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCCallTabViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNModalPresentation, FBProvider, FBWebRTCCallTabViewControllerPresenterDelegate;
@class FBWebRTCCallTabViewController, NSString;

@interface FBWebRTCCallTabViewControllerPresenter : NSObject <FBWebRTCCallTabViewControllerDelegate, FBViewerContextClassProvidable> {

	id<MNModalPresentation> _modalPresenter;
	id<FBProvider> _webRTCCallTabViewControllerProvider;
	FBWebRTCCallTabViewController* _webRTCCallTabViewController;
	id<FBWebRTCCallTabViewControllerPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallTabViewControllerPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldShowSearchBarInNavigationBar;
-(BOOL)shouldShowCloseNavigationItemLeftBarButtonItem;
-(void)callTabViewControllerDidRequestClose:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithModalPresenter:(id)arg1 webRTCCallTabViewControllerProvider:(id)arg2 ;
-(void)_callsTabPresenterDidDismiss;
-(void)presentWebRTCCallTabViewController;
-(void)setDelegate:(id<FBWebRTCCallTabViewControllerPresenterDelegate>)arg1 ;
-(id<FBWebRTCCallTabViewControllerPresenterDelegate>)delegate;
@end
