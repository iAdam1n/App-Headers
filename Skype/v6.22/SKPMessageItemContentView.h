/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
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
-(id)viewConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(MKImageView *)imageView;
-(void)commonInit;
-(SKPAttributedLabel *)detailLabel;
-(void)setDetailText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)detailText;
-(void)updateMetrics;
-(MKGlobalStylesheet *)stylesheet;
-(void)setStylesheet:(MKGlobalStylesheet *)arg1 ;
@end
