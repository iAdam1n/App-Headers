/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class BaseLabel;

@interface LabeledCollectionHeaderView : UICollectionReusableView {

	BaseLabel* _label;

}

@property (nonatomic,retain) BaseLabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BaseLabel *)label;
-(void)setLabel:(BaseLabel *)arg1 ;
@end
