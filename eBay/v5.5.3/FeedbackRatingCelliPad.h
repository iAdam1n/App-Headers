/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FeedbackDelegate;
@class RadioButtonControl;

@interface FeedbackRatingCelliPad : UITableViewCell {

	RadioButtonControl* ratingControl;
	int selectedSegment;
	id<FeedbackDelegate> ratingDelegate;

}

@property (assign) int selectedSegment; 
@property (assign,nonatomic,__weak) id<FeedbackDelegate> ratingDelegate; 
-(double)optimalHeight;
-(void)segmentAction:(id)arg1 ;
-(void)setupForSellerFeedback;
-(id<FeedbackDelegate>)ratingDelegate;
-(void)setRatingDelegate:(id<FeedbackDelegate>)arg1 ;
-(void)setupForBuyerFeedback;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedSegment:(int)arg1 ;
-(int)selectedSegment;
@end
