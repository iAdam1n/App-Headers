/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBayTableViewCell.h>

@class UILabel, UIActivityIndicatorView, UIColor;

@interface LoadMoreCell : eBayTableViewCell {

	UILabel* label;
	UIActivityIndicatorView* activity;
	UIColor* loadMoreBlue;
	BOOL genericLoadingText;
	long long quantity;

}

@property (assign) BOOL genericLoadingText; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 quantity:(long long)arg3 ;
-(BOOL)genericLoadingText;
-(void)setGenericLoadingText:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setQuantity:(long long)arg1 ;
@end

