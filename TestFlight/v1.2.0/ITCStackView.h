/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray;

@interface ITCStackView : UIView {

	BOOL _stretchesLastViewToFill;
	BOOL _resizesSubviewsToFit;
	int _orientation;
	int _separatorStyle;
	double _separatorLeadingGutter;
	double _separatorTrailingGutter;
	UIColor* _separatorColor;
	double _paddingBetweenViews;
	NSArray* _stackViews;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _separatorInsets;

}

@property (assign,nonatomic) int orientation;                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int separatorStyle;                          //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;                //@synthesize separatorInsets=_separatorInsets - In the implementation block
@property (assign,nonatomic) double separatorLeadingGutter;               //@synthesize separatorLeadingGutter=_separatorLeadingGutter - In the implementation block
@property (assign,nonatomic) double separatorTrailingGutter;              //@synthesize separatorTrailingGutter=_separatorTrailingGutter - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                    //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) double paddingBetweenViews;                  //@synthesize paddingBetweenViews=_paddingBetweenViews - In the implementation block
@property (nonatomic,copy) NSArray * stackViews;                          //@synthesize stackViews=_stackViews - In the implementation block
@property (assign,nonatomic) BOOL stretchesLastViewToFill;                //@synthesize stretchesLastViewToFill=_stretchesLastViewToFill - In the implementation block
@property (assign,nonatomic) BOOL resizesSubviewsToFit;                   //@synthesize resizesSubviewsToFit=_resizesSubviewsToFit - In the implementation block
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 stackViews:(id)arg3 ;
-(void)setPaddingBetweenViews:(double)arg1 ;
-(double)paddingBetweenViews;
-(NSArray *)stackViews;
-(void)setStackViews:(NSArray *)arg1 ;
-(double)separatorLeadingGutter;
-(void)setSeparatorLeadingGutter:(double)arg1 ;
-(double)separatorTrailingGutter;
-(void)setSeparatorTrailingGutter:(double)arg1 ;
-(BOOL)stretchesLastViewToFill;
-(void)setStretchesLastViewToFill:(BOOL)arg1 ;
-(BOOL)resizesSubviewsToFit;
-(void)setResizesSubviewsToFit:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)orientation;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)separatorStyle;
-(void)setOrientation:(int)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIEdgeInsets)separatorInsets;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
@end

