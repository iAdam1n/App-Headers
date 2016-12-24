/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBAggregatedPostsUploadBarViewDelegate;
@class UIButton, UIImageView, UIActivityIndicatorView, FBIndeterminateProgressView, UITapGestureRecognizer, UILabel, UIProgressView, UIAlertView, NSString;

@interface FBAggregatedPostsUploadBarView : UIView <UIAlertViewDelegate> {

	UIButton* _rightButton;
	UIImageView* _errorCancelButton;
	UIImageView* _thumbnailView;
	UIImageView* _thumbnailImageView;
	UIImageView* _videoIconView;
	UIActivityIndicatorView* _rightActivityIndicatorView;
	FBIndeterminateProgressView* _indeterminateView;
	UITapGestureRecognizer* _errorCancelRecognizer;
	BOOL _stacked;
	BOOL _showingError;
	BOOL _showingSpinner;
	BOOL _showingIndeterminateProgress;
	BOOL _errorIsTransient;
	BOOL _cancelUploadSurveyEnabled;
	id<FBAggregatedPostsUploadBarViewDelegate> _delegate;
	UILabel* _errorLabel;
	UIProgressView* _progressView;
	UIAlertView* _cancelAlert;

}

@property (nonatomic,retain) UIAlertView * cancelAlert;                                                           //@synthesize cancelAlert=_cancelAlert - In the implementation block
@property (assign,nonatomic) double progress; 
@property (assign,nonatomic,__weak) id<FBAggregatedPostsUploadBarViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * errorLabel;                                                              //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                                                     //@synthesize progressView=_progressView - In the implementation block
@property (assign,getter=isStacked,nonatomic) BOOL stacked;                                                       //@synthesize stacked=_stacked - In the implementation block
@property (assign,getter=isShowingError,nonatomic) BOOL showingError;                                             //@synthesize showingError=_showingError - In the implementation block
@property (assign,getter=isShowingSpinner,nonatomic) BOOL showingSpinner;                                         //@synthesize showingSpinner=_showingSpinner - In the implementation block
@property (assign,getter=isShowingIndeterminateProgres,nonatomic) BOOL showingIndeterminateProgress;              //@synthesize showingIndeterminateProgress=_showingIndeterminateProgress - In the implementation block
@property (assign,nonatomic) BOOL errorIsTransient;                                                               //@synthesize errorIsTransient=_errorIsTransient - In the implementation block
@property (assign,nonatomic) BOOL cancelUploadSurveyEnabled;                                                      //@synthesize cancelUploadSurveyEnabled=_cancelUploadSurveyEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapRightButton:(id)arg1 ;
-(void)resetErrorState;
-(void)showTransientError;
-(void)_didTapErrorCancelButton:(id)arg1 ;
-(void)setCancelAlert:(UIAlertView *)arg1 ;
-(CGRect)progressViewFrame;
-(void)setShowingError:(BOOL)arg1 ;
-(void)setErrorIsTransient:(BOOL)arg1 ;
-(BOOL)errorIsTransient;
-(id)_defaultCancelAlert;
-(void)showTerminalError;
-(void)setShowingIndeterminateProgress:(BOOL)arg1 ;
-(void)setThumbnailImage:(id)arg1 forMediaType:(int)arg2 ;
-(BOOL)isShowingError;
-(BOOL)isShowingSpinner;
-(BOOL)isShowingIndeterminateProgres;
-(BOOL)cancelUploadSurveyEnabled;
-(void)setCancelUploadSurveyEnabled:(BOOL)arg1 ;
-(UIAlertView *)cancelAlert;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBAggregatedPostsUploadBarViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAggregatedPostsUploadBarViewDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setProgress:(double)arg1 ;
-(void)_updateButtons;
-(double)progress;
-(UIProgressView *)progressView;
-(BOOL)isStacked;
-(void)setStacked:(BOOL)arg1 ;
-(CGRect)rightButtonFrame;
-(UILabel *)errorLabel;
-(void)setShowingSpinner:(BOOL)arg1 ;
@end
