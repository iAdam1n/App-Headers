/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, UILabel;

@interface T1BouncingTitleView : UIView {

	BOOL _shouldBounce;
	NSString* _title;
	NSString* _subtitle;
	double _upperClipOffset;
	double _lowerClipOffset;
	double _fullNameAlpha;
	UIView* _maskView;
	UILabel* _collapsedTitleLabel;
	UILabel* _collapsedSubtitleLabel;

}

@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL shouldBounce;                             //@synthesize shouldBounce=_shouldBounce - In the implementation block
@property (assign,nonatomic) double upperClipOffset;                        //@synthesize upperClipOffset=_upperClipOffset - In the implementation block
@property (assign,nonatomic) double lowerClipOffset;                        //@synthesize lowerClipOffset=_lowerClipOffset - In the implementation block
@property (assign,nonatomic) double fullNameAlpha;                          //@synthesize fullNameAlpha=_fullNameAlpha - In the implementation block
@property (nonatomic,retain) UIView * maskView;                             //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UILabel * collapsedTitleLabel;                 //@synthesize collapsedTitleLabel=_collapsedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * collapsedSubtitleLabel;              //@synthesize collapsedSubtitleLabel=_collapsedSubtitleLabel - In the implementation block
+(UIEdgeInsets)defaultContentEdgeInsets;
-(BOOL)shouldBounce;
-(void)setShouldBounce:(BOOL)arg1 ;
-(double)upperClipOffset;
-(double)lowerClipOffset;
-(double)fullNameAlpha;
-(void)setUpperClipOffset:(double)arg1 ;
-(void)setLowerClipOffset:(double)arg1 ;
-(void)setFullNameAlpha:(double)arg1 ;
-(UILabel *)collapsedTitleLabel;
-(void)setCollapsedTitleLabel:(UILabel *)arg1 ;
-(UILabel *)collapsedSubtitleLabel;
-(void)setCollapsedSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMaskView:(UIView *)arg1 ;
-(UIView *)maskView;
-(void)_update;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end
