/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>

@class UIButton, UIImageView, UIView, S8Button, S8Label;

@interface PostLoadTitleScreenView : XibView {

	id delegate;
	UIButton* playButton;
	UIImageView* splashScreenImageView;
	UIView* spinnerView;
	S8Button* _facebookLoginButton;
	S8Label* _titleScreenLabel;

}

@property (nonatomic,retain) S8Button * facebookLoginButton;              //@synthesize facebookLoginButton=_facebookLoginButton - In the implementation block
@property (nonatomic,retain) S8Label * titleScreenLabel;                  //@synthesize titleScreenLabel=_titleScreenLabel - In the implementation block
-(void)playTapped:(id)arg1 ;
-(void)facebookLogin:(id)arg1 ;
-(S8Label *)titleScreenLabel;
-(void)socialSignOnStateChanged:(id)arg1 ;
-(S8Button *)facebookLoginButton;
-(void)setFacebookLoginButton:(S8Button *)arg1 ;
-(void)setTitleScreenLabel:(S8Label *)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)refresh;
@end

