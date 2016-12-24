/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/eBayTableViewCell.h>

@class ItemPictureView, UILabel;

@interface OrderItemCell : eBayTableViewCell {

	ItemPictureView* pictureView;
	UILabel* titleView;
	UILabel* priceView;

}

@property (nonatomic,retain) ItemPictureView * pictureView; 
@property (nonatomic,retain) UILabel * titleView; 
@property (nonatomic,retain) UILabel * priceView; 
-(double)optimalHeight;
-(ItemPictureView *)pictureView;
-(UILabel *)priceView;
-(void)setPictureView:(ItemPictureView *)arg1 ;
-(void)setPriceView:(UILabel *)arg1 ;
-(void)imageLoader:(id)arg1 finishedWithImage:(id)arg2 ;
-(void)updateOrderItem:(id)arg1 ;
-(void)loadImageForEbayItem:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(CGSize)preferredImageSize;
@end
