/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNLocationPickerViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation, FBProvider, MNLocationPickerPresenterDelegate;
@class MNLocationPickerViewController, FBLazyCreator, UIAlertView, FBMLocationUpdateRequest, NSString;

@interface MNLocationPickerPresenter : NSObject <MNLocationPickerViewControllerDelegate, UIAlertViewDelegate, FBClassProvidable> {

	MNLocationPickerViewController* _locationPickerViewController;
	id<MNModalPresentation> _navigationCoordinator;
	id<FBProvider> _locationPickerViewControllerProvider;
	FBLazyCreator* _locationRequestHandlerCreator;
	UIAlertView* _alertView;
	FBMLocationUpdateRequest* _locationUpdateRequest;
	id<MNLocationPickerPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentLocationPicker;
-(void)_cancelPendingLocationUpdateRequest;
-(void)_requestLocationUpdate;
-(void)_dismissLocationPickerViewController;
-(id)_locationPickerViewController;
-(void)_presentLocationPickerViewController:(id)arg1 ;
-(void)_userDidDenyLocationPermission;
-(void)_showAlertDialogToEnableLocationServices;
-(void)_setAlertView:(id)arg1 ;
-(void)locationPickerViewController:(id)arg1 didSendWithLocationAttachmentData:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNLocationPickerPresenterDelegate>)arg1 ;
-(id<MNLocationPickerPresenterDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

