/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, FBDBLPreviewView;

@interface FBDBLNuxView : UIView {

	UIButton* _passcodeButton;
	FBDBLPreviewView* _preview;

}

@property (nonatomic,retain) UIButton * passcodeButton;               //@synthesize passcodeButton=_passcodeButton - In the implementation block
@property (nonatomic,retain) FBDBLPreviewView * preview;              //@synthesize preview=_preview - In the implementation block
-(void)setProfilePictureURL:(id)arg1 ;
-(void)setPasscodeButton:(UIButton *)arg1 ;
-(UIButton *)passcodeButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBDBLPreviewView *)preview;
-(void)setPreview:(FBDBLPreviewView *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
