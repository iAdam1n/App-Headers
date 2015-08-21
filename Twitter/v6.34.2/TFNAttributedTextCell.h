/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>

@class TFNAttributedTextView;

@interface TFNAttributedTextCell : TFNTableViewCell {

	TFNAttributedTextView* _attributedTextView;

}

@property (nonatomic,readonly) TFNAttributedTextView * attributedTextView; 
+(double)heightForAttributedText:(id)arg1 iconImage:(id)arg2 layoutMetrics:(id)arg3 ;
+(double)heightForAttributedText:(id)arg1 tableWidth:(double)arg2 contentPadding:(UIEdgeInsets)arg3 iconImage:(id)arg4 ;
+(id)iconCellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 icon:(id)arg4 accessoryType:(long long)arg5 ;
+(id)_cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 withAttributedText:(id)arg4 accessoryType:(long long)arg5 initialization:(/*^block*/id)arg6 ;
+(double)_heightForAttributedText:(id)arg1 tableWidth:(double)arg2 contentEdgeInsets:(UIEdgeInsets)arg3 badgeText:(id)arg4 iconImage:(id)arg5 ;
+(id)cellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 accessoryType:(long long)arg4 ;
+(id)badgeCellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 badgeText:(id)arg4 ;
+(double)heightForAttributedText:(id)arg1 layoutMetrics:(id)arg2 ;
+(double)heightForAttributedText:(id)arg1 badgeText:(id)arg2 layoutMetrics:(id)arg3 ;
+(double)heightForAttributedText:(id)arg1 tableWidth:(double)arg2 contentPadding:(UIEdgeInsets)arg3 ;
+(double)heightForAttributedText:(id)arg1 tableWidth:(double)arg2 contentPadding:(UIEdgeInsets)arg3 badgeText:(id)arg4 ;
-(TFNAttributedTextView *)attributedTextView;
-(void)layoutSubviews;
-(void)cleanup;
@end

