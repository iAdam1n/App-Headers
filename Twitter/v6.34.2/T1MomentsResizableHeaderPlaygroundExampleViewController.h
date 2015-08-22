/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Twitter/T1MomentsResizableHeader.h>

@protocol T1MomentsResizableHeaderDelegate;
@class UIImageView, UIButton, NSString;

@interface T1MomentsResizableHeaderPlaygroundExampleViewController : UIViewController <T1MomentsResizableHeader> {

	id<T1MomentsResizableHeaderDelegate> _resizableHeaderDelegate;
	UIImageView* _imageView;
	UIButton* _configureButton;
	double _preferredExpandedHeight;
	double _preferredCollapsedHeight;

}

@property (nonatomic,retain) UIImageView * imageView;                                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * configureButton;                                                       //@synthesize configureButton=_configureButton - In the implementation block
@property (assign,nonatomic) double preferredExpandedHeight;                                                   //@synthesize preferredExpandedHeight=_preferredExpandedHeight - In the implementation block
@property (assign,nonatomic) double preferredCollapsedHeight;                                                  //@synthesize preferredCollapsedHeight=_preferredCollapsedHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<T1MomentsResizableHeaderDelegate> resizableHeaderDelegate;              //@synthesize resizableHeaderDelegate=_resizableHeaderDelegate - In the implementation block
-(void)setPreferredExpandedHeight:(double)arg1 ;
-(void)setPreferredCollapsedHeight:(double)arg1 ;
-(void)setConfigureButton:(UIButton *)arg1 ;
-(UIButton *)configureButton;
-(void)_didTapConfigurationButton;
-(id<T1MomentsResizableHeaderDelegate>)resizableHeaderDelegate;
-(double)preferredExpandedHeight;
-(double)preferredCollapsedHeight;
-(void)setResizableHeaderDelegate:(id<T1MomentsResizableHeaderDelegate>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end
