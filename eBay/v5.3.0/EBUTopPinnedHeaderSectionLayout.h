/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ItemListViewLayout.h>

@interface EBUTopPinnedHeaderSectionLayout : ItemListViewLayout {

	BOOL _pinBothDirections;
	long long _numberOfColumns;

}

@property (assign,nonatomic) BOOL pinBothDirections;                 //@synthesize pinBothDirections=_pinBothDirections - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(long long)columnCountForWidth:(double)arg1 ;
-(BOOL)pinBothDirections;
-(CGRect)separatorRectFromRect:(CGRect)arg1 ;
-(void)setPinBothDirections:(BOOL)arg1 ;
-(id)init;
-(long long)numberOfColumns;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

