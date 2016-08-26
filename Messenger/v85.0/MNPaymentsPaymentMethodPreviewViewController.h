/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBPaymentsPaymentMethod, FBPaymentsActorFetching, MNPaymentsPaymentMethodPreviewViewControllerDelegate;
@class NSString, MNPaymentsPaymentMethodPreviewView;

@interface MNPaymentsPaymentMethodPreviewViewController : UIViewController {

	NSString* _userId;
	id<FBPaymentsPaymentMethod> _paymentMethod;
	id<FBPaymentsActorFetching> _actorFetcher;
	double _previewWidth;
	MNPaymentsPaymentMethodPreviewView* _previewView;
	id<MNPaymentsPaymentMethodPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsPaymentMethodPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_loadUserFullName;
-(void)_didTapUpdateCard;
-(void)_didTapRemoveCard;
-(void)_updateFullNameWithLoadedName:(id)arg1 ;
-(void)_setDisplayNameTo:(id)arg1 ;
-(id)initWithUserId:(id)arg1 actorFetcher:(id)arg2 paymentMethod:(id)arg3 previewWidth:(double)arg4 ;
-(void)setDelegate:(id<MNPaymentsPaymentMethodPreviewViewControllerDelegate>)arg1 ;
-(id<MNPaymentsPaymentMethodPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(id)previewActionItems;
@end
