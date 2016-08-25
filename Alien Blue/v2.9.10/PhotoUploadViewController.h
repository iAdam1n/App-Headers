/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/ABOutlineViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PhotoUploadDelegate;
@class ABButton, UIImageView, UIImagePickerController, UIPopoverController, UIImage, NSString;

@interface PhotoUploadViewController : ABOutlineViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	ABButton* uploadButton_;
	UIImageView* photoView_;
	UIImageView* photoFrameView_;
	UIImagePickerController* imagePicker_;
	UIPopoverController* popover_;
	UIImage* photo_;
	id<PhotoUploadDelegate> delegate_;
	NSString* propertyKey_;

}

@property (assign,nonatomic,__weak) id<PhotoUploadDelegate> delegate; 
@property (nonatomic,retain) NSString * propertyKey; 
@property (nonatomic,retain) ABButton * uploadButton; 
@property (nonatomic,retain) UIImage * photo; 
@property (nonatomic,retain) UIImageView * photoView; 
@property (nonatomic,retain) UIImageView * photoFrameView; 
@property (nonatomic,retain) UIImagePickerController * imagePicker; 
@property (nonatomic,retain) UIPopoverController * popover; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageUploadResponse:(id)arg1 ;
-(void)showImagePicker;
-(void)showCameraPicker;
-(id)initWithDelegate:(id)arg1 propertyKey:(id)arg2 ;
-(void)releaseViews;
-(void)setImagePicker:(UIImagePickerController *)arg1 ;
-(void)uploadPhoto;
-(void)setUploadButton:(ABButton *)arg1 ;
-(void)setPhotoFrameView:(UIImageView *)arg1 ;
-(void)pickPhoto;
-(UIImageView *)photoFrameView;
-(ABButton *)uploadButton;
-(id)createPhotoUploadWrapperView;
-(void)uploadImageToImgur;
-(void)showPicker;
-(void)finishWithUrl:(id)arg1 ;
-(void)setDelegate:(id<PhotoUploadDelegate>)arg1 ;
-(void)dealloc;
-(id<PhotoUploadDelegate>)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(void)dismiss;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)setPropertyKey:(NSString *)arg1 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)takePhoto;
-(UIImagePickerController *)imagePicker;
-(UIImage *)photo;
-(void)setPhotoView:(UIImageView *)arg1 ;
-(UIImageView *)photoView;
-(NSString *)propertyKey;
@end

