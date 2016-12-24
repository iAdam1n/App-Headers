/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCameraPreviewViewDelegate;
@class UIView, UIImageView, CAGradientLayer, UIButton, UIImage;

@interface FBCameraPreviewView : UIView {

	UIView* _videoPlayingView;
	UIImageView* _imagePreviewView;
	UIView* _buttonBarView;
	UIView* _buttonBarGradientView;
	CAGradientLayer* _gradientLayer;
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
-(void)setInterfaceRotationAngle:(double)arg1 ;
-(void)_sendPressed:(id)arg1 ;
-(void)setPhotoEditingControlsView:(id)arg1 ;
-(void)setVideoPlayingView:(id)arg1 ;
-(void)showSendButton:(BOOL)arg1 ;
-(void)_retakePressed:(id)arg1 ;
-(void)_updateImagePreviewViewRotationAngle;
-(void)_updateVideoPlayingViewRotationAngle;
-(void)_prepareVideoPreview;
-(void)_prepareImagePreview;
-(void)_setSendEnabled:(BOOL)arg1 ;
-(void)_showSendButtonOnRight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBCameraPreviewViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCameraPreviewViewDelegate>)delegate;
-(void)reset;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
@end
