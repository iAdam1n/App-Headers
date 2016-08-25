/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, FrameView;

@interface EBUItemCellAccessoryView : UIView {

	double _maxWidth;
	NSMutableDictionary* _viewDict;
	FrameView* _dividerLine;

}

@property (assign,nonatomic) double maxWidth;                             //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewDict;              //@synthesize viewDict=_viewDict - In the implementation block
@property (nonatomic,retain) FrameView * dividerLine;                     //@synthesize dividerLine=_dividerLine - In the implementation block
-(double)optimalHeight;
-(double)dividerLineWidth;
-(double)labelPadding;
-(double)heightForLabel:(id)arg1 ;
-(double)heightForLabel:(id)arg1 width:(double)arg2 ;
-(double)widthForLabel:(id)arg1 ;
-(NSMutableDictionary *)viewDict;
-(void)setViewDict:(NSMutableDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)topMargin;
-(double)maxWidth;
-(double)rightMargin;
-(void)setMaxWidth:(double)arg1 ;
-(double)imageWidth;
-(double)imageHeight;
-(FrameView *)dividerLine;
-(void)setDividerLine:(FrameView *)arg1 ;
-(double)actualHeight;
-(double)leftMargin;
@end

