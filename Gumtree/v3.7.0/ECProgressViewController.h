/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseCustomHUDController.h>

@class NSString, UIActivityIndicatorView, UILabel, UIButton, UIImageView, UIView;

@interface ECProgressViewController : ECBaseCustomHUDController {

	/*^block*/id _cancelBlock;
	NSString* _progressTitle;
	UIActivityIndicatorView* _activityView;
	UILabel* _messageLabel;
	UIButton* _abortButton;
	UIImageView* _backgroundImageView;
	UIView* _separator;

}

@property (nonatomic,copy) id cancelBlock;                                        //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) NSString * progressTitle;                            //@synthesize progressTitle=_progressTitle - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * abortButton;                              //@synthesize abortButton=_abortButton - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                   //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                  //@synthesize separator=_separator - In the implementation block
+(id)progressWithTitle:(id)arg1 ;
-(void)dismissProgressView;
-(void)showProgressViewWithSuperview:(id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(NSString *)progressTitle;
-(void)setProgressTitle:(NSString *)arg1 ;
-(UIButton *)abortButton;
-(void)setAbortButton:(UIButton *)arg1 ;
-(void)configureMotionEffects;
-(id)cancelBlock;
-(void)abort:(id)arg1 ;
-(UIImageView *)backgroundImageView;
-(UILabel *)messageLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(UIView *)separator;
@end

