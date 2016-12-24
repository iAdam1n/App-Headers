/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class MKImageView, UILabel, SKPAttributedLabel, NSString, NSAttributedString, MKGlobalStylesheet;

@interface SKPMessageItemContentView : UIView {

	MKImageView* _imageView;
	UILabel* _titleLabel;
	SKPAttributedLabel* _detailLabel;
	NSString* _title;
	NSAttributedString* _detailText;
	MKGlobalStylesheet* _stylesheet;

}

@property (nonatomic,retain) MKGlobalStylesheet * stylesheet;                 //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) SKPAttributedLabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * detailText;                 //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) MKImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(MKImageView *)imageView;
-(void)commonInit;
-(NSAttributedString *)detailText;
-(void)setDetailText:(NSAttributedString *)arg1 ;
-(SKPAttributedLabel *)detailLabel;
-(MKGlobalStylesheet *)stylesheet;
-(void)setStylesheet:(MKGlobalStylesheet *)arg1 ;
-(id)viewConstraints;
-(void)updateMetrics;
@end
