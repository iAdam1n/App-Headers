/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSoccerFxEffect.h>

@protocol MNSoccerFxFireworkDelegate;
@class UIView, UIColor;

@interface MNSoccerFxFirework : UIView <MNSoccerFxEffect> {

	UIView* _spawnView;
	UIColor* _spawnColor;
	UIColor* _explosionColor;
	double _startTime;
	double _originX;
	double _endX;
	double _endY;
	double _burstRotation;
	double _spread;
	BOOL _hasExploded;
	id<MNSoccerFxFireworkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSoccerFxFireworkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<MNSoccerFxFireworkDelegate>)arg1 ;
-(id<MNSoccerFxFireworkDelegate>)delegate;
-(BOOL)updateForTime:(double)arg1 ;
-(void)setup;
@end
