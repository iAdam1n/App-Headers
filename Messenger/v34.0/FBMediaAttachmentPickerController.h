/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <Messenger/FBMediaPickerViewControllerDelegate.h>
#import <Messenger/FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate.h>

@protocol FBMediaAttachmentPickerControllerDelegate;
@class FBMediaPickerViewController, UIImagePickerController, FBMediaAttachmentPickerControllerConfiguration, NSArray, FBUserSession, NSString;

@interface FBMediaAttachmentPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, FBMediaPickerViewControllerDelegate, FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> {

	long long _dispatchOnceForMultipicker;
	long long _dispatchOnceForDefaultpicker;
	id<FBMediaAttachmentPickerControllerDelegate> _delegate;
	FBMediaPickerViewController* _multiMediaPicker;
	UIImagePickerController* _defaultImagePicker;
	FBMediaAttachmentPickerControllerConfiguration* _configuration;
	NSArray* _selectedMediaAttachments;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBMediaAttachmentPickerControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMediaPickerViewController * multiMediaPicker;                              //@synthesize multiMediaPicker=_multiMediaPicker - In the implementation block
@property (nonatomic,retain) UIImagePickerController * defaultImagePicker;                                //@synthesize defaultImagePicker=_defaultImagePicker - In the implementation block
@property (nonatomic,retain) FBMediaAttachmentPickerControllerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * selectedMediaAttachments;                                          //@synthesize selectedMediaAttachments=_selectedMediaAttachments - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentInPopoverWithSourceType:(long long)arg1 ;
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 openURL:(id)arg2 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(void)mediaPickerDidClearMedia:(id)arg1 ;
-(FBMediaPickerViewController *)multiMediaPicker;
-(void)setSelectedMediaAttachments:(NSArray *)arg1 ;
-(BOOL)allowMultiMediaPicker;
-(UIImagePickerController *)defaultImagePicker;
-(void)_imagePickerController:(id)arg1 infoForImage:(id)arg2 ;
-(void)_imagePickerController:(id)arg1 infoForVideo:(id)arg2 ;
-(void)_selectedMediaAttachment:(id)arg1 ;
-(void)mediaAttachmentPickerPhotoPreviewViewControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerPhotoPreviewViewController:(id)arg1 didApproveImageAttachment:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(id)presentableViewController;
-(void)willPresentViewController;
-(id)presentableViewControllerWithWithSourceType:(long long)arg1 selectedMediaAttachments:(id)arg2 highlightMediaAttachment:(id)arg3 selectionCapability:(long long)arg4 navigationType:(unsigned long long)arg5 ;
-(BOOL)shouldPresentableViewControllerBeWrappedInNavigationController:(id)arg1 ;
-(void)logPublishedMediaAttachmentInformation;
-(void)setMultiMediaPicker:(FBMediaPickerViewController *)arg1 ;
-(void)setDefaultImagePicker:(UIImagePickerController *)arg1 ;
-(NSArray *)selectedMediaAttachments;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMediaAttachmentPickerControllerDelegate>)arg1 ;
-(id)init;
-(id<FBMediaAttachmentPickerControllerDelegate>)delegate;
-(void)setConfiguration:(FBMediaAttachmentPickerControllerConfiguration *)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(FBMediaAttachmentPickerControllerConfiguration *)configuration;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

