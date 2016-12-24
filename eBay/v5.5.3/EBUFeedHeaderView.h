/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUICollectionReusableView.h>

@class EUILabel;

@interface EBUFeedHeaderView : EUICollectionReusableView {

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
-(void)updateConstraints;
-(EUILabel *)titleLabel;
-(void)setTitleLabel:(EUILabel *)arg1 ;
@end
