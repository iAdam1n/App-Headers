/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/OutOfCurrencyDialogView.h>

@class UILabel, S8Button, S8ImageView;

@interface OutOfGemDialogView : OutOfCurrencyDialogView {

	UILabel* discountedPriceLabel;
	UILabel* discountedOldPriceLabel;
	UILabel* messageLabel;
	S8Button* button;
	S8ImageView* header;
	S8ImageView* icon;

}
-(id)initWithCost:(int)arg1 ;
-(id)productInfo;
-(void)updateProductForCost:(id)arg1 cost:(int)arg2 ;
-(void)dealloc;
@end

