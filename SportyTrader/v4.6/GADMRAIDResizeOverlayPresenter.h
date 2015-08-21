/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/GADTransparentOverlayPresenter.h>

@protocol GADMRAIDEventHandling;
@class GADMRAIDResizeProperties, UIView;

@interface GADMRAIDResizeOverlayPresenter : GADTransparentOverlayPresenter {

	BOOL _dismissToDefaultState;
	GADMRAIDResizeProperties* _resizeProperties;
	id<GADMRAIDEventHandling> _MRAIDEventHandler;
	UIView* _referenceView;

}

@property (nonatomic,retain) GADMRAIDResizeProperties * resizeProperties;                     //@synthesize resizeProperties=_resizeProperties - In the implementation block
@property (assign,nonatomic) BOOL dismissToDefaultState;                                      //@synthesize dismissToDefaultState=_dismissToDefaultState - In the implementation block
@property (assign,nonatomic,__weak) id<GADMRAIDEventHandling> MRAIDEventHandler;              //@synthesize MRAIDEventHandler=_MRAIDEventHandler - In the implementation block
@property (nonatomic,retain) UIView * referenceView;                                          //@synthesize referenceView=_referenceView - In the implementation block
+(CGRect)adjustedContentFrame:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id<GADMRAIDEventHandling>)MRAIDEventHandler;
-(BOOL)resizePropertiesAreValid:(id)arg1 relativeToView:(id)arg2 ;
-(void)repositionContentIfNeeded;
-(BOOL)isReadyToPresent;
-(void)composeTransparentInterstitialViewsForPresentation;
-(void)updateTransparentInterstitialOrientation;
-(void)setResizeProperties:(GADMRAIDResizeProperties *)arg1 ;
-(GADMRAIDResizeProperties *)resizeProperties;
-(BOOL)dismissToDefaultState;
-(void)setDismissToDefaultState:(BOOL)arg1 ;
-(void)setMRAIDEventHandler:(id<GADMRAIDEventHandling>)arg1 ;
-(id)init;
-(id)initWithReferenceView:(id)arg1 ;
-(UIView *)referenceView;
-(void)setReferenceView:(UIView *)arg1 ;
-(CGRect)contentFrame;
@end
