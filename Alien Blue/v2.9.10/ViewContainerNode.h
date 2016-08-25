/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/JMOutlineNode.h>

@class UIView;

@interface ViewContainerNode : JMOutlineNode {

	BOOL _resizesToFitCell;
	UIView* _view;
	double _heightForViewPortrait;
	double _heightForViewLandscape;
	CGSize _padding;

}

@property (retain) UIView * view;                              //@synthesize view=_view - In the implementation block
@property (assign) CGSize padding;                             //@synthesize padding=_padding - In the implementation block
@property (assign) double heightForViewPortrait;               //@synthesize heightForViewPortrait=_heightForViewPortrait - In the implementation block
@property (assign) double heightForViewLandscape;              //@synthesize heightForViewLandscape=_heightForViewLandscape - In the implementation block
@property (assign) BOOL resizesToFitCell;                      //@synthesize resizesToFitCell=_resizesToFitCell - In the implementation block
+(Class)cellClass;
-(void)setResizesToFitCell:(BOOL)arg1 ;
-(void)setHeightForViewLandscape:(double)arg1 ;
-(void)setHeightForViewPortrait:(double)arg1 ;
-(double)heightForViewPortrait;
-(double)heightForViewLandscape;
-(BOOL)resizesToFitCell;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setPadding:(CGSize)arg1 ;
-(CGSize)padding;
-(id)initWithView:(id)arg1 ;
@end

