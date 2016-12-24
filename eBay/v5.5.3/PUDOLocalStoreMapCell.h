/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/LocalStoreMapCell.h>

@class UILabel, UIImageView;

@interface PUDOLocalStoreMapCell : LocalStoreMapCell {

	UILabel* _storeAddress;

}

@property (assign,nonatomic,__weak) UIImageView * checkmarkView; 
@property (assign,nonatomic,__weak) UILabel * storeName; 
@property (assign,nonatomic,__weak) UILabel * storeAddress;                   //@synthesize storeAddress=_storeAddress - In the implementation block
@property (assign,nonatomic,__weak) UILabel * storeDistance; 
-(UILabel *)storeAddress;
-(void)setStoreAddress:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateCell;
@end
