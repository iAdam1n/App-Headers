/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class EUILabel;

@interface EBUFeedHeaderView : UICollectionReusableView {

	BOOL _layoutInitialized;
	EUILabel* _titleLabel;
	EUILabel* _descLabel;

}

@property (assign,nonatomic,__weak) EUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * descLabel;               //@synthesize descLabel=_descLabel - In the implementation block
@property (assign,nonatomic) BOOL layoutInitialized;                    //@synthesize layoutInitialized=_layoutInitialized - In the implementation block
-(void)setLayoutInitialized:(BOOL)arg1 ;
-(BOOL)layoutInitialized;
-(EUILabel *)descLabel;
-(void)setDescLabel:(EUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(EUILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(EUILabel *)arg1 ;
@end

