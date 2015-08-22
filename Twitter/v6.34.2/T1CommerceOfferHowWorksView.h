/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIFont, TFNKVODispatcher, UILabel, UIImageView, UITapGestureRecognizer, NSLayoutConstraint;

@interface T1CommerceOfferHowWorksView : UIView {

	UIView* _parent;
	UIFont* _titleFont;
	TFNKVODispatcher* _hiddenObserver;
	UILabel* _titleLabel;
	UIImageView* _linkImage;
	UILabel* _linkTitleLabel;
	UILabel* _linkLabel;
	UIImageView* _buyImage;
	UILabel* _buyTitleLabel;
	UILabel* _buyLabel;
	UIImageView* _earnImage;
	UILabel* _earnTitleLabel;
	UILabel* _earnLabel;
	UITapGestureRecognizer* _learnMoreTapGestureRecognizer;
	NSLayoutConstraint* _titleLabelTopSpaceConstraint;
	NSLayoutConstraint* _titleLabelLeftSpaceConstraint;
	NSLayoutConstraint* _linkImageTopSpacingConstraint;
	NSLayoutConstraint* _buyImageTopSpacingConstraint;
	NSLayoutConstraint* _earnImageTopSpacingConstraint;
	NSLayoutConstraint* _linkTitleLabelLeftSpacingConstraint;
	NSLayoutConstraint* _linkTitleLabelRightSpacingConstraint;
	NSLayoutConstraint* _buyTitleLabelLeftSpacingConstraint;
	NSLayoutConstraint* _buyTitleLabelRightSpacingConstraint;
	NSLayoutConstraint* _earnTitleLabelLeftSpacingConstraint;
	NSLayoutConstraint* _earnTitleLabelRightSpacingConstraint;

}

@property (nonatomic,retain) UIView * parent;                                                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) double stepTextLeftAlignment; 
@property (nonatomic,retain) UIFont * titleFont;                                                     //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) TFNKVODispatcher * hiddenObserver;                                      //@synthesize hiddenObserver=_hiddenObserver - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * linkImage;                                                //@synthesize linkImage=_linkImage - In the implementation block
@property (nonatomic,retain) UILabel * linkTitleLabel;                                               //@synthesize linkTitleLabel=_linkTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * linkLabel;                                                    //@synthesize linkLabel=_linkLabel - In the implementation block
@property (nonatomic,retain) UIImageView * buyImage;                                                 //@synthesize buyImage=_buyImage - In the implementation block
@property (nonatomic,retain) UILabel * buyTitleLabel;                                                //@synthesize buyTitleLabel=_buyTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * buyLabel;                                                     //@synthesize buyLabel=_buyLabel - In the implementation block
@property (nonatomic,retain) UIImageView * earnImage;                                                //@synthesize earnImage=_earnImage - In the implementation block
@property (nonatomic,retain) UILabel * earnTitleLabel;                                               //@synthesize earnTitleLabel=_earnTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * earnLabel;                                                    //@synthesize earnLabel=_earnLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * learnMoreTapGestureRecognizer;                 //@synthesize learnMoreTapGestureRecognizer=_learnMoreTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopSpaceConstraint;                      //@synthesize titleLabelTopSpaceConstraint=_titleLabelTopSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelLeftSpaceConstraint;                     //@synthesize titleLabelLeftSpaceConstraint=_titleLabelLeftSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * linkImageTopSpacingConstraint;                     //@synthesize linkImageTopSpacingConstraint=_linkImageTopSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buyImageTopSpacingConstraint;                      //@synthesize buyImageTopSpacingConstraint=_buyImageTopSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * earnImageTopSpacingConstraint;                     //@synthesize earnImageTopSpacingConstraint=_earnImageTopSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * linkTitleLabelLeftSpacingConstraint;               //@synthesize linkTitleLabelLeftSpacingConstraint=_linkTitleLabelLeftSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * linkTitleLabelRightSpacingConstraint;              //@synthesize linkTitleLabelRightSpacingConstraint=_linkTitleLabelRightSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buyTitleLabelLeftSpacingConstraint;                //@synthesize buyTitleLabelLeftSpacingConstraint=_buyTitleLabelLeftSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buyTitleLabelRightSpacingConstraint;               //@synthesize buyTitleLabelRightSpacingConstraint=_buyTitleLabelRightSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * earnTitleLabelLeftSpacingConstraint;               //@synthesize earnTitleLabelLeftSpacingConstraint=_earnTitleLabelLeftSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * earnTitleLabelRightSpacingConstraint;              //@synthesize earnTitleLabelRightSpacingConstraint=_earnTitleLabelRightSpacingConstraint - In the implementation block
+(id)instanceFromNIB;
-(UILabel *)linkTitleLabel;
-(UILabel *)linkLabel;
-(UILabel *)buyTitleLabel;
-(UILabel *)earnTitleLabel;
-(UILabel *)earnLabel;
-(UIImageView *)linkImage;
-(UIImageView *)buyImage;
-(UIImageView *)earnImage;
-(void)setHiddenObserver:(TFNKVODispatcher *)arg1 ;
-(NSLayoutConstraint *)titleLabelTopSpaceConstraint;
-(NSLayoutConstraint *)linkImageTopSpacingConstraint;
-(NSLayoutConstraint *)buyImageTopSpacingConstraint;
-(NSLayoutConstraint *)earnImageTopSpacingConstraint;
-(NSLayoutConstraint *)titleLabelLeftSpaceConstraint;
-(NSLayoutConstraint *)linkTitleLabelLeftSpacingConstraint;
-(NSLayoutConstraint *)buyTitleLabelLeftSpacingConstraint;
-(NSLayoutConstraint *)earnTitleLabelLeftSpacingConstraint;
-(NSLayoutConstraint *)linkTitleLabelRightSpacingConstraint;
-(NSLayoutConstraint *)buyTitleLabelRightSpacingConstraint;
-(NSLayoutConstraint *)earnTitleLabelRightSpacingConstraint;
-(void)updateAccessibilityFrames;
-(double)_intrinsicHeight;
-(double)stepTextLeftAlignment;
-(TFNKVODispatcher *)hiddenObserver;
-(void)setLinkImage:(UIImageView *)arg1 ;
-(void)setLinkTitleLabel:(UILabel *)arg1 ;
-(void)setLinkLabel:(UILabel *)arg1 ;
-(void)setBuyImage:(UIImageView *)arg1 ;
-(void)setBuyTitleLabel:(UILabel *)arg1 ;
-(void)setEarnImage:(UIImageView *)arg1 ;
-(void)setEarnTitleLabel:(UILabel *)arg1 ;
-(void)setEarnLabel:(UILabel *)arg1 ;
-(UITapGestureRecognizer *)learnMoreTapGestureRecognizer;
-(void)setLearnMoreTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTitleLabelTopSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelLeftSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLinkImageTopSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBuyImageTopSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEarnImageTopSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLinkTitleLabelLeftSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLinkTitleLabelRightSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBuyTitleLabelLeftSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBuyTitleLabelRightSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEarnTitleLabelLeftSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEarnTitleLabelRightSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)buyLabel;
-(void)setBuyLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIFont *)titleFont;
-(UIView *)parent;
-(void)setParent:(UIView *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
@end
