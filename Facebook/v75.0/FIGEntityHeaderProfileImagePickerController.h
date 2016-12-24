/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaPickerViewControllerDelegate.h>
#import <Facebook/FBProfileAppleMediaPickerDelegate.h>

@protocol FIGEntityHeaderProfileImagePickerControllerDelegate;
@class FIGEntityHeaderProfileImageComponent, FBMediaPickerViewController, FBProfileAppleMediaPickerController, NSString;

@interface FIGEntityHeaderProfileImagePickerController : NSObject <FBMediaPickerViewControllerDelegate, FBProfileAppleMediaPickerDelegate> {

	FIGEntityHeaderProfileImageComponent* _component;
	FBMediaPickerViewController* _pickerViewController;
	FBProfileAppleMediaPickerController* _applePickerViewController;
	id<FIGEntityHeaderProfileImagePickerControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIGEntityHeaderProfileImagePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(void)mediaPicker:(id)arg1 openURL:(id)arg2 ;
-(id)initWithComponent:(id)arg1 ;
-(void)showPicker;
-(void)_dismissApplePicker;
-(void)appleMediaPickerControllerDidCancel:(id)arg1 ;
-(void)appleMediaPickerController:(id)arg1 didChooseImage:(id)arg2 ;
-(void)showCamera;
-(void)setDelegate:(id<FIGEntityHeaderProfileImagePickerControllerDelegate>)arg1 ;
-(id<FIGEntityHeaderProfileImagePickerControllerDelegate>)delegate;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)_dismissPicker;
@end
