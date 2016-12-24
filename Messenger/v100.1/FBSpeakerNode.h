/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class CALayer, CAShapeLayer, NSArray;

@interface FBSpeakerNode : ASDisplayNode {

	double _strikethroughState;
	double _soundWavesState;
	CALayer* _speakerSoundWavesLayer;
	CAShapeLayer* _speakerNegativeStrikethroughMaskShapeLayer;
	CAShapeLayer* _strikethroughShapeLayer;
	CAShapeLayer* _speakerShapeLayer;
	CALayer* _soundWavesLayer;
	NSArray* _soundWaveshapeLayers;
	CAShapeLayer* _soundWavesMaskShapeLayer;
	unsigned long long _soundWaves;

}
-(void)_staticInitialize;
-(void)setStrikethrough:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSoundWaves:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)didLoad;
-(void)willEnterHierarchy;
-(id)_soundWavesAnimatableProperty;
-(void)didExitHierarchy;
-(void)_layoutSpeakerStrikethrough;
-(void)_layoutSoundWaves;
-(void)_layoutsoundWaveShape:(id)arg1 withState:(double)arg2 ;
-(id)init;
-(void)layout;
@end
