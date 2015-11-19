/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECView.h>

@class CALayer;

@interface ECSaveSortBackgroundView : ECView {

	CALayer* _separatorLineLayer;
	double _lineWidth;

}

@property (assign,nonatomic) double lineWidth;              //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)setLineWidthStyle:(id)arg1 ;
-(id)lineWidthStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)commonInit;
@end

