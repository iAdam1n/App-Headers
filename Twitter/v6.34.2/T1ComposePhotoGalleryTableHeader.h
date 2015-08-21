/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol T1ComposePhotoGalleryTableHeaderDelegate;
@class TFNNavigationBar, UINavigationItem, UIButton, TFNBarButtonItemButton, UIColor, NSString, UIFont;

@interface T1ComposePhotoGalleryTableHeader : UIView <UINavigationBarDelegate> {

	TFNNavigationBar* _navBar;
	UINavigationItem* _item;
	BOOL _viewDidSetup;
	UIButton* _backTitleButton;
	TFNBarButtonItemButton* _backItemButton;
	id<T1ComposePhotoGalleryTableHeaderDelegate> _delegate;
	UIColor* _backgroundImageColor;

}

@property (assign,nonatomic,__weak) id<T1ComposePhotoGalleryTableHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIColor * backgroundImageColor;                                            //@synthesize backgroundImageColor=_backgroundImageColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) UIColor * navColor; 
@property (nonatomic,retain) UIFont * navFont; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundImageColor:(UIColor *)arg1 ;
-(void)setNavFont:(UIFont *)arg1 ;
-(void)setNavColor:(UIColor *)arg1 ;
-(void)_back:(id)arg1 ;
-(UIColor *)navColor;
-(UIFont *)navFont;
-(UIColor *)backgroundImageColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<T1ComposePhotoGalleryTableHeaderDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<T1ComposePhotoGalleryTableHeaderDelegate>)delegate;
-(NSString *)title;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
@end

