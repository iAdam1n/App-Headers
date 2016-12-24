/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TS_MBBarProgressView : UIView {

	float _progress;
	UIColor* _lineColor;
	UIColor* _progressRemainingColor;
	UIColor* _progressColor;

}

@property (assign,nonatomic) float progress;                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                           //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * progressRemainingColor;              //@synthesize progressRemainingColor=_progressRemainingColor - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                       //@synthesize progressColor=_progressColor - In the implementation block
-(void)setProgressRemainingColor:(UIColor *)arg1 ;
-(UIColor *)progressRemainingColor;
-(void)registerForKVO;
-(void)unregisterFromKVO;
-(id)observableKeypaths;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
@end
