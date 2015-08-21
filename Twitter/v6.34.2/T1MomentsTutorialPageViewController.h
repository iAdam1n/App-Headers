/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>

@protocol T1MomentsTutorialPageViewControllerDelegate;
@class T1MomentsTutorialPage, UIImageView, UILabel, TFNButton;

@interface T1MomentsTutorialPageViewController : TFNViewController {

	id<T1MomentsTutorialPageViewControllerDelegate> _delegate;
	T1MomentsTutorialPage* _page;
	UIImageView* _backgroundImageView;
	UIImageView* _foregroundImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	TFNButton* _actionButton;

}

@property (assign,nonatomic,__weak) id<T1MomentsTutorialPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1MomentsTutorialPage * page;                                                 //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                                            //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * foregroundImageView;                                            //@synthesize foregroundImageView=_foregroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TFNButton * actionButton;                                                     //@synthesize actionButton=_actionButton - In the implementation block
-(id)initWithTutorialPage:(id)arg1 ;
-(void)setDelegate:(id<T1MomentsTutorialPageViewControllerDelegate>)arg1 ;
-(id<T1MomentsTutorialPageViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UIImageView *)backgroundImageView;
-(UILabel *)titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(T1MomentsTutorialPage *)page;
-(void)setPage:(T1MomentsTutorialPage *)arg1 ;
-(void)setActionButton:(TFNButton *)arg1 ;
-(TFNButton *)actionButton;
-(void)_actionButtonTapped:(id)arg1 ;
-(UIImageView *)foregroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setForegroundImageView:(UIImageView *)arg1 ;
@end

