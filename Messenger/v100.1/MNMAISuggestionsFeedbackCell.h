/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, MNMAISuggestionsFeedbackCellViewModel;

@interface MNMAISuggestionsFeedbackCell : UITableViewCell {

	UILabel* _titleLabel;
	UIView* _separatorView;
	BOOL _shouldHideSeparator;
	MNMAISuggestionsFeedbackCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNMAISuggestionsFeedbackCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparator;                                     //@synthesize shouldHideSeparator=_shouldHideSeparator - In the implementation block
-(BOOL)shouldHideSeparator;
-(void)setShouldHideSeparator:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(MNMAISuggestionsFeedbackCellViewModel *)viewModel;
-(void)setViewModel:(MNMAISuggestionsFeedbackCellViewModel *)arg1 ;
@end
