/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface EBUCategoryCollectionLayout : UICollectionViewFlowLayout {

	long long _targetCategoryIndex;
	long long _offsetPadding;
	CGSize _targetCellSize;

}

@property (assign,nonatomic) long long targetCategoryIndex;              //@synthesize targetCategoryIndex=_targetCategoryIndex - In the implementation block
@property (assign,nonatomic) long long offsetPadding;                    //@synthesize offsetPadding=_offsetPadding - In the implementation block
@property (assign,nonatomic) CGSize targetCellSize;                      //@synthesize targetCellSize=_targetCellSize - In the implementation block
-(long long)offsetPadding;
-(long long)targetCategoryIndex;
-(void)setTargetCategoryIndex:(long long)arg1 ;
-(void)setOffsetPadding:(long long)arg1 ;
-(CGSize)targetCellSize;
-(void)setTargetCellSize:(CGSize)arg1 ;
-(id)init;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
@end

