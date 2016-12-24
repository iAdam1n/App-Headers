/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UILabel, WALabel, NSSet;

@interface WASearchResultTableViewCell : UITableViewCell {

	UIView* _containerView;
	UILabel* _titleLabel;
	WALabel* _snippetLabel;
	UILabel* _dateLabel;
	NSSet* _searchTokens;

}
+(id)messageTextFormatter;
-(void)configureFonts;
-(void)configureWithSearchResultMessage:(id)arg1 searchTokens:(id)arg2 ;
-(BOOL)isWord:(id)arg1 foundInSearchTokens:(id)arg2 ;
-(void)setUpPlaceholderForSizing;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
