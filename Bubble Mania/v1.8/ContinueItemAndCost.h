/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>

@class S8ImageView, S8Label;

@interface ContinueItemAndCost : XibView {

	S8ImageView* _itemImageView;
	S8Label* _costLabel;

}

@property (nonatomic,retain) S8ImageView * itemImageView;              //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) S8Label * costLabel;                      //@synthesize costLabel=_costLabel - In the implementation block
-(S8Label *)costLabel;
-(void)setCostLabel:(S8Label *)arg1 ;
-(void)dealloc;
-(S8ImageView *)itemImageView;
-(void)setItemImageView:(S8ImageView *)arg1 ;
@end

