/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class FB360GyroIndicatorView;

@interface FBNA360GyroIndicatorNode : ASDisplayNode {

	FB360GyroIndicatorView* _gyroIndicatorView;
	BOOL _paused;

}

@property (assign,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)didLoad;
-(void)_animateGyroIndicator;
-(id)init;
-(void)layout;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
@end

