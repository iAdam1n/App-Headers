/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUAccessorizedExpandableView.h>

@class UILabel, UIImageView, NSMutableArray;

@interface EBUTopRatedView : EBUAccessorizedExpandableView {

	double _optimalHeight;
	UILabel* _cellTitleLabel;
	UILabel* _bulletedTextLabel;
	UILabel* _descriptionLabel;
	UIImageView* _topRatedImage;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) UILabel * cellTitleLabel;                       //@synthesize cellTitleLabel=_cellTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bulletedTextLabel;                    //@synthesize bulletedTextLabel=_bulletedTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * topRatedImage;                    //@synthesize topRatedImage=_topRatedImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (readonly) double optimalHeight;                                   //@synthesize optimalHeight=_optimalHeight - In the implementation block
-(double)optimalHeight;
-(int)leftPaddingForImage;
-(id)setupBulletText;
-(id)siteBulletKey:(int)arg1 ;
-(UILabel *)cellTitleLabel;
-(UILabel *)bulletedTextLabel;
-(UIImageView *)topRatedImage;
-(void)setCellTitleLabel:(UILabel *)arg1 ;
-(void)setBulletedTextLabel:(UILabel *)arg1 ;
-(void)setTopRatedImage:(UIImageView *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(int)rightPadding;
-(double)verticalPadding;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

