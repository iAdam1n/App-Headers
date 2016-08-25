/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@protocol PEResizeControlViewDelegate;
@interface PEResizeControl : UIView {

	id<PEResizeControlViewDelegate> _delegate;
	CGPoint _translation;
	CGPoint _startPoint;

}

@property (assign,nonatomic) CGPoint translation;                                          //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                                           //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic,__weak) id<PEResizeControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PEResizeControlViewDelegate>)arg1 ;
-(id<PEResizeControlViewDelegate>)delegate;
-(void)handlePan:(id)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end

