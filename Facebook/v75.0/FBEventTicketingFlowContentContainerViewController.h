/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsExpandableItem.h>
#import <Facebook/FBEventTicketInfoFetcherDelegate.h>
#import <Facebook/FBEventTicketingImageViewerPresenter.h>
#import <Facebook/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <Facebook/FBEventBuyTicketRegistrationViewControllerDelegate.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBEventTicketingSectionalSeatingCheckoutFlowLauncher.h>
#import <Facebook/FBEventTicketingFlowControlling.h>

@protocol FBEventTicketingFlowControllingDelegate, FBPaymentsExpandableViewControllerExpandingDelegate;
@class NSString, FBUserSession, FBEventAnalyticTracker, FBEventTicketInfoFetcher, FBEventTicketingPaymentFlowLauncher, FBMemEventRegistrationSetting, FBEventTicketingSavedRegistrationData, FBMemEvent;

@interface FBEventTicketingFlowContentContainerViewController : UIViewController <FBPaymentsExpandableItem, FBEventTicketInfoFetcherDelegate, FBEventTicketingImageViewerPresenter, FBPaymentsExpandableViewControllerExpandingDelegate, FBEventBuyTicketRegistrationViewControllerDelegate, FBPaymentsNavigationDelegate, FBEventTicketingSectionalSeatingCheckoutFlowLauncher, FBEventTicketingFlowControlling> {

	NSString* _eventId;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	FBEventTicketingFlowRenderingOptions _renderingOptions;
	FBEventTicketInfoFetcher* _ticketInfoFetcher;
	UIViewController* _contentViewController;
	FBEventTicketingPaymentFlowLauncher* _paymentsFlowLauncher;
	FBMemEventRegistrationSetting* _registrationSettings;
	FBEventTicketingSavedRegistrationData* _savedRegistrationData;
	FBMemEvent* _event;
	id<FBEventTicketingFlowControllingDelegate> _delegate;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventTicketingFlowControllingDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)newNavigationController;
-(void)presentImageViewerWithImageURL:(id)arg1 ;
-(void)startCheckoutFlowWithModel:(id)arg1 ;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)didFinishRegistrationWithFilledData:(id)arg1 ;
-(void)didSelectCancelButton;
-(void)fetchTicketInfo;
-(void)notifyExpandingDelegate;
-(void)didFetchTicketInfo:(id)arg1 ;
-(void)didFailTicketInfoFetch;
-(id)initWithEventId:(id)arg1 session:(id)arg2 tracker:(id)arg3 renderingOptions:(const FBEventTicketingFlowRenderingOptions*)arg4 ;
-(void)setDelegate:(id<FBEventTicketingFlowControllingDelegate>)arg1 ;
-(id<FBEventTicketingFlowControllingDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)viewControllerForPresenting;
@end

