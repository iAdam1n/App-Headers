/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSelfieReactionPreviewViewControllerDelegate;
@class UIImageView, UIImage, UIView, UIButton;

@interface FBSelfieReactionPreviewViewController : UIViewController {

	UIImageView* _imageView;
	UIImage* _image;
	UIView* _buttonRow;
	UIButton* _reactButton;
	UIButton* _retakeButton;
	id<FBSelfieReactionPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSelfieReactionPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapReact;
-(void)_didTapRetake;
-(id)initWithSelfieReactionImage:(id)arg1 ;
-(void)setDelegate:(id<FBSelfieReactionPreviewViewControllerDelegate>)arg1 ;
-(id<FBSelfieReactionPreviewViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
@end
