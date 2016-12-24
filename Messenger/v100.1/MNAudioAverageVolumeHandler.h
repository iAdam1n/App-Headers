/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAudioVolumeHandling.h>

@protocol MNAudioVolumeHandling;
@interface MNAudioAverageVolumeHandler : NSObject <MNAudioVolumeHandling> {

	id<MNAudioVolumeHandling> _nextHandler;
	unsigned long long _requestedMaxSampleSize;
	float _avgVolume;
	int _avgVolumeSampleSize;

}
-(void)handleVolume:(float)arg1 ;
-(id)initWithMaxSampleSize:(unsigned long long)arg1 ;
-(id)setNextHandler:(id)arg1 ;
-(void)_reset;
@end
