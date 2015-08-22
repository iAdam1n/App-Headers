/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCameraPreviewViewDelegate;
@class UIView, UIImageView, UIButton, UIImage;

@interface FBCameraPreviewView : UIView {

	UIView* _videoPlayingView;
	UIImageView* _imagePreviewView;
	UIView* _buttonBarView;
	UIButton* _retakeButton;
	UIButton* _sendButton;
	UIButton* _sendButtonOnRight;
	UIView* _photoEditingControlsView;
	double _currentRotationAngle;
	id<FBCameraPreviewViewDelegate> _delegate;
	UIImage* _previewImage;

}

@property (assign,nonatomic,__weak) id<FBCameraPreviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                       //@synthesize previewImage=_previewImage - In the implementation block
-(void)_sendPressed:(id)arg1 ;
-(void)_retakePressed:(id)arg1 ;
-(void)_updateVideoPlayingViewRotationAngle;
-(void)_prepareVideoPreview;
-(void)_updateImagePreviewViewRotationAngle;
-(void)_prepareImagePreview;
-(void)setInterfaceRotationAngle:(double)arg1 ;
-(void)setVideoPlayingView:(id)arg1 ;
-(void)setPhotoEditingControlsView:(id)arg1 ;
-(void)_showSendButtonOnRight;
-(UIImage *)previewImage;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBCameraPreviewViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCameraPreviewViewDelegate>)delegate;
-(void)reset;
@end
