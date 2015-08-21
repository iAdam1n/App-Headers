/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class T1DismissableTableViewCellSuggestsModuleHeaderView, NSString;

@interface T1DismissableHeaderTableViewCell : TFNTableViewCell {

	T1DismissableTableViewCellSuggestsModuleHeaderView* _headerView;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic,__weak) id<T1SuggestsModuleHeaderViewDelegate> delegate; 
@property (nonatomic,readonly) T1DismissableTableViewCellSuggestsModuleHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(void)setDelegate:(id<T1SuggestsModuleHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<T1SuggestsModuleHeaderViewDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(T1DismissableTableViewCellSuggestsModuleHeaderView *)headerView;
@end

