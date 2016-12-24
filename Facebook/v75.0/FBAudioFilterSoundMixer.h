/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAudioProcessor.h>

@class NSURL, NSString;

@interface FBAudioFilterSoundMixer : NSObject <FBAudioProcessor> {

	NSURL* _url;
	BOOL _looping;
	shared_ptr<facebook::audiofiltercore::AudioInput<short> >* _ambientSound;
	shared_ptr<facebook::audiofiltercore::AudioInputMixer<short> >* _mixer;
	/*^block*/id _samplesReady;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id samplesReady;                         //@synthesize samplesReady=_samplesReady - In the implementation block
-(void)setSamplesReady:(id)arg1 ;
-(void)configureSampleRate:(int)arg1 ;
-(void)processAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(id)samplesReady;
-(id)initWithURL:(id)arg1 looping:(BOOL)arg2 ;
-(void)_writeSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)flush;
-(void)tearDown;
@end
