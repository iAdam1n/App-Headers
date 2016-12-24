/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNSecureThreadInterstitialViewDelegate;
@class UIButton, UILabel, UIImageView, FBRichTextView, MNButton, MNStackedContainerView;

@interface MNSecureThreadInterstitialView : UIView {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	FBRichTextView* _contentTextView;
	UIButton* _learnMoreButton;
	MNButton* _actionButton;
	MNStackedContainerView* _stackedContainerView;
	id<MNSecureThreadInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSecureThreadInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(void)_didTapLearnMoreButton;
-(void)_initContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNSecureThreadInterstitialViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSecureThreadInterstitialViewDelegate>)delegate;
@end
