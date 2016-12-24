/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, ActivitySpinnerView, UIColor;

@interface LoadMoreCelliPad : UITableViewCell {

	UILabel* label;
	ActivitySpinnerView* activity;
	UIColor* loadMoreBlue;
	BOOL genericLoadingText;
	int quantity;

}

@property (assign) BOOL genericLoadingText; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 quantity:(int)arg3 ;
-(BOOL)genericLoadingText;
-(void)setGenericLoadingText:(BOOL)arg1 ;
-(void)setQuantity:(int)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
@end
