/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBezierPath;


@protocol MNCancelableBubbleSupporting
@property (nonatomic,readonly) UIBezierPath * bubblePath; 
@property (nonatomic,readonly) BOOL cancelButtonCanOverlay; 
@property (assign,getter=isCanceling,nonatomic) BOOL canceling; 
@required
-(void)setCanceling:(BOOL)arg1 animated:(BOOL)arg2;
-(id)compatibleCirclePathWithDiameter:(double)arg1;
-(UIBezierPath *)bubblePath;
-(BOOL)cancelButtonCanOverlay;
-(BOOL)isCanceling;
-(void)setCanceling:(BOOL)arg1;

@end
