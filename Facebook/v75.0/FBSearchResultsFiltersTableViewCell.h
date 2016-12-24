/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBSearchResultsFiltersTableViewCellDelegate;
@class UILabel, UIImageView, UIView, UIImage, UIColor, NSString;

@interface FBSearchResultsFiltersTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _iconImageView;
	UIView* _separatorLine;
	UIImage* _emptyCircle;
	UIImage* _selectedCircle;
	UIColor* _deselectedTextColor;
	UIColor* _selectedTextColor;
	unsigned long long _deselectedFontWeight;
	unsigned long long _selectedFontWeight;
	BOOL _showExpansionChevron;
	BOOL _accessoryState;
	unsigned long long _style;
	NSString* _toggleIconName;
	id<FBSearchResultsFiltersTableViewCellDelegate> _delegate;
	unsigned long long _colorScheme;

}

@property (assign,nonatomic) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * subText; 
@property (assign,nonatomic) BOOL showFooterSeparator; 
@property (assign,nonatomic) BOOL showExpansionChevron;                                                    //@synthesize showExpansionChevron=_showExpansionChevron - In the implementation block
@property (assign,nonatomic) BOOL accessoryState;                                                          //@synthesize accessoryState=_accessoryState - In the implementation block
@property (nonatomic,copy) NSString * toggleIconName;                                                      //@synthesize toggleIconName=_toggleIconName - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchResultsFiltersTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long colorScheme;                                               //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setAccessoryState:(BOOL)arg1 ;
-(void)setToggleIconName:(NSString *)arg1 ;
-(void)setShowFooterSeparator:(BOOL)arg1 ;
-(void)setShowExpansionChevron:(BOOL)arg1 ;
-(void)_setToggleSwitch:(BOOL)arg1 ;
-(void)_setMultiSelectOption:(BOOL)arg1 ;
-(void)_setSortOrderSelection:(BOOL)arg1 ;
-(void)_didToggleSwitch:(id)arg1 ;
-(BOOL)showFooterSeparator;
-(BOOL)showExpansionChevron;
-(BOOL)accessoryState;
-(NSString *)toggleIconName;
-(id)init;
-(void)setDelegate:(id<FBSearchResultsFiltersTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBSearchResultsFiltersTableViewCellDelegate>)delegate;
-(unsigned long long)style;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIImage *)iconImage;
-(void)_setupContentView;
-(unsigned long long)colorScheme;
-(void)setColorScheme:(unsigned long long)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setSubText:(NSString *)arg1 ;
-(NSString *)subText;
@end
