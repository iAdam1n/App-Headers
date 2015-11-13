/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <QuartzCore/CALayer.h>

@interface SLKLineLayer : CALayer {

	double _lineWidth;

}

@property (assign,nonatomic) double lineWidth;              //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)newLine;
-(void)setStyle:(unsigned long long)arg1 fitToSize:(CGSize)arg2 animate:(BOOL)arg3 ;
-(void)setFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
@end

