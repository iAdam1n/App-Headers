/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class CALayer, UIColor, FBStructuredSurveyUIStyleSheet, FBStructuredSurveyUIConfig;

@interface FBStructuredSurveyUICell : UITableViewCell {

	CALayer* _separatorLayer;
	double _separatorLineHeight;
	UIColor* _separatorLineColor;
	FBStructuredSurveyUIStyleSheet* _styleSheet;
	FBStructuredSurveyUIConfig* _config;

}

@property (assign,nonatomic) double separatorLineHeight;                               //@synthesize separatorLineHeight=_separatorLineHeight - In the implementation block
@property (nonatomic,retain) UIColor * separatorLineColor;                             //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIStyleSheet * styleSheet;              //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIConfig * config;                      //@synthesize config=_config - In the implementation block
+(double)heightForModelObject:(id)arg1 context:(id)arg2 frame:(CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5 ;
+(double)_topPaddingForStyleSheet:(id)arg1 ;
+(double)_bottomPaddingForStyleSheet:(id)arg1 ;
-(void)setStyleSheet:(FBStructuredSurveyUIStyleSheet *)arg1 ;
-(void)_configureSeparatorLine;
-(double)separatorLineHeight;
-(void)configureWithModelObject:(id)arg1 context:(id)arg2 ;
-(void)_layoutCellForFrame:(CGRect)arg1 ;
-(double)_cellContentHeight;
-(void)setSeparatorLineHeight:(double)arg1 ;
-(BOOL)_isButtonLike;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(FBStructuredSurveyUIConfig *)config;
-(unsigned long long)accessibilityTraits;
-(BOOL)_isChecked;
-(void)setConfig:(FBStructuredSurveyUIConfig *)arg1 ;
-(UIColor *)separatorLineColor;
-(void)setSeparatorLineColor:(UIColor *)arg1 ;
-(FBStructuredSurveyUIStyleSheet *)styleSheet;
@end
