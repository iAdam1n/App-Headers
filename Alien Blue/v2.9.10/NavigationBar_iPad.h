/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/OverlayViewContainer.h>

@class JMViewOverlay, NSString, UIView;

@interface NavigationBar_iPad : OverlayViewContainer {

	BOOL _straightEdged;
	JMViewOverlay* _titleOverlay;
	NSString* _title;
	UIView* _contentView;
	double _shadowTriggerOffset;
	JMViewOverlay* _dividerOverlay;
	JMViewOverlay* _shadowOverlay;
	JMViewOverlay* _roundedEdgeOverlay;
	double _shadowOpacity;

}

@property (retain) JMViewOverlay * titleOverlay;                    //@synthesize titleOverlay=_titleOverlay - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
@property (assign) BOOL straightEdged;                              //@synthesize straightEdged=_straightEdged - In the implementation block
@property (assign) double shadowTriggerOffset;                      //@synthesize shadowTriggerOffset=_shadowTriggerOffset - In the implementation block
@property (retain) JMViewOverlay * dividerOverlay;                  //@synthesize dividerOverlay=_dividerOverlay - In the implementation block
@property (retain) JMViewOverlay * shadowOverlay;                   //@synthesize shadowOverlay=_shadowOverlay - In the implementation block
@property (retain) JMViewOverlay * roundedEdgeOverlay;              //@synthesize roundedEdgeOverlay=_roundedEdgeOverlay - In the implementation block
@property (assign) double shadowOpacity;                            //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(void)respondToStyleChangeNotification;
-(void)setTitleOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)titleOverlay;
-(void)setStraightEdged:(BOOL)arg1 ;
-(void)setShadowTriggerOffset:(double)arg1 ;
-(void)updateWithContentOffset:(CGPoint)arg1 ;
-(void)setShadowOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)shadowOverlay;
-(void)setDividerOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)dividerOverlay;
-(BOOL)straightEdged;
-(void)setRoundedEdgeOverlay:(JMViewOverlay *)arg1 ;
-(JMViewOverlay *)roundedEdgeOverlay;
-(void)respondToTripleTap:(id)arg1 ;
-(void)respondToDoubleTap:(id)arg1 ;
-(void)respondToTwoFingerSwipeUp:(id)arg1 ;
-(void)respondToTwoFingerSwipeDown:(id)arg1 ;
-(double)shadowTriggerOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowOpacity;
-(id)controller;
@end
