/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImageView, UIButton, UIActivityIndicatorView;

@interface ECPictureView : UIView {

	NSString* _imageURL;
	UIImageView* _backgroundImageView;
	UIImageView* _pictureImageView;
	UIButton* _pictureButton;
	UIActivityIndicatorView* _spinner;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSString * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * pictureImageView;                 //@synthesize pictureImageView=_pictureImageView - In the implementation block
@property (nonatomic,retain) UIButton * pictureButton;                       //@synthesize pictureButton=_pictureButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) id target;                                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                     //@synthesize action=_action - In the implementation block
-(UIImageView *)pictureImageView;
-(void)setPictureButton:(UIButton *)arg1 ;
-(UIButton *)pictureButton;
-(void)setPictureImageView:(UIImageView *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(UIImageView *)backgroundImageView;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAction:(SEL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
@end

