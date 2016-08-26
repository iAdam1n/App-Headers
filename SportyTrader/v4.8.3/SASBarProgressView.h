/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SASBarProgressView : UIView {

	float _progress;
	UIColor* _lineColor;
	UIColor* _progressRemainingColor;
	UIColor* _progressColor;

}

@property (assign,nonatomic) float progress;                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                           //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * progressRemainingColor;              //@synthesize progressRemainingColor=_progressRemainingColor - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                       //@synthesize progressColor=_progressColor - In the implementation block
-(void)registerForKVO;
-(void)unregisterFromKVO;
-(id)observableKeypaths;
-(UIColor *)progressRemainingColor;
-(void)setProgressRemainingColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end
