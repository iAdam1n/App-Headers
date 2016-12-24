/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class EUILabel, EUIImageView, NSString, UIButton, EBUVerticalSpacerView, UIImageView, EBUFollowButton;

@interface EBUTitleContainerViewBase : UIView {

	EUILabel* _titleLabel;
	EUILabel* _subTitleLabel;
	EUILabel* _descriptionLabel;
	EUIImageView* _creatorImageView;
	NSString* _creatorImageURL;
	UIButton* _creatorButton;
	EBUVerticalSpacerView* _spacer1;
	EBUVerticalSpacerView* _spacer2;
	UIImageView* _scrimView;
	UIButton* _actionButton;
	EBUFollowButton* _followButton;

}

@property (assign,nonatomic,__weak) EUILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * subTitleLabel;                     //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * descriptionLabel;                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * creatorImageView;              //@synthesize creatorImageView=_creatorImageView - In the implementation block
@property (nonatomic,retain) NSString * creatorImageURL;                          //@synthesize creatorImageURL=_creatorImageURL - In the implementation block
@property (assign,nonatomic,__weak) UIButton * creatorButton;                     //@synthesize creatorButton=_creatorButton - In the implementation block
@property (assign,nonatomic,__weak) EBUVerticalSpacerView * spacer1;              //@synthesize spacer1=_spacer1 - In the implementation block
@property (assign,nonatomic,__weak) EBUVerticalSpacerView * spacer2;              //@synthesize spacer2=_spacer2 - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * scrimView;                      //@synthesize scrimView=_scrimView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * actionButton;                      //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic,__weak) EBUFollowButton * followButton;               //@synthesize followButton=_followButton - In the implementation block
-(EUILabel *)subTitleLabel;
-(void)setSubTitleLabel:(EUILabel *)arg1 ;
-(EBUFollowButton *)followButton;
-(void)setFollowButton:(EBUFollowButton *)arg1 ;
-(EUIImageView *)creatorImageView;
-(void)setCreatorImageView:(EUIImageView *)arg1 ;
-(void)setCreatorImageURL:(NSString *)arg1 ;
-(UIButton *)creatorButton;
-(id)makeSubTitleLabel;
-(id)makeDescriptionLabel;
-(id)makeCreatorImageView;
-(id)makeCreatorButton;
-(NSString *)creatorImageURL;
-(void)setCreatorButton:(UIButton *)arg1 ;
-(EBUVerticalSpacerView *)spacer1;
-(void)setSpacer1:(EBUVerticalSpacerView *)arg1 ;
-(EBUVerticalSpacerView *)spacer2;
-(void)setSpacer2:(EBUVerticalSpacerView *)arg1 ;
-(id)init;
-(void)initialize;
-(EUILabel *)titleLabel;
-(id)accessibilityLabel;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(id)makeTitleLabel;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(EUILabel *)descriptionLabel;
-(void)setDescriptionLabel:(EUILabel *)arg1 ;
-(UIImageView *)scrimView;
-(void)setScrimView:(UIImageView *)arg1 ;
@end
