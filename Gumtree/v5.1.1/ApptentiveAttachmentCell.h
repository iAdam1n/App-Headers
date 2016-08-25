/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIProgressView, UIButton, NSLayoutConstraint;

@interface ApptentiveAttachmentCell : UICollectionViewCell {

	BOOL _usePlaceholder;
	UIImageView* _imageView;
	UILabel* _extensionLabel;
	UIProgressView* _progressView;
	UIButton* _deleteButton;
	NSLayoutConstraint* _imageWidth;
	NSLayoutConstraint* _imageHeight;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * extensionLabel;                      //@synthesize extensionLabel=_extensionLabel - In the implementation block
@property (assign,nonatomic,__weak) UIProgressView * progressView;                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                              //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic) BOOL usePlaceholder;                                  //@synthesize usePlaceholder=_usePlaceholder - In the implementation block
+(CGSize)portraitSizeOfScreen:(id)arg1 ;
+(long long)countForScreen:(id)arg1 ;
+(CGSize)sizeForScreen:(id)arg1 withMargin:(CGSize)arg2 ;
+(double)heightForScreen:(id)arg1 withMargin:(CGSize)arg2 ;
-(void)setExtensionLabel:(UILabel *)arg1 ;
-(UILabel *)extensionLabel;
-(void)awakeFromNib;
-(UIImageView *)imageView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImageWidth:(NSLayoutConstraint *)arg1 ;
-(void)setImageHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageWidth;
-(NSLayoutConstraint *)imageHeight;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(BOOL)usePlaceholder;
-(void)setUsePlaceholder:(BOOL)arg1 ;
@end

