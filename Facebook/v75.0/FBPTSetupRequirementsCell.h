/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBRichTextView, UILabel, NSArray, NSMutableArray;

@interface FBPTSetupRequirementsCell : UITableViewCell {

	FBRichTextView* _successHeaderView;
	FBRichTextView* _failureHeaderView;
	UILabel* _instructionsLabel;
	NSArray* _requirementLabels;
	NSMutableArray* _glyphViews;

}
-(id)initWithPageName:(id)arg1 ;
-(void)_configureContentViewsWithPageName:(id)arg1 ;
-(id)_glyphViewAtIndex:(unsigned long long)arg1 ;
-(id)_requirementTitles;
-(id)_newRequirementsLabel;
-(id)_newGlyphView;
-(id)_newHeaderWithPageName:(id)arg1 title:(id)arg2 ;
-(void)setRequirements:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
