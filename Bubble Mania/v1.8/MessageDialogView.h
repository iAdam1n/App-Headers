/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>

@class NSString, UIImageView, UILabel, UIView, S8Button, S8ImageView, UIButton;

@interface MessageDialogView : XibDialogView {

	NSString* action;
	UIImageView* headerImageView;
	UILabel* descriptionLabel;
	UIImageView* dialogBackground;
	UIView* topLevelView;
	UIView* fullDialogView;
	S8Button* mainButton;
	S8ImageView* dialogImageView;
	BOOL hideCloseButton;
	UIButton* closeButton;
	NSString* closeButtonAction;

}

@property (nonatomic,retain) UIButton * closeButton; 
@property (nonatomic,retain) NSString * closeButtonAction; 
@property (assign,nonatomic) BOOL hideCloseButton; 
+(id)viewWithSuccessMessage:(id)arg1 ;
+(id)viewWithHeaderText:(id)arg1 withDescription:(id)arg2 ;
+(id)viewWithDictionary:(id)arg1 ;
+(id)viewWithFailureMessage:(id)arg1 ;
+(id)viewWithSuccessMessage:(id)arg1 withAction:(id)arg2 withButtonText:(id)arg3 ;
+(id)viewWithHeaderDictionary:(id)arg1 ;
+(id)viewWithHeaderText:(id)arg1 withDescription:(id)arg2 action:(id)arg3 ;
+(id)viewWithHeaderText:(id)arg1 withDescription:(id)arg2 action:(id)arg3 withButtonText:(id)arg4 ;
+(id)viewWithSuccessMessage:(id)arg1 withAction:(id)arg2 ;
+(id)viewWithFailureMessage:(id)arg1 withAction:(id)arg2 ;
+(id)viewWithFailureMessage:(id)arg1 withAction:(id)arg2 buttonText:(id)arg3 ;
+(id)viewWithCongratsMessage:(id)arg1 withAction:(id)arg2 ;
+(id)quitDialog;
+(void)load;
-(void)backPressed;
-(void)playTapSound;
-(void)mainButtonClicked:(id)arg1 ;
-(id)initWithHeaderImage:(id)arg1 description:(id)arg2 buttonText:(id)arg3 buttonImage:(id)arg4 backgroundImage:(id)arg5 action:(id)arg6 ;
-(id)initWithHeaderImage:(id)arg1 description:(id)arg2 buttonText:(id)arg3 buttonImage:(id)arg4 backgroundImage:(id)arg5 buttonBackgroundImage:(id)arg6 action:(id)arg7 headerText:(id)arg8 ;
-(void)showTextAndHeader;
-(void)showFullScreenImage;
-(void)showFullScreenImage:(BOOL)arg1 ;
-(id)initWithHeaderText:(id)arg1 description:(id)arg2 buttonText:(id)arg3 bgThemeSuffix:(id)arg4 action:(id)arg5 ;
-(void)setCloseButtonAction:(NSString *)arg1 ;
-(void)closeButtonClicked:(id)arg1 ;
-(NSString *)closeButtonAction;
-(id)initWithHeaderImage:(id)arg1 description:(id)arg2 buttonText:(id)arg3 buttonImage:(id)arg4 action:(id)arg5 ;
-(id)initWithHeaderImage:(id)arg1 description:(id)arg2 buttonText:(id)arg3 buttonImage:(id)arg4 backgroundImage:(id)arg5 buttonBackgroundImage:(id)arg6 action:(id)arg7 ;
-(id)initWithHeaderImage:(id)arg1 description:(id)arg2 buttonText:(id)arg3 buttonImage:(id)arg4 backgroundImage:(id)arg5 action:(id)arg6 headerText:(id)arg7 ;
-(void)setHideCloseButton:(BOOL)arg1 ;
-(BOOL)hideCloseButton;
-(void)show;
-(void)dealloc;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end

