/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNTableViewCellStyle, UIView;

@interface MNGroupsOtherCustomizationsCell : UITableViewCell {

	MNTableViewCellStyle* _cellStyle;
	UIView* _customizationView;
	UIView* _topSeparatorView;
	BOOL _showsTopSeparator;

}

@property (assign,nonatomic) BOOL showsTopSeparator;              //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
-(void)_layoutSeparators;
-(void)setCustomizationAccessoryView:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
@end

