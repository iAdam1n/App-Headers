/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, InventoryLocation;

@interface LocalStoreMapCell : UITableViewCell {

	UIImageView* _checkmarkView;
	UILabel* _storeName;
	UILabel* _storeDistance;
	InventoryLocation* _inventoryLocation;
	UILabel* _productAvailability;
	UILabel* _readinessTime;

}

@property (assign,nonatomic,__weak) UILabel * productAvailability;                      //@synthesize productAvailability=_productAvailability - In the implementation block
@property (assign,nonatomic,__weak) UILabel * readinessTime;                            //@synthesize readinessTime=_readinessTime - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * checkmarkView;                        //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * storeName;                                //@synthesize storeName=_storeName - In the implementation block
@property (assign,nonatomic,__weak) UILabel * storeDistance;                            //@synthesize storeDistance=_storeDistance - In the implementation block
@property (assign,nonatomic,__weak) InventoryLocation * inventoryLocation;              //@synthesize inventoryLocation=_inventoryLocation - In the implementation block
-(UILabel *)productAvailability;
-(UILabel *)storeDistance;
-(UILabel *)readinessTime;
-(InventoryLocation *)inventoryLocation;
-(void)setInventoryLocation:(InventoryLocation *)arg1 ;
-(void)setStoreDistance:(UILabel *)arg1 ;
-(void)setProductAvailability:(UILabel *)arg1 ;
-(void)setReadinessTime:(UILabel *)arg1 ;
-(UILabel *)storeName;
-(void)setStoreName:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)updateCell;
@end
