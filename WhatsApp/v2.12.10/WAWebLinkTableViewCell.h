/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIImageView;

@interface WAWebLinkTableViewCell : UITableViewCell {

	NSLayoutConstraint* _imageViewLeadingMarginConstraint;
	NSLayoutConstraint* _contentImageMarginConstraint;
	NSLayoutConstraint* _thumbnailImageViewWidthConstraint;
	UILabel* _contentLabel;
	UILabel* _webURLLabel;
	UIImageView* _thumbnailImageView;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * imageViewLeadingMarginConstraint;               //@synthesize imageViewLeadingMarginConstraint=_imageViewLeadingMarginConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * contentImageMarginConstraint;                   //@synthesize contentImageMarginConstraint=_contentImageMarginConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * thumbnailImageViewWidthConstraint;              //@synthesize thumbnailImageViewWidthConstraint=_thumbnailImageViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * contentLabel;                                              //@synthesize contentLabel=_contentLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * webURLLabel;                                               //@synthesize webURLLabel=_webURLLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                                    //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
+(double)preferredHeight;
-(void)configureWithMessage:(id)arg1 ;
-(UILabel *)webURLLabel;
-(NSLayoutConstraint *)thumbnailImageViewWidthConstraint;
-(NSLayoutConstraint *)contentImageMarginConstraint;
-(NSLayoutConstraint *)imageViewLeadingMarginConstraint;
-(void)setImageViewLeadingMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentImageMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWebURLLabel:(UILabel *)arg1 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setContentLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(UIImageView *)thumbnailImageView;
-(UILabel *)contentLabel;
@end
