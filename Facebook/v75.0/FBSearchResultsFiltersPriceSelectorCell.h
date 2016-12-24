/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBSearchResultsFiltersPriceSelectorCellDelegate;
@class NSArray, FBButtonConfigBuilder;

@interface FBSearchResultsFiltersPriceSelectorCell : UITableViewCell {

	NSArray* _buttons;
	FBButtonConfigBuilder* _buttonBuilder;
	id<FBSearchResultsFiltersPriceSelectorCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSearchResultsFiltersPriceSelectorCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setButtonAtIndex:(long long)arg1 toState:(BOOL)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBSearchResultsFiltersPriceSelectorCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBSearchResultsFiltersPriceSelectorCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)_setup;
-(void)_buttonPressed:(id)arg1 ;
@end
