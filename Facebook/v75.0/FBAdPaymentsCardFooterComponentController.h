/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdPaymentsCardFormFooterViewDelegate.h>
#import <Facebook/FBAdPaymentsMountComponentController.h>

@protocol FBAdPaymentsFlowContext, FBNavigationCoordinator, FBAdPaymentsCardFooterComponentControllerDelegate;
@class NSString, FBUserSession, FBAdPaymentsCardFormFooterView;

@interface FBAdPaymentsCardFooterComponentController : NSObject <FBAdPaymentsCardFormFooterViewDelegate, FBAdPaymentsMountComponentController> {

	FBUserSession* _session;
	id<FBAdPaymentsFlowContext> _flowContext;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSString* _componentIdentifier;
	id<FBAdPaymentsCardFooterComponentControllerDelegate> _delegate;
	FBAdPaymentsCardFormFooterView* _footerView;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsCardFooterComponentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsCardFormFooterView * footerView;                                      //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * componentIdentifier;                                                       //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
-(id)componentView;
-(NSString *)componentIdentifier;
-(void)cardFooterView:(id)arg1 didActionButtonClicked:(id)arg2 ;
-(void)cardFooterViewDidLearnMoreClicked:(id)arg1 withURL:(id)arg2 ;
-(BOOL)resignFirstRespodner;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 componentIdentifier:(id)arg2 flowContext:(id)arg3 navigationCoorinator:(id)arg4 ;
-(void)setDelegate:(id<FBAdPaymentsCardFooterComponentControllerDelegate>)arg1 ;
-(id<FBAdPaymentsCardFooterComponentControllerDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(FBAdPaymentsCardFormFooterView *)footerView;
@end
