/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UISearchBar, FBLazyCreator, UIColor;

@interface MNUniversalSearchBarTitleView : UIView {

	UISearchBar* _searchBar;
	FBLazyCreator* _searchTextFieldCreator;
	FBLazyCreator* _blurViewCreator;
	BOOL _usesBlurBackground;
	UIColor* _placeholderTextColor;

}

@property (assign,nonatomic) BOOL usesBlurBackground;                   //@synthesize usesBlurBackground=_usesBlurBackground - In the implementation block
@property (nonatomic,copy) UIColor * placeholderTextColor;              //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
-(void)_cutomizeApperance;
-(void)_updatePlaceholderTextColor;
-(void)setUsesBlurBackground:(BOOL)arg1 ;
-(BOOL)usesBlurBackground;
-(void)layoutSubviews;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(id)initWithSearchBar:(id)arg1 ;
@end
