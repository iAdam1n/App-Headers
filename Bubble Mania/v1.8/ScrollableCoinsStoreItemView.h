/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>

@protocol IAPProduct;
@class ScrollableCoinsStoreDialogView, UILabel, UIView, S8ImageView;

@interface ScrollableCoinsStoreItemView : XibView {

	ScrollableCoinsStoreDialogView* storeView;
	id<IAPProduct> product;
	UILabel* pointsLabel;
	UILabel* priceLabel;
	UILabel* discountedPointsLabel;
	UILabel* discountedOldPointsLabel;
	UIView* normalView;
	UIView* onsaleView;
	UILabel* onsalePercentLabel;
	UILabel* onsaleDescriptionLabel;
	S8ImageView* backgroundImage;

}

@property (assign,nonatomic) ScrollableCoinsStoreDialogView * storeView; 
@property (nonatomic,retain) id<IAPProduct> product; 
@property (nonatomic,retain) S8ImageView * backgroundImage; 
-(void)playTapSound;
-(id)localizedPrice:(id)arg1 ;
-(void)setStoreView:(ScrollableCoinsStoreDialogView *)arg1 ;
-(void)productClicked;
-(ScrollableCoinsStoreDialogView *)storeView;
-(void)dealloc;
-(S8ImageView *)backgroundImage;
-(void)setBackgroundImage:(S8ImageView *)arg1 ;
-(void)refresh;
-(void)setProduct:(id<IAPProduct>)arg1 ;
-(id<IAPProduct>)product;
@end
