/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface TGSharedMediaSectionHeaderView : UIView {

	UILabel* _dateLabel;
	UILabel* _summaryLabel;
	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
-(void)setDateString:(id)arg1 summaryString:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
@end
