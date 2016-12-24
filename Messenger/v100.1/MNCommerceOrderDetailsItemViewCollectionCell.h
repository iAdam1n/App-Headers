/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class MNBusinessSeparatorView, MNCommerceItemView;

@interface MNCommerceOrderDetailsItemViewCollectionCell : UICollectionViewCell {

	MNBusinessSeparatorView* _separatorView;
	MNCommerceItemView* _itemView;

}

@property (nonatomic,readonly) MNCommerceItemView * itemView;              //@synthesize itemView=_itemView - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)setupWithItemView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNCommerceItemView *)itemView;
@end
